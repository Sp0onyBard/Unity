using UnityEngine;
using System.Collections;

//Class controlling the spawning of obstacles
public class ObstacleSpawning : MonoBehaviour {

    private float rate; //Wait time between cube generation
    private bool cubeActive; //Boolean for deciding whether or not to spawn

    public float max; //Maximum x-coordinate to spawn cube
    public float min; //Minimum x-coordinate to spawn cube

    public GameObject cube; //field for cube prefab

    // Use this for initialization
    void Start () { //Set an initial rate
        rate = 0.03f;
	}
	
	// If wait time as elapsed, spawn another cube
	void Update () { 
        if (!cubeActive)
        {
            StartCoroutine(sendCube());
        }	
	}

    IEnumerator sendCube() //Instantiate a cube at a randomized x-coordinate and preset z and t coordinates
    {
        cubeActive = true;
        float xpos;
        Vector3 position;
        xpos = Random.Range(min, max);
        position = new Vector3(transform.position.x + xpos, transform.position.y + 0.25f, transform.position.z);
        yield return new WaitForSeconds(rate);
        Instantiate(cube, position, transform.rotation);
        cubeActive = false;
    }
}
