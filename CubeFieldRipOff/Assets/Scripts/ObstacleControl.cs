using UnityEngine;
using System.Collections;

//Class for controlling individual obstacle cubes
public class ObstacleControl : MonoBehaviour
{

    private int speed = 10; //Travelling speed
    private Rigidbody rb; //Rigidbody component variable
    private Vector3 offset; //What to add to current position when moving

    //Get component and calculate offset 
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        offset = Vector3.back;
        offset = offset.normalized * speed * Time.deltaTime;
    }

    //Move the cube, delete when it is past a certain point.
    void FixedUpdate()
    {
        if (transform.position.z <= -25)
        {
            Destroy(gameObject);
        }
        else
        {
            rb.MovePosition(transform.position + offset);
        }
    }
}

