using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPoint : MonoBehaviour {

    public float xmin;
    public float xmax;

    public float ymin;
    public float ymax;

    public GameObject EnemyPrefab;

    private Quaternion rotation;

    void Start()
    {
        rotation = new Quaternion(0, 0, 0, 0);
    }


    public void Spawn()
    {
        float xpos = Random.Range(xmin, xmax);
        float ypos = Random.Range(ymin, ymax);

        Vector3 pos = new Vector3(xpos, 0.25f, ypos);
        Instantiate(EnemyPrefab, pos, rotation);
    }
}
