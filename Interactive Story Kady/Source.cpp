/ interactive fiction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cctype>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

//string Hi(string name);

int main()
{

	string name = "";
	cout << "whats your name?" << endl;
	cin >> name;

	Hi(name);
	Hi("sally");
	name = "barney";
	string getReturn;
	getReturn = Hi(name);
	cout << "The function said back to us " << getReturn << endl;
