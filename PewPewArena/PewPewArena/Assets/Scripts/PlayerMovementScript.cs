using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class PlayerMovementScript : MonoBehaviour {

    private Rigidbody rb;
    private Vector3 right;
    private Vector3 left;
    private GameObject barrel;
    private GameObject gun;
    private bool firing;
    private bool dying;
    private int health;
    private AudioSource aus;
    private MeshRenderer rend;
    private Vector3 deathrot;
    private Vector3 rotOffset;
 
    public float speed;
    public float sensitivity;
    public GameObject bulletPrefab;
    public Text HealthText;
    public Material DangerColor;
    public Material NormalColor;

	// Use this for initialization
	void Start () {
        rb = GetComponent<Rigidbody>();
        rend = GetComponent<MeshRenderer>();
        aus = GetComponent<AudioSource>();
        right = new Vector3(0, 10, 0);
        left = new Vector3(0, -10, 0);
        gun = gameObject.transform.GetChild(0).gameObject;
        barrel = gun.transform.GetChild(0).gameObject;
        firing = false;
        dying = false;
        health = 5;
        deathrot = new Vector3(0, 0, 90);
        rotOffset = new Vector3(0, 90, 0);
        mRotate();
	}
	
	// Update is called once per frame
	void Update () {
        if (!dying)
        {
            float moveHorizontal = Input.GetAxisRaw("Horizontal");
            float moveVertical = Input.GetAxisRaw("Vertical");

            Vector3 movement = new Vector3(moveVertical, 0.0f, -moveHorizontal);
            movement = movement.normalized * speed * Time.deltaTime;
            mRotate();
            rb.MovePosition(transform.position + movement);

            Fire();
        }
    }

    void Rotate()
    {
        
        if (Input.GetKey(KeyCode.Q))
        {
            transform.Rotate(-Vector3.up*Time.deltaTime*sensitivity);
        } 
        if (Input.GetKey(KeyCode.E))
        {
            transform.Rotate(Vector3.up*Time.deltaTime*sensitivity);
        }
    }

    //From http://answers.unity3d.com/questions/399039/how-to-get-object-to-aim-at-mouse-in-top-down-3d-s.html
    void mRotate()
    {
        if (Time.timeScale == 1)
        {
            Vector3 v3T = Input.mousePosition;
            v3T.z = Mathf.Abs(Camera.main.transform.position.y - transform.position.y);
            v3T = Camera.main.ScreenToWorldPoint(v3T);
            transform.LookAt(v3T);
            transform.Rotate(-rotOffset);
            //Debug.Log(Input.mousePosition);
            //Debug.Log(v3T);
        }
    }


    void Fire()
    {
        if (Input.GetKey(KeyCode.Space) || Input.GetButtonDown("Fire1"))
        {
            if (!firing)
            {
                StartCoroutine(Shoot());
            }
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            health = health - 1;
            UpdateHealth();
            StartCoroutine(TakeDamage());
        }
        if (health <= 0)
        {
            StartCoroutine(GameOver());
        }
    }
     
    void UpdateHealth()
    {
        HealthText.text = "Health: " + health;
    }
        
    IEnumerator Shoot()
    {
        Rigidbody rbb;
        GameObject bullets;
        Quaternion bulrot;
        bulrot = new Quaternion(0,0,0,0);
        firing = true;
        bullets = Instantiate(bulletPrefab, barrel.transform.position, gun.transform.rotation) as GameObject;
        rbb = bullets.GetComponent<Rigidbody>();
        aus.Play();
        rbb.AddForce(-barrel.transform.up * 500);
        yield return new WaitForSeconds(0.3f);
        Destroy(bullets, 0.5f);
        firing = false;       
    }

    IEnumerator TakeDamage()
    {
        rend.material = DangerColor;
        yield return new WaitForSeconds(1.0f);
        rend.material = NormalColor;
    }

    IEnumerator GameOver()
    {
        dying = true;
        transform.Rotate(deathrot);
        yield return new WaitForSeconds(0.5f);
        SceneManager.LoadScene(1);
    }
}
