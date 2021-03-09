// C2 P6 - Nested ifs & Random Numbers AKA Lottery Game!
# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <ctime>

using namespace std;
char playAgain = 'Y';
int random1, random2, random3;
int guess1, guess2, guess3;
int counter3 = 0;
int counter2 = 0;
int counter = 0;
int matches;

int main()
{
	cout << "\nThe Texas Lottery\n\n";
	
	while ((playAgain == 'Y') || (playAgain == 'y'))
	{
    	
    	srand(static_cast<unsigned int>(time(0)));   //seed random number generator
    	int random1 = rand() % 100 + 1;            //random number between 1 and 100
    	int random2 = rand() % 100 + 1;
    	int random3 = rand() % 100 + 1;

		cout << "\nPlease enter your first guess between 1 and 100: ";
		cin >> guess1;
		cout << "\nPlease enter your second guess between 1 and 100: ";
		cin >> guess2;
		cout << "\nPlease enter your third guess between 1 and 100: ";
		cin >> guess3;
		
		if ((guess1 == random1 )|| (guess1 == random2) || (guess1 == random3))
		{
			if (((guess2 == random1) && (guess1 != random1)) || ((guess2 == random2) && (guess1 != random2))
			|| ((guess2 == random3) && (guess1 != random3)))
			{
				if (((guess3 == random1) && (guess2 != random1)) || ((guess3 == random2) && (guess2 != random2)) || ((guess3 == random3) && (guess2 != random3)))
				{
					if ((guess1 == random1) && (guess2 == random2) && (guess3 == random3))
					{
						cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
						cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
						cout << "\n\nYou were able to guess all three numbers in the correct order!";
						cout << "\n\nAward ($): $1,000,000"; 
					}
					else
					{
						cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
						cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
						cout << "\n\nYou were able to guess all three numbers correctly!";
						cout << "\n\nAward ($): $1,000";
					}
				}
				else
				{
					cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
					cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
					cout << "\n\nYou were able to guess two numbers correctly!";
					cout << "\n\nAward ($): $100";
				}	
		
			}
			
			else if (((guess3 == random1) && (guess2 != random1)) || ((guess3 == random2) && (guess2 != random2)) || ((guess3 == random3) && (guess2 != random3)))
			{
				cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
				cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
				cout << "\n\nYou were able to guess two numbers correctly!";
				cout << "\n\nAward ($): $100";
			}
			else
			{
				cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
				cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
				cout << "\n\nYou were able to guess one number correctly!";
				cout << "\n\nAward ($): $10"; 
			}
		}
		
		else if (((guess2 == random1) && (guess1 != random1)) || ((guess2 == random2) && (guess1 != random2))
			|| ((guess2 == random3) && (guess1 != random3)))
		{
			if (((guess3 == random1) && (guess2 != random1)) || ((guess3 == random2) && (guess2 != random2)) || ((guess3 == random3) && (guess2 != random3)))
			{
				cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
				cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
				cout << "\n\nYou were able to guess two numbers correctly!";
				cout << "\n\nAward ($): $100";
			}
			
			else
			{
				cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
				cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
				cout << "\n\nYou were able to guess one number correctly!";
				cout << "\n\nAward ($): $10"; 
			}
		}
		
		else if (((guess3 == random1) && (guess2 != random1)) || ((guess3 == random2) && (guess2 != random2)) || ((guess3 == random3) && (guess2 != random3)))
		{
			cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
			cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
			cout << "\n\nYou were able to guess one number correctly!";
			cout << "\n\nAward ($): $10"; 
		}
		else 
		{
			cout << "\n\nHere are the numbers drawn: " << random1 << " " << random2 << " " << random3;
			cout << "\n\nYour numbers: " << guess1 << " " << guess2 << " " << guess3;
			cout << "\n\nNone of your numbers matched...";
			cout << "\n\nAward ($): 0";
		}
		
		
		cout << "\n\nWould you like to play again (Y/N)?";
		cin >> playAgain;
	}
	
	cout << "\n\nHope you will come again!";
	return 0;
}