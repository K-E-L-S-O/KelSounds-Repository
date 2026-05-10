//We are going to make a pin verification program

#include <iostream>

void enteringPin(int[], int); //this function will input the pin number into what the user typed.

bool checkVerification(int[], int[], int);//prototype: Checking Verification. This will 
                                              //accept two arrays.


int main() {
	const int pinTotal = 7;
	int correctPin[pinTotal] = { 6, 5, 1, 0, 2, 3, 9 };//the correct 7 digit pin
	int userPin[pinTotal];//user pin input

	std::cout << "---ATM PIN VERIFICATION---\n";
	enteringPin(userPin, pinTotal);//call the function to store the users pin. We will test this
	 

	//now we need to see if it is the correct pin with a bool.
	//we will return true if tthe pin matches the 'correctPin' and 
	//we'll return false if the pin is incorrect.

	bool testingPin = checkVerification(correctPin, userPin, pinTotal);//storing the bool

	//checking to see if the pin is correct
	if (testingPin) {
		std::cout << "PIN VERIFIED...\n";
	}
	else {
		std::cout << "INVALID PIN NUMBER...\n";
	}

	return 0;
}

void enteringPin(int theArray[], int pinSize) {//putting the user pin into an array

	std::cout << "Enter Pin Number: \n";
	for (int i = 0; i < pinSize; i++) {
		std::cin >> theArray[i];
	}
}

bool checkVerification(int Pin[], int user[], int pinSize) {//now we check if the verification is correct
	
	for (int index = 0; index < pinSize; index++) {//for to loop through our arrays
		if (user[index] != Pin[index]) {//and an if statement to test if the values in our arrays match.
			return false;
		}
	}
	return true;
}