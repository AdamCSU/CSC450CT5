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

	string userInput;  //To store user input

	cout << "Please enter text: ";  //Ask user to enter text
	getline(cin, userInput);  //Get the input and store it in userInput

	ofstream output("CSC450_CT5_mod5.txt", ios::app);  //Open file in append mode so we can add new text
	output << userInput << endl;  //Write user text to file
	output.close();

	ifstream input("CSC450_CT5_mod5.txt");  //Open file for reading
	string contents = "";  //Store text read from file
	string line;  //Temp variable to read each line

	while (getline(input, line)) {  //Read the file and add each line to contents
		contents = contents + line + "\n";
	}
	input.close();

	string contentsReversed = "";  //Will hold the reversed content
	for (int i = contents.length() - 1; i >= 0; i--) {  //Go through text from end to beginning to reverse
		contentsReversed = contentsReversed + contents[i];  //Add characters in reverse
	}

	ofstream reversedOutput("CSC450-mod5-reverse.txt");  //Create new file to store reverse content
	reversedOutput << contentsReversed;  //Write reversed text to the new file
	reversedOutput.close();

	cout << "Finished writing reversed contents to the file." << endl;

	return 0;
}




