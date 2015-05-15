//title: the minnesota trail
//publishers: v/arun
//Description: slightly less inefficient calculator
//Date: 10 May 2015

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	cout << "+--------------------------------------------------------------------------------------------------------+" << endl;
	cout << "|   ____  _  _  ____    _  _  __  __ _  __ _  ____  ____   __  ____  __     ____  ____   __   __  __     |" << endl;
	cout << "|  (_  _)/ )( \\(  __)  ( \\/ )(  )(  ( \\(  ( \\(  __)/ ___) /  \\(_  _)/ _\\   (_  _)(  _ \\ / _\\ (  )(  )    |" << endl;
	cout << "|    )(  ) __ ( ) _)   / \\/ \\ )( /    //    / ) _) \\___ \\(  O ) )( /    \\    )(   )   //    \\ )( / (_/\\  |" << endl;
	cout << "|   (__) \\_)(_/(____)  \\_)(_/(__)\\_)__)\\_)__)(____)(____/ \\__/ (__)\\_/\\_/   (__) (__\\_)\\_/\\_/(__)\\____/  |" << endl;
	cout << "+--------------------------------------------------------------------------------------------------------+" << endl;
	cout << "\f\f\f\f\f";
	char choice = ' ';
	int wagon = 0;
    
    cout << "You are about to embark on the Minnesota Trail; a path to fulfilling your destiny" <<endl;
	cout << "Want to continue on this eventful journey? (Y/N)" <<endl;
	cin >> choice;

	if (choice == 'Y' || 'y') {
		cout << "Let us begin the adventure" <<endl;
	}
	else if (choice == 'N' || 'n') {
		cout << "Weak. Too bad, Everything of value was stolen from you."; 
		cout << "You have no choice but to continue" <<endl;
	}

	cout << "Luckily, you have enough, $1000, to buy a wagon and supplies\n\n" <<endl;
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