using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EnemySpawner : MonoBehaviour {
    public GameObject player;
    public Text score;
    public float delay;

    private int numchildren;
    private float spawndelay;
    private bool spawning;
    private int spawnIndex;
    private SpawnPoint spawnPt;
    public static int scoreNum;

	// Use this for initialization
	void Start () {
        numchildren = transform.childCount;
        spawndelay = 2.0f;
        scoreNum = 0;
        
	}

    void Update()
    {
        if (!spawning)
        {
            StartCoroutine(Spawn());
        }
    }
	
	IEnumerator Spawn()
    {
        spawning = true;
        spawnIndex = Random.Range(1, transform.childCount);
        spawnPt = transform.GetChild(spawnIndex).gameObject.GetComponent<SpawnPoint>();
        spawnPt.Spawn();
        yield return new WaitForSeconds(spawndelay);
        spawning = false;
        
    }

    void OnEnable()
    {
        EnemyScript.OnDestruction += IncreaseScore;
    }

    void OnDisable()
    {
        EnemyScript.OnDestruction -= IncreaseScore;
    }

    void IncreaseScore()
    {
        scoreNum++;
        score.text = "Score: " + scoreNum;
    }
}
