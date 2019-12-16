// interactiveStory.cpp : Defines the entry point for the console application.
//


#include <iostream>

using namespace std;
# include "Interactive Story.h"

//main starts line 178


//func called from line 198

// start of the code.
int main()
{
	//starts story
	cout << "\nlittle green riding hood was on her way to her grandfathers." << endl;
	cout << "On her way there she stops in the village to gather some groceries before she travels into the woods." << endl;
	cout << "\nWhat does she need?\n\n" << endl;
	//choices to pick
	cout << "1: Meat and Veggies" << endl;
	cout << "2: Desserts\n" << endl;
	//creats a intiger for all my choices
	int i = 0;
	//person inputs a value
	cin >> i;
	//value goes into a switch case 
	//this takes the value and selects the case with the same value and executes it
	switch (i)
	{
		//case 1 starts func meat on line 20 once the func is done it break away and continues in main
	case 1: meat(); break;
		//case 2 starts func dessert on line 13 once the func is done it break away and continues in main
	case 2: dessert(); break;

	}

