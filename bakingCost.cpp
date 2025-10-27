#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main() {
	const int MAX_TITLE_WIDTH = 20;
	const string FILE_NAME = "report.txt";

	cout << "==============================================\n";
	cout << " ---Welcome to my Baking Cost Calculator--- ";
	cout << "\n==============================================\n\n";

	string recipeName;
	int numberOfDesserts = 0;
	double costPerDessert = 0.00;
	double totalCost = 0.00;

	cout << "Enter the name of your recipe: ";
	getline(cin, recipeName);

	cout << "Enter the quantity you plan to bake: ";
	cin >> numberOfDesserts;

	if (cin.fail() || numberOfDesserts <= 0) {
		cout << "Invalid input. Please restart and enter a positive, whole number.\n";
			return 1;
	}

	cout << "Enter the cost per dessert quantity ($): ";
	cin >> costPerDessert;

	totalCost = numberOfDesserts * costPerDessert;

	cout << fixed << setprecision(2);
	cout << "\n===================================\n";
	cout << " ---Summary--- \n";
	cout << "==============================================\n";
	cout << left << setw(MAX_TITLE_WIDTH) << "Recipe Name: " << recipeName << endl;
	cout << left << setw(MAX_TITLE_WIDTH) << "Quantity: " << numberOfDesserts << endl;
	cout << left << setw(MAX_TITLE_WIDTH) << "Cost per dessert: " << "$" << costPerDessert << endl;
	cout << left << setw(MAX_TITLE_WIDTH) << "Total Cost: " << "$" << totalCost << endl;
	cout <<"==============================================\n";

	ofstream reportFile(FILE_NAME);

	if (reportFile) {
		reportFile << fixed << setprecision(2);
		reportFile << "\n===================================\n";
		reportFile << " ---Baking Report--- \n";
		reportFile << "==============================================\n";
		reportFile << left << setw(MAX_TITLE_WIDTH) << "Recipe Name: " << recipeName << endl;
		reportFile << left << setw(MAX_TITLE_WIDTH) << "Quantity: " << numberOfDesserts << endl;
		reportFile << left << setw(MAX_TITLE_WIDTH) << "Cost per dessert: " << costPerDessert << endl;
		reportFile << left << setw(MAX_TITLE_WIDTH) << "Total Cost: " << totalCost << endl;
		reportFile << "==============================================\n";
		reportFile.close();

	cout << "\nReport saved successfully to '" << FILE_NAME << "'.\n";

}

 else {
	 cout << "Error: Could not create '" << FILE_NAME << "'.\n";
}

return 0;
}