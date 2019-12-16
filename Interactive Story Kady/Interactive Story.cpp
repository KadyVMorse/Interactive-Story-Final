//Addtional source file 


#include <iostream>;
# include "Interactive Story.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

using namespace std;

//gets the input from the player
int input()
{
	//lsits the string names and intger of age
	string Tale = "";
	string name = "";
	int age;

	//starts out saying this line and then asks for players input
	cout << "Hey you what are you doing here \n\n";


	cout << "Do I know you. Who are you: ";
	cin >> name;

	cout << "Really? How old are you ";
	cin >> age;

	cout << "You Are.\n" << name << ".\n Your Age Is .\n" << age << ".";

	cout << ".\n  Welp I don't know you but I'm going to tell you the epic tale of Green Riding Hood \n \n";



	


//continues the story
cout << "\nOff into the woods she goes." << endl;
cout << "Along the path she notices foot prints that she doesn't recognize.\n" << endl;
//calls a func to simplify repeating a question  which is on line 42
doo();
//choices to pick
cin << "\n\n1: Ignore and continue" << endl;
cin << "2: Go back to the village and get help\n" << endl;
//input value
cin >> i;
//value goes into a switch case 
switch (i)
{
	//case 1 says a line then breaks and continues in main
case 1: cout << "\nShe ignores them and continues on.\n" << endl; break;
	//case 2 goes to func getHelp on line 54 then breaks and continues in main
case 2: getHelp(); break;
}
//continues story
cout << "Little green riding hood ventures bak into the woods." << endl;
cout << "When she arrives to her grandfathers house, she notices the door open.\n" << endl;
//simplify repeating a question, line 42
doo();
//choices to pick
cout << "\n\n1: Call in" << endl;
cout << "2: Go in" << endl;
cout << "3:Send person in\n" << endl;
//input value
cin >> i;
//value goes into a switch case 
switch (i)
{
	//case 1 calls func callin on line 131 then breaks and continues in main
case 1: callin(); break;
	//case 2 calls func goin on line 144 then breaks and continues in main
case 2: goin(); break;
	//case 3 calls func sendin on line 156 then breaks and continues in main
case 3: sendin(); break;
}
//continues story
cout << "As she entered the kitchen, her grandfather turned around and she could see a cloth covering his face.\n" << endl;
cout << "\"Whys that rag on your face?\" she asks." << endl;
cout << "Oh, its just for my cold. Wont want you to catch it.\n" << endl;
cout << "Well i made a lovely stew. Would you like some?Then we can have dessert." << endl;
cout << "You will love the taste of my stew.\n" << endl;
//simplify repeating a question, line 48
say();
//choices to pick
cout << "\n\n1: What is it made of?" << endl;
cout << "2: Yes please." << endl;
cout << "3: No thanks.\n" << endl;
//input value
cin >> i;
//value goes into a switch case 
switch (i)
{
	//case 1 says a line then breaks and continues in main
case 1: cout << "Oh just beef and Veggies, just decided to make some so come and eat." << endl; break;
	//case 2 says a line then breaks and continues in main
case 2: cout << "she gets a bowl of some and eats it. it have a familiar taste.She cant figure out why." << endl; break;
	//case 3 starts func whynot on line 169 then breaks and continues in main
case 3: whynot(); break;
}
//continues story
cout << "That was delicious, would you like cookies little green riding hood?" << endl;
//simplify repeating a question, line 48
say();
//choices to pick
cout << "\n\n1: yes please." << endl;
cout << "2: No thanks.\n" << endl;
//input value
cin >> i;
//value goes into a switch case 
switch (i)
{
	//case 1 says a line then breaks and continues in main
case 1: cout << "The grandfather removes the cloth to reveal a red runny nose and takes a bite of the cookie.\nHe then says \"What, did you think i was someone else?\"" << endl; break;
	//case 2 says a line then breaks and continues in main
case 2: cout << "Oh just one? says grandfather.\nShe says \"Oh alright.\" The grandfather removes the cloth to reveal a red runny nose and takes a bite of the cookie.\nHe then says \"What, did you think i was someone else?\"" << endl; break;
}
//continues story
cout << "\n\"I better get going home. Thanks for the stew. Ill leave the cookies here with you.\" she says as she is walking out." << endl;
cout << "Grandfather waves and thanks her for coming by and he closes his door." << endl;
//finishes story
cout << "\n\nFIN." << endl;
//pause program
system("pause");
//returns a value of 0
return 0;




