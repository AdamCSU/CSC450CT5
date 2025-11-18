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

	string contentsReversed = "";
	for (int i = contents.length() - 1; i >= 0; i--) {
		contentsReversed = contentsReversed + contents[i];
	}

	ofstream reversedOutput("CSC450-mod5-reverse.txt");
	reversedOutput << contentsReversed;
	reversedOutput.close();

	}




