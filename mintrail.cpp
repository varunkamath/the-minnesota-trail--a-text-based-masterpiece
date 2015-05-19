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
	char choice = ' ';
	int wagon = 0;
	char water = ' ';
	string dec = " ";
	cout << ",--.                                    ....       " << endl;
	cout << "    )                                ..      ..    " << endl;
	cout << "  _'-. _                           ..   ,--.   ..  " << endl;
	cout << " (    ) ),--.                      .   (    )   .  " << endl;
	cout << "             )-._                  ..   `--'   ..  " << endl;
	cout << "_________________)                   ..      ..    " << endl;
	cout << "                                        ....       " << endl;
	cout << "                                                   " << endl;
	cout << "                                                   " << endl;
	cout << "! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !" << endl;
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	cout << "|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|!|" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I|I" << endl;
	cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
    
    cout << "You are about to embark on the Minnesota Trail; a path to fulfilling your destiny" <<endl;
	cout << "Want to continue on this eventful journey? (Y/N)" <<endl;
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		cout << "Let us begin the adventure" <<endl;
	}
	else if (choice == 'N' || choice == 'n') {
		cout << "Weak. Too bad, Everything of value was stolen from you. "; 
		cout << "You have no choice but to continue" <<endl;
	}

	cout << "Luckily, you have enough, $1000, to buy a wagon and supplies\n\n" <<endl;
	cout << "Here are your options (Both wagons cost $500):";
	cout << "\n1. The wagon has enhanced storage space for food, water, and ammunition, but is susceptible to damage" <<endl;
	cout << "\n2. This wagon enables one to camp within the wagon and build a fire, but has less storage space" <<endl;
	cout << "(1 or 2)";
	cin >> wagon;
	
	if (wagon == 1) {
		cout << "Wise choice, but let's hope the wagon holds together..\n" <<endl;
	}
	if (wagon == 2) {
		cout << "The comfort wagon it is. But maybe no food for you...\n" <<endl;
	}
	if (wagon > 2) {
		cout << "Nice try, buddy\n" << endl;
		do {
			cout << "Here are your options (Both wagons cost $500):";
			cout << "\n1. The wagon has enhanced storage space for food, water, and ammunition, but is susceptible to damage" <<endl;
			cout << "\n2. This wagon enables one to camp within the wagon and build a fire, but has less storage space" << endl;
			cout << "\n(1 or 2)";
			cin >> wagon;
		} while (wagon > 2);
	}
	
	// text art here
	cout << "You come up to a gushing stream. Unfortunately";
	cout << " you did not think to buy a fishing pole\n" <<endl;
	cout << "Fish with your bare hands\n" <<endl;
	cout << "Eat what you have\n" <<endl;
	cout << "(fish/eat)";
	cin >> dec;
	
	if (dec == "fish") {
		cout << "You successfully catch 3 fish, but lose a finger in the process" << endl;
	}
	
	if (dec == "eat") {
		cout << "You have 5 days of rationed food left" <<endl;
	}
	cout << "Nice. You have covered 100 miles in 2 weeks. A respectable pace" <<endl;
	cout << "Your food supply is meager, and your water is very scarce. Luckily, you come";
	cout << " across a freshwater stream" <<endl;
	cout << "Stop to collect water?" << endl;
	cout << "(Y/N)";
	cin >> choice;
	
	if (choice == 'Y' || choice == 'y' ) {
		cout << "The cool water trickles down your throat quenching your recurring thirst";
		cout << "  Continue down the path?" <<endl;
		cout << "Y" <<endl;
		cout << "N" <<endl; 
		cin >> water;
			if (water == 'Y' || water == 'y' )
			 {
				cout << "OK." << endl;
				cout << "After travelling for yet another week, you seem to have contracted dysentery";
				cout << " from the water you collected previously" <<endl;
			}
			else if (water != 'Y' || water != 'y' ) 
			{
				cout << "You Die; THE END" <<endl;
				return 0;
			}
	}
	return 0;
}