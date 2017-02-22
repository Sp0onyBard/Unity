using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreKeeping : MonoBehaviour {

    public static int score;

    private Text text;

	// Use this for initialization
	void Start () {
        text = gameObject.GetComponent<Text>();
	}
	
	// Update is called once per frame
	
    public void SetScore()
    {
        text.text = "Score: " + score;
    }
}
