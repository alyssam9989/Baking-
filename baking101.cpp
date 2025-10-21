#include <iostream>
#include <string>
using namespace std;

int main() {
	string hardestRecipe;
	string results;
	int timesAttempted;

	cout << "Welcome to Baking 101: With Alyssa!" << endl;
	cout << "Let's talk about baking!" << endl;
	
	cout << "What is the hardest recipe you have ever attempted?" << endl;
	getline(cin, hardestRecipe);

	cout << "Did it turn out right?" << endl;
	getline(cin, results);

	cout << "How many times did you have to try the recipe before it turned out right? ";
	cin >> timesAttempted;

	int hoursLogged = timesAttempted * 2;

	cout << endl;

	cout << "You must love baking! You were brave enough to try making " << hardestRecipe << "!" << endl;

	cout << "It took you " << timesAttempted << " tries and " <<hoursLogged << " hours, but you were able to make something fun and new!" << endl;

	cout << "Keep up the great work!" << endl;

	return 0;
}