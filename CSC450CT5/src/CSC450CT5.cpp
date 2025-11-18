//============================================================================
// Name        : CSC450CT5.cpp
// Author      : Adam Gorry
// Version     :
// Copyright   : Your copyright notice
// Description : CSC450 Critical Thinking 5
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	string userInput;

	cout << "Please enter text: ";
	getline(cin, userInput);

	ofstream output("CSC450_CT5_mod5.txt", ios::app);
	output << userInput << endl;
	output.close();

	ifstream input("CSC450_CT5_mod5.txt");
	string contents = "";
	string line;

	while (getline(input, line)) {
		contents = contents + line + "\n";
	}
	input.close();

	}




