#pragma once
 //Header File for the interactive story


void dessert()
{
	cout << "\nShe sees some yummy cookies and gets them." << endl;

}

//func called from line 196
void meat()
{
	cout << "\nAre you sure your grandfather needs these?\n" << endl;
	//starts another choice
	cout << "1: Yes of course " << endl;
	cout << "2: nah he will be fine\n" << endl;
	//creats a intiger for choice
	int o = 0;
	//input for value
	cin >> o;
	//value goes to another switch case
	switch (o)
	{
		//case 1 says a line then goes to dessert func on line 13 then breaks and continues in main
	case 1: cout << "\nWell we are out but I can order you some another time.\n"; dessert(); break;
		//case 2 says a line then goes to dessert func on line 13 then breaks  and continues in main
	case 2: cout << "\nYour right, better wait and see.\n"; dessert(); break;
	}

}

//func called from lines 57, 206, 224 to simplify repeating
void doo()
{
	cout << "What does she do?" << endl;
}

//func called from lines 112, 248, 268 to simplify repeating
void say()
{
	cout << "What does she say?" << endl;
}

//func called from lines
void getHelp()
{
	cout << "\nShe goes back to the village to see what help she could get.\n" << endl;
	doo();
	//choices to pick
	cout << "\n\n1: Help SOS" << endl;
	cout << "2: Go back to the spoopy woods\n" << endl;
	//creats a intiger for choice
	int o = 0;
	//input value
	cin >> o;
	//value goes into a switch case 
	switch (o)
	{
		//case 1 says a line then func is done it breaks and continues in main
	case 1: cout << "She asks around and someone agrees to go check on her grandfather.\n" << endl; break;
		//case 2 says a line then func is done it breaks and continues in main
	case 2: cout << "She decides to brave the woods and go on her own.\n" << endl; break;

	}

}

//func called from lines
void back()
{
	cout << "My, what happened to your back?" << endl;
	cout << "\"Oh nothing dear\" says grandfather with his back still turned." << endl;
}

//func called from lines
void weirdperson()
{


	cout << "You havent seen anyone weird have you?\n" << endl;
	cout << "\"A young man came through not to long ago. Why?\" says grandfather with his back still turned." << endl;

	//choices to pick
	cout << "\n\n1: Is he still here?" << endl;
	cout << "2: Was he just passing through?\n" << endl;
	//creats a intiger for choice
	int o = 0;
	//input value
	cin >> o;
	//value goes into a switch case 
	switch (o)
	{
		//case 1 says a line then func is done it breaks and continues in main
	case 1: cout << "\nNo, he left.\n" << endl; break;
		//case 2 says a line then func is done it breaks and continues in main
	case 2: cout << "Oh yes, just passing.\n" << endl; break;
	}
}

//func called from lines 140, 152, 164 to simplify repeating
void choice()
{
	say();
	//choices to pick
	cout << "\n\n1: Your back?" << endl;
	cout << "2: Have you seen anyone around?" << endl;
	//creats a intiger for choice
	int o = 0;
	//input value
	cin >> o;
	//value goes into a switch case 
	switch (o)
	{
		//case 1 starts func back on line 78 then breaks and continues in main
	case 1: back(); break;
		//case 2 starts func back on line 85 then breaks and continues in main
	case 2: weirdperson(); break;
	}
}

//func called from line 235
void callin()
{
	cout << "\nShe walks towards the door and shouts hello. She hears a voice call from inside saying come in." << endl;
	cout << "She goes to the door and peers in. She sees no one." << endl;
	cout << "She tells the person that she will go in on her own and sends him off." << endl;
	cout << "Taking a few steps in she can hear movement in the kitchen." << endl;
	cout << "\"Grandfather! I brought desserts!\" she says as she approaches the kitchen." << endl;
	cout << "She sees him over the sink, hunched much more than usual\n\n" << endl;
	//starts func choice to simplify repreaing on line 110
	choice();
}

//func called from line 237
void goin()
{
	cout << "\nShe decides to go in and tells the person she brought with her so he decides to leave." << endl;
	cout << "She goes to the door and peers in. She sees no one." << endl;
	cout << "She takes a fer steps in and can hear movement in the kitchen" << endl;
	cout << "\"Grandfather! I brought desserts!\" she says as she approaches the kitchen." << endl;
	cout << "She sees him over the sink, hunched much more than usual\n\n" << endl;
	//starts func choice to simplify repreaing on line 110
	choice();
}

//func called from line 239
void sendin()
{
	cout << "\nShe asks the person to go in and check it out." << endl;
	cout << "He goes in and says he hears someone in the kitchen but can\'t see anyone." << endl;
	cout << "she then thanks the person for helping and says she will continue on her own." << endl;
	cout << "He then leaves and she heads to the kitchen." << endl;
	cout << "\"Grandfather! I brought desserts!\" she says as she approaches the kitchen." << endl;
	cout << "She sees him over the sink, hunched much more than usual\n\n" << endl;
	//starts func choice to simplify repreaing on line 110
	choice();
}

//func called from lines
void whynot()
{
	cout << "\nOh why not dear? says grandfather." << endl;
	cout << "What is it made of? she asks." << endl;
	cout << "Oh just beef and Veggies, just decided to make some so come and eat.\n" << endl;

}
