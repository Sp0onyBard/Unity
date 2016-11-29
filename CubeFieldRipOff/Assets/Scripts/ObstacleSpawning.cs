using UnityEngine;
using System.Collections;

public class ObstacleSpawning : MonoBehaviour {

    private float rate;
    private bool cubeActive;

    public float max;
    public float min;

    public GameObject cube;

    // Use this for initialization
    void Start () {
        rate = 0.05f;
	}
	
	// Update is called once per frame
	void Update () {
        if (!cubeActive)
        {
            StartCoroutine(sendCube());
        }	
	}

    IEnumerator sendCube()
    {
        cubeActive = true;
        float xpos;
        Vector3 position;
        xpos = Random.Range(min, max);
        position = new Vector3(xpos, transform.position.y + 0.25f, transform.position.z);
        yield return new WaitForSeconds(rate);
        Instantiate(cube, position, transform.rotation);
        cubeActive = false;
    }
}
