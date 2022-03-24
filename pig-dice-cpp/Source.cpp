#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

	int target;
	cout << "Enter your target high score: ";
	cin >> target;
	int highScore = 0;
	int currentScore;
	int roll;
	long repCounter = 0;

	 
	srand(time(NULL));

	while (highScore < target)
	{
		++repCounter;
		if (repCounter % 100000000 == 0) {
			srand(time(NULL));
			cout << "Current repetitions: " << repCounter << endl;
		}
		currentScore = 0;
		do {
			roll = rand() % 6 + 1;
			currentScore += roll;
			if (currentScore > highScore) {
				highScore = currentScore;
				cout << "New high score! " << highScore << endl;
			}
		} while (roll != 1);

	} 


	return 0;
}