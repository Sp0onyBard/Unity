using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

//Class for controlling the player object
public class PlayerMovement : MonoBehaviour {

    public float speed; //movement speed

    private float maximum = 350;//Maximum angle, for use in camera tilting
    private float minimum = 10;//Minimum angle, for use in camera tilting
    private Rigidbody rb; //field for ridigbody component
    private Camera cam; //field for camera component
    private Transform camtran; //field for transform of camera
    private float sensitivity = 2; //factor for magnitude of camera tilting

    private GameObject camera; //field for camera object
    private GameObject spawner; //field for the cube spawner
    private GameObject particles; //field for the particle emitter
    private ParticleSystem ps; //field for particle system component
    private PlayerMovement pm; //field for this script
    private MeshRenderer mr; //field for mesh renderer component
    private BoxCollider bc; //field for box collider component
    

    void Start() //Initialize all fields
    {
        Transform spawnt;
        Transform particlet;
        camtran = gameObject.transform.GetChild(0);
        camera = camtran.gameObject;
        cam = camera.GetComponent<Camera>();

        spawnt = gameObject.transform.GetChild(3);
        spawner = spawnt.gameObject;

        particlet = gameObject.transform.GetChild(1);
        particles = particlet.gameObject;
        ps = particles.GetComponent<ParticleSystem>();
        
        rb = GetComponent<Rigidbody>();
        pm = GetComponent<PlayerMovement>();
        mr = GetComponent<MeshRenderer>();
        bc = GetComponent<BoxCollider>();
    }

    void FixedUpdate() //Move player object left or right and tilt camera
    {
        float moveHorizontal = Input.GetAxisRaw("Horizontal");

        Vector3 movement = new Vector3(moveHorizontal*50, 0.0f, 0.0f);
        movement = movement.normalized *speed* Time.deltaTime;
        setTilt(moveHorizontal, maximum, minimum, camtran);
        rb.MovePosition(transform.position + movement);

    }


    IEnumerator GameOver() //Game over sequence. Switch scene and disable components
    {
        ps.Play();
        pm.enabled = false;
        mr.enabled = false;
        bc.enabled = false;
        spawner.SetActive(false);
        yield return new WaitForSeconds(1f);
        SceneManager.LoadScene(1);
    }

    void OnCollisionEnter(Collision collision) //Check for collision with obstacle
    {
        if (collision.gameObject.CompareTag("Obstacle"))
        {
            StartCoroutine(GameOver());
        }
    }

    void setTilt(float move, float max, float min, Transform camT) //Set the camera's rotation
    {
        Vector3 result;
        result = tiltCamera(move, max, min, camT);
        camT.eulerAngles = result; 
    }

    Vector3 tiltCamera(float move, float max, float min, Transform camT) //Calculate camera's rotation
    {
        float tilt;
        Vector3 newpos;
        if (move == 0) //Reset to normal
        {
            tilt = Mathf.LerpAngle(camT.eulerAngles.z, 0, Time.deltaTime*sensitivity);
            newpos = new Vector3(5, 0, tilt);
            return newpos;
        } else if (move < 0)//Tilt left
        {
            tilt = Mathf.LerpAngle(camT.eulerAngles.z, 10, Time.deltaTime*sensitivity);
            newpos = new Vector3(5, 0, tilt);
            return newpos;
        } else //Tilt right
        {
            tilt = Mathf.LerpAngle(camT.eulerAngles.z, 350, Time.deltaTime*sensitivity);
            newpos = new Vector3(5, 0, tilt);
            return newpos;
        }
    }

}

