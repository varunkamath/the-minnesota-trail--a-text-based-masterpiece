//title: the minnesota trail
//publishers: v/arun
//Description: slightly less inefficient calculator
//Date: 10 May 2015

#include <iostream>
#include <stdio.h>
#include <string>
#ifdef WIN32
#include <windows.h>
#elif _POSIX_C_SOURCE >= 199309L
#include <time.h>   // for nanosleep
#else
#include <unistd.h> // for usleep
#endif

void sleep_ms(int milliseconds) // cross-platform sleep function
{
#ifdef WIN32
    Sleep(milliseconds);
#elif _POSIX_C_SOURCE >= 199309L
    struct timespec ts;
    ts.tv_sec = 0;
    ts.tv_nsec = milliseconds * 1000000;
    nanosleep(&ts, NULL);
#else
    usleep(milliseconds * 1000);
#endif
}

using namespace std;

int main() {
	cout << "+--------------------------------------------------------------------------------------------------------+" << endl;
	cout << "|   ____  _  _  ____    _  _  __  __ _  __ _  ____  ____   __  ____  __     ____  ____   __   __  __     |" << endl;
	cout << "|  (_  _)/ )( \\(  __)  ( \\/ )(  )(  ( \\(  ( \\(  __)/ ___) /  \\(_  _)/ _\\   (_  _)(  _ \\ / _\\ (  )(  )    |" << endl;
	cout << "|    )(  ) __ ( ) _)   / \\/ \\ )( /    //    / ) _) \\___ \\(  O ) )( /    \\    )(   )   //    \\ )( / (_/\\  |" << endl;
	cout << "|   (__) \\_)(_/(____)  \\_)(_/(__)\\_)__)\\_)__)(____)(____/ \\__/ (__)\\_/\\_/   (__) (__\\_)\\_/\\_/(__)\\____/  |" << endl;
	cout << "+--------------------------------------------------------------------------------------------------------+" << endl;
	sleep_ms(3000);
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
    sleep_ms(2000);
	cout << "Want to continue on this eventful journey? (Y/N)" <<endl;
	sleep_ms(1000);
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		cout << "Let us begin the adventure" << endl;
		sleep_ms(1000);
	}
	else if (choice == 'N' || choice == 'n') {
		cout << "Weak. Too bad, Everything of value was stolen from you. "; 
		sleep_ms(2000);
		cout << "You have no choice but to continue" <<endl;
		sleep_ms(4000);
	}

	cout << "Luckily, you have enough, $1000, to buy a wagon and supplies\n\n" <<endl;
	sleep_ms(1000);
	cout << "Here are your options (Both wagons cost $500):";
	sleep_ms(1000);
	cout << "\n1. The wagon has enhanced storage space for food, water, and ammunition, but is susceptible to damage" <<endl;
	cout << "\n2. This wagon enables one to camp within the wagon and build a fire, but has less storage space" <<endl;
	cout << "(1/2)";
	cin >> wagon;
	
	if (wagon == 1) {
		cout << "Wise choice, but let's hope the wagon holds together..\n" <<endl;
		sleep_ms(2000);
	}
	if (wagon == 2) {
		cout << "The comfort wagon it is. But maybe no food for you...\n" <<endl;
		sleep_ms(2000);
	}
	if (wagon > 2) {
		cout << "Nice try, buddy\n" << endl;
		sleep_ms(1000);
		do {
			cout << "Here are your options (Both wagons cost $500):";
			cout << "\n1. The wagon has enhanced storage space for food, water, and ammunition, but is susceptible to damage" <<endl;
			cout << "\n2. This wagon enables one to camp within the wagon and build a fire, but has less storage space" << endl;
			cout << "\n(1 or 2)";
			cin >> wagon;
		} while (wagon > 2);
	}
	
	cout << ",--.                                    ....       " << endl;
	cout << "    )                                ..      ..    " << endl;
	cout << "  _'-. _                           ..   ,--.   ..  " << endl;
	cout << " (    ) ),--.                      .   (    )   .  " << endl;
	cout << "             )-._                  ..   `--'   ..  " << endl;
	cout << "_________________)                   ..      ..    " << endl;
	cout << "                                        ....       " << endl;
	cout << "                                                   " << endl;
	cout << "                                                   " << endl;
	cout << "! ! ! ! ! ! ! ! ! ! .--------.-. ! ! ! ! ! ! ! ! ! " << endl;
	cout << "!!!!!!!!!!!!!!!!!!!/        //^\\\\!!!!!!!!!!!!!!!!!!" << endl;
	cout << "|!|!|!|!|!|!|!|!|!|\\________\\\\=//|!|!|!|!|!|!|!|!|!" << endl;
	cout << "|||||||||||||||||||[________[\\__]\\|||||||||||||||||" << endl;
	cout << "I|I|I|I|I|I|I|I|I|I(o)    (o)`\\=)_\\|I|I|I|I|I|I|I|I" << endl;
	cout << "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
	cout << "You come up to a gushing stream. Unfortunately";
	cout << " you did not think to buy a fishing pole\n" <<endl;
	sleep_ms(1000);
	cout << "Fish with your bare hands or ";
	sleep_ms(1000);
	cout << "Eat what you have\n" <<endl;
	sleep_ms(1000);
	cout << "(fish/eat)";
	cin >> dec;
	
	if (dec == "fish") {
		cout << "You successfully catch 3 fish, but lose a finger in the process" << endl;
		sleep_ms(4000);
	}
	
	if (dec == "eat") {
		cout << "You have 5 days of rationed food left" <<endl;
		sleep_ms(4000);
	}
	cout << "Nice. You have covered 100 miles in 2 weeks. A respectable pace" <<endl;
	sleep_ms(2000);
	cout << "Your food supply is meager, and your water is very scarce. Luckily, you come";
	cout << " across a freshwater stream" <<endl;
	sleep_ms(2000);
	cout << "Stop to collect water?" << endl;
	sleep_ms(2000);
	cout << "(Y/N)";
	cin >> choice;
	
	if (choice == 'Y' || choice == 'y' ) {
		cout << "The cool water trickles down your throat quenching your ever-present thirst." << endl;;
		sleep_ms(1000);
		cout << " Continue down the path?" <<endl;
		cout << "(Y/N)" <<endl;
		cin >> water;
			if (water == 'Y' || water == 'y' ) {
				cout << "OK." << endl;
				sleep_ms(1000);
				cout << "After travelling for yet another week, you seem to have contracted dysentery";
				cout << " from the water you collected previously" <<endl;
				sleep_ms(2000);
				cout << "You find a man on the street who claims to be a doctor" <<endl;
				sleep_ms(2000);
				cout << "He agrees to treat you but only if you agree to provide him a ride to your";
				cout << " destination" << endl;
				sleep_ms(2000);
				cout << "Give him a ride?" << endl;
				sleep_ms(1000);
				cout << "(Y/N)" << endl;
				cin >> choice;
					
					if (choice == 'Y' || choice == 'y') {
						cout << "The so-called doctor betrays you and steals the wagon" <<endl;
						sleep_ms(2000);
						cout << "You spend your life in the woods and die soon after" <<endl;
						sleep_ms(2000);
						cout << "THE END" <<endl;
						return 0;
					}
					
					if (choice == 'N' || choice == 'n') {
						cout << "You ignore the \"doctor\" and continue on your way. A hacking cough";
						cout << " interrupts your second thought" <<endl;
						sleep_ms(3000);	
						cout << "AFTER ANOTHER WEEK" <<endl; //text art here
						sleep_ms(1000);
						cout << "You see a seemingly abandoned yard rife with deer and squirrel" <<endl;
						sleep_ms(1000);
						cout << "Do you choose to hunt?" <<endl;
						sleep_ms(1000);
						cout << "(Y/N)" << endl;
						cin >> choice;
						if (choice == 'Y' || choice == 'y') {
								cout << "Good luck" <<endl;
								cout << "Hunting";
								sleep_ms(1000);
								cout << ".";
								sleep_ms(1000);
								cout << ".";
								sleep_ms(1000);
								cout << "You manage to snag 10 pounds of venison." <<endl;
								sleep_ms(1000);
								cout << "As you are restocking, you notice a small hand extending" ;
								cout << " out of the curtain separating the cabin from the food stock." <<endl;
								cout << " You open the curtain and see a family who apparently ";
								cout << "have hidden in your wagon for two months now" <<endl;
								sleep_ms(1000);
								cout << "Do you let them stay?" <<endl;
								cout << "(Y/N)" <<endl;
								cin >> choice;
								
								if (choice == 'Y' || choice == 'y') {
									cout << "You are a kind and forgiving person. They praise ";
									cout << "you for your generosity. " <<endl;
									sleep_ms(1000);
									cout << "After three days of travelling, the integrity of the ";
									cout << "wagon seems to be compromised- the wheels are loose. ";
									sleep_ms(1000);
									cout << "Miraculously, the family that lives in your wagon are ";
									cout << "experienced craftsmen. They fix the wagon, and possibly ";
									cout << "enhanced it in no time. You continue on your way" <<endl;
									sleep_ms(1000);
									cout << "After 2 months you encounter a sign. It reads \"";
									cout << "Welcome to the End of the Minnesota Trail\"" <<endl;
									sleep_ms(1000);
									cout << "Laughing and crying with joy you lead the wagon in the town" ;
									sleep_ms(1000);
									cout << " but discover there are no inhabitants and the town" ;
									cout << " is only 1 square mile. You walk up to the edge  ";
									cout << " and see miles upon miles of more desert " <<endl;
									sleep_ms(1000);
									cout << "What do you want to do, captain?" <<endl;
									sleep_ms(1000);
									cout << "(Stay/Leave)" <<endl;
									cin >> dec;
									
										if (dec == "Stay" || dec == "stay") {
											cout << "The harsh environment is too much to bear ";
											cout << "for your oxen. They die and the only liquid ";
											cout << "you have is a gallon of water and a can of oil.";
											sleep_ms(1000);
											cout << "So basically, you're dead" <<endl;
												return 0;
										}
										
										if (dec == "leave" || dec == "leave") {
											cout << "You scavenge any remaining supplies from the ";
											cout << "abandoned street corners... it is not nearly ";
											cout << "enough. You and the hitchhiking family go ";
											cout << "insane and die" <<endl;
											sleep_ms(1000);
											cout << "THE MINNESOTA TRAIL ALWAYS WINS..." <<endl;
											return 0;
										}
								}
								if (choice == 'N' || choice == 'n') {
									cout << "Their wailing cries puncture the air as you ";
									cout << "force them to exit the wagon. You justify your ";
									cout << "actions by remembering there is a limited supply ";
									cout << "of utilities, not nearly enough to support 4 people." <<endl;
									sleep_ms(1000);
									cout << "You continue on your way..." <<endl;
									sleep_ms(3000);
									cout << "After 3 days... ";
									sleep_ms(1000);
									cout << "the base of the wagon suddenly crumbles causing ";
									cout << "all your supplies to spill out. Some of your food ";
									cout << "is spoiled as well. The wagon has no means of operation ";
									cout << "and you have no tools to fix it. You check if there is ";
									cout << "a settlement post nearby but the closest one 100 miles away. ";
									sleep_ms(1000);
									cout << "Accepting fate, you climb a tree and live out the rest of your ";
									cout << "unfulfilled life. " <<endl;
									sleep_ms(1000);
									cout << "THE END" <<endl;
									return 0; 
								}  							
										
					}
					
			}
			if (water != 'Y' || water != 'y' ) 
			{
				cout << "You Die; THE END" <<endl;
				sleep_ms(1000);
				return 0;
			}
	}
	return 0;
}
}