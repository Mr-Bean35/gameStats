/*
PROGRAM NAME: GameStats.cpp
DATE: 4/26/2022 
PROGRAMMER NAME: Benjamin Hensley Jr.
*/

# include <iostream>
using namespace std;

int main()
{
	unsigned int score = 5000;
	cout << "Your score is " << score << endl;

	score += 100;
	cout << "Your score is " << score << endl;

	int lives = 3;
	cout << "You have " << ++lives << " lives" << endl;
	cout << lives << endl;

	lives = 3;
	cout << "You have " << lives++ << " lives" << endl;
	cout << lives << endl;

	lives = 3;
	int bonus = lives++ * 10;
	cout << "Your Bonus lives: " << bonus << endl;
	cout << lives << endl;

	lives = 3;
	bonus = ++lives * 10;
	cout << "Your Bonus lives: " << bonus << endl;
	cout << lives << endl;
	return 0;
}