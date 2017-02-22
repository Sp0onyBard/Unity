using UnityEngine;
using System.Collections;

public class EnemyScript : MonoBehaviour {

    public delegate void DestructionAction();
    public static event DestructionAction OnDestruction;

    private UnityEngine.AI.NavMeshAgent nav;
    private GameObject player;
    private ParticleSystem ps;
    private MeshRenderer mr;
    private CapsuleCollider cc;
    private bool dying;
    private AudioSource aus;

	// Use this for initialization
	void Start () {
        nav = gameObject.GetComponent<UnityEngine.AI.NavMeshAgent>();
        player = GameObject.Find("Player");
        ps = gameObject.GetComponent<ParticleSystem>();
        mr = gameObject.GetComponent<MeshRenderer>();
        aus = gameObject.GetComponent<AudioSource>();
        cc = gameObject.GetComponent<CapsuleCollider>();
        dying = false;
	}
	
	// Update is called once per frame
	void Update () {
        if (!dying)
        {
            nav.SetDestination(player.transform.position);
        }
	}

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Bullet"))
        {
            StartCoroutine(Destruction());
        }
        if (collision.gameObject.CompareTag("player"))
        {
            StartCoroutine(Pause());
        }
    }

    IEnumerator Destruction()
    {
        dying = true;
        nav.enabled = false;
        mr.enabled = false;
        cc.enabled = false;
        aus.Play();
        ps.Play();
        OnDestruction();       
        yield return new WaitForSeconds(1.0f);
        Destroy(this.gameObject);
    }

    IEnumerator Pause()
    {
        if (!dying)
        {
            nav.Stop();
        }
        yield return new WaitForSeconds(2.0f);
        if (!dying)
        {
            nav.Resume();
        }
    }
}
