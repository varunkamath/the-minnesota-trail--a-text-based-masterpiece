//title: the minnesota trail
//publishers: v/arun
//Description: slightly less inefficient calculator
//Date: 10 May 2015

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
char choice = ' ';
int wagon = 0;
    
    cout << "You are about to embark on the Minnesota Trail; a path to fulfilling your destiny" <<endl;
	cout << "Want to continue on this eventful journey?";
	cout << "a. Yes";
	cout << "b. No";
	cin >> choice;

	if (choice == 'a') {
		cout << "Let us begin the adventure" <<endl;
	}
	if (choice == 'b') {
		cout << "Weak. Too bad, Everything of value was stolen from you."; 
		cout << "You have no choice but to continue" <<endl;
	}

	cout << "Luckily, you have enough, $1000, to buy a wagon and supplies" <<endl;
	cout << "Here are your options (Both wagons cost $500)";
	cout << "1. The wagon has enhanced storage space for food, water, and ammunition, but is susceptible to damage" <<endl;
	cout << "2. This wagon enables one to camp within the wagon and build a fire, but has less storage space" <<endl;
	
	if (wagon == 1) {
		cout << "Wise choice, but let's hope the wagon holds together.. " <<endl;
	}
	if (wagon == 2) {
		cout << "The comfort wagon it is. But maybe no food for you..." <<endl;
	}
	
	return 0;
} 
