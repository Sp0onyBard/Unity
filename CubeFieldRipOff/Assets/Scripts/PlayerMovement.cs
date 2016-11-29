using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class PlayerMovement : MonoBehaviour {

    public float speed;

    private float vertspd;
    private float maximum = 350;
    private float minimum = 10;
    private Rigidbody rb;
    private Vector3 next;
    private Camera cam;
    private Transform camtran;
    private float sensitivity = 2;

    private GameObject camera;
    private GameObject spawner;
    private GameObject particles;
    private ParticleSystem ps;
    private PlayerMovement pm;
    private MeshRenderer mr;
    private BoxCollider bc;
    

    void Start()
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

    void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxisRaw("Horizontal");

        Vector3 movement = new Vector3(moveHorizontal*50, 0.0f, 0.0f);
        movement = movement.normalized *speed* Time.deltaTime;
        setTilt(moveHorizontal, maximum, minimum, camtran);
        rb.MovePosition(transform.position + movement);

    }


    IEnumerator GameOver()
    {
        ps.Play();
        pm.enabled = false;
        mr.enabled = false;
        bc.enabled = false;
        spawner.SetActive(false);
        yield return new WaitForSeconds(1f);
        SceneManager.LoadScene(1);
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Obstacle"))
        {
            StartCoroutine(GameOver());
        }
    }

    void setTilt(float move, float max, float min, Transform camT)
    {
        Vector3 result;
        result = tiltCamera(move, max, min, camT);
        camT.eulerAngles = result; 
    }

    Vector3 tiltCamera(float move, float max, float min, Transform camT)
    {
        float tilt;
        Vector3 newpos;
        if (move == 0)
        {
            tilt = Mathf.LerpAngle(camT.eulerAngles.z, 0, Time.deltaTime*sensitivity);
            newpos = new Vector3(5, 0, tilt);
            return newpos;
        } else if (move < 0)
        {
            tilt = Mathf.LerpAngle(camT.eulerAngles.z, 10, Time.deltaTime*sensitivity);
            newpos = new Vector3(5, 0, tilt);
            return newpos;
        } else
        {
            tilt = Mathf.LerpAngle(camT.eulerAngles.z, 350, Time.deltaTime*sensitivity);
            newpos = new Vector3(5, 0, tilt);
            return newpos;
        }
    }

}

