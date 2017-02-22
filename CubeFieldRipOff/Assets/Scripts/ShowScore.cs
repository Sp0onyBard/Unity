using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ShowScore : MonoBehaviour {

    private Text score;

	// Use this for initialization
	void Start () {
        score = gameObject.GetComponent<Text>();
        score.text = "Game Over...\n" + "Score: " + PlayerMovement.scoren + "\nSpacebar to play once more?";
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.Return))
        {
            SceneManager.LoadScene(1);
        }
    }

  
}
