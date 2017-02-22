using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//implementation of this pause screen from:
//https://www.sitepoint.com/adding-pause-main-menu-and-game-over-screens-in-unity/
public class PauseScreen : MonoBehaviour {
    public GameObject pause;
    public GameObject screen;

	// Use this for initialization
	void Start () {
        pause.SetActive(false);
        screen.SetActive(false);   	
	}

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            if (Time.timeScale == 1)
            {
                Time.timeScale = 0;
                pause.SetActive(true);
                screen.SetActive(true);
            }
            else
            {
                Time.timeScale = 1;
                pause.SetActive(false);
                screen.SetActive(false);
            }
        }
    }
}
