#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <random>
using namespace std;

int main() {

	int target;
	cout << "Enter your target high score: ";
	cin >> target;
	int highScore = 0;
	int currentScore;
	int roll;
	long repCounter = 0;
	int billCounter = 0;

	default_random_engine defEngine(time(0));
	uniform_int_distribution<int> intDistr(1, 6);


	 
	//srand((unsigned) time(0));

	while (highScore < target)
	{
		++repCounter;
		if (repCounter % 1000000000 == 0) {
			cout << "Billion games: " << ++billCounter << endl;
		}
		if (billCounter % 100 == 0 && billCounter > 0) {
			defEngine.seed(time(0));
		}
		currentScore = 0;
		do {
			roll = intDistr(defEngine);
			currentScore += roll;
			if (currentScore > highScore) {
				highScore = currentScore;
				cout << "New high score! " << highScore << endl;
			}
		} while (roll != 1);

	} 


	return 0;
}