using UnityEngine;
using System.Collections;

public class ObstacleControl : MonoBehaviour {

    private int speed = 10;
    private Rigidbody rb;
    private Vector3 offset;
    
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        offset = Vector3.back;
        offset = offset.normalized * speed * Time.deltaTime;
    }
    
	void FixedUpdate()
    {
        if (transform.position.z <= -25)
        {
            Destroy(gameObject);
        } else
        {
            rb.MovePosition(transform.position + offset);
        }
    }
}
