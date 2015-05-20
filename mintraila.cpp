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
char water = ' ';
string dec = " ";
    //encompass this code in a for loop or the sleep command
    cout << "You are about to embark on the Minnesota Trail; a path to fulfilling your destiny" <<endl;
	cout << "\nWant to continue on this eventful journey?" <<endl;
	cout << "Y" <<endl;
	cout << "N" <<endl;
	cin >> choice;

	if (choice == 'Y') 
	{
		cout << "Let us begin the adventure" <<endl;
	}
	if (choice == 'N') 
	{
		cout << "Weak. Too bad, Everything of value was stolen from you."; 
		cout << "You have no choice but to continue" <<endl;
	}

	cout << "Luckily, you have enough, $1000, to buy a wagon and supplies\n\n" <<endl;
	cout << "Here are your options (Both wagons cost $500):";
	cout << "\n1. The wagon has enhanced storage space for food, water, and ammunition, but is susceptible to damage" <<endl;
	cout << "\n2. This wagon enables one to camp within the wagon and build a fire, but has less storage space" <<endl;
	cin >> wagon;
	
	if (wagon == 1) {
		cout << "Wise choice, but let's hope the wagon holds together.. " <<endl;
	}
	if (wagon == 2) {
		cout << "The comfort wagon it is. But maybe no food for you..." <<endl;
	}
	
	cout << "(After a Week-Text Art this) You come up to a gushing stream. Unfortunately";
	cout << " you did think to buy a fishing pole" <<endl;
	cout << "Fish with your bare hands" <<endl;
	cout << "Eat what you have" <<endl;
	cin >> dec;
	
	if (dec == "Fish with your bare hands") {
		cout << "You successfully catch 3 fish, but lose a finger in the process" << endl;
	}
	
	if (dec == "Eat what you have") {
		cout << "You have 5 days of a rationed food supply left" <<endl;
	}
	
	cout << "Nice. You have covered 100 miles in 2 weeks. A respectable pace" <<endl;
	cout << "Your food supply is meager, and your water is very scarce. Luckily, you come";
	cout << " across a freshwater stream" <<endl;
	cout << "Stop to collect water?" <<endl;
	cout << "Y" <<endl;
	cout << "N" <<endl;
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
				cout << "You find a man on the street who claims to be a doctor" <<endl;
				cout << "He agrees to treat you but only if you agree to provide him a ride to your";
				cout << " destination" <<endl;
				cout << " Give him a Ride?" <<endl;
				cout << "Y" <<endl;
				cout << "N" <<endl;
				cin >> choice;
					
					if (choice == 'Y' || choice == 'y') {
						cout << "The so-called doctor betrays you and steals the wagon" <<endl;
						cout << "You spend your life in the woods and die soon after" <<endl;
						cout << "THE END" <<endl;
						return 0;
					}
					
					if (choice == 'N' || choice == 'n') {
						cout << "You ignore the \"doctor\" and continue on your way. A hacking cough";
						cout << " interrupts your second guessing thought" <<endl;
						cout << "AFTER ANOTHER WEEK" <<endl; //text art here
						cout << "You see a seemingly abandoned yard rife with deer and squirrel" <<endl;
						cout << "Do you choose to hunt?" <<endl;
						cout << "Y" <<endl;
						cout << "N" <<endl;
						cin >> choice;
							
							if (choice == "Y" || choice == 'y') {
								cout << "Good luck" <<endl;
								\\add delay
								cout << "You manage to snag 10 pounds of venison." <<endl;
								cout << "As you are restocking, you notice a small hand extending" ;
								cout << " out of the curtain separating the cabin from the food stock." <<endl;
								cout << " You open the curtain and see a family who apparently ";
								cout << "have hidden in your wagon for two months now" ; <<endl;
								cout << "Do want to kick them out?" <<endl;
								cout << "Y" <<endl;
								cout << "N" <<endl;
								cin >> choice
								
									if (choice == 'Y' || choice == 'y') {
										cout << "You are a kind and forgiving person. They praise ";
										cout << "you for your generosity. " <<endl;
										//add sleep here and where ever appropriate
										cout << "After three days of travelling, the integrity of the ";
										cout << "wagon seems to be compromised- the wheels are loose. ";
										cout << "Miraculously, the family that lives in your wagon are ";
										cout << "experienced craftsmen. They fix the wagon, and possibly ";
										cout << "enhanced it in no time. You continue on your way" <<endl;
										
									}
									
									if (choice == 'N' || choice == 'n') {
										cout << "Their wailing cries puncture the air as you ";
										cout << "force them to exit the wagon. You justify your ";
										cout << "actions by remembering there is a limited supply ";
										cout << "of utilities, not nearly enough to support 4 people." <<endl;
										cout << "You continue on your way..." <<endl;
										//add sleep where ever appropriate
										//After 3 days
										cout << "The base of the wagon suddenly crumbles causing ";
										cout << "all your supplies to spill out. Some of your food ";
										cout << "is spoiled as well. The wagon has no means of operation ";
										cout << "and you have no tools to fix it. You check if there is ";
										cout << "a settlement post nearby but the closest one 100 miles away. ";
										cout << "Accepting fate, you climb a tree and live out the rest of your ";
										cout << "unfulfilled life. " <<endl;
										cout << "THE END" <<endl;
											return 0; 
									}  							
							
							} 
					}
					
			}
			else if (water != 'Y' || water != 'y' ) 
			{
				cout << "You Die; THE END" <<endl;
				return 0;
			}
	}	
	
	
			
	
		
		
		
		
		
		
		
		
	return 0;
} 
