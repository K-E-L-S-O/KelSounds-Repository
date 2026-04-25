//count how many vowels are in a word
#include <iostream>
#include <string>
#include <cctype>

int main() {

	
	int count[5] = {0,//a
		0,//e
		0,//i
		0,//o
		0};//u

	std::string word;//user input

	std::cout << "---The Vowels---\n";
	std::cout << "'a'\n";
	std::cout << "'e'\n";
	std::cout << "'i'\n";
	std::cout << "'o'\n";
	std::cout << "'u'\n\n";

	std::cout << "Enter a word\n";
	std::cin >> word;

	//this ranged based for loop decides where
	//to throw the characters 
	for (char c : word) {
		char lowercase_c = tolower(c);
		if (lowercase_c == 'a') {
			count[0]++;
		}
		else if (lowercase_c == 'e') {
			count[1]++;
		}
		else if (lowercase_c == 'i') {
			count[2]++;
		}
		else if (lowercase_c == 'o') {
			count[3]++;
		}
		else if (lowercase_c == 'u') {
			count[4]++;
		}
	}

	std::cout << "\nThe word you entered: " << word << "\n";
	std::cout << "Total Vowels: \n\n";
	std::cout << "a: " << count[0] << "\n";
	std::cout << "e: " << count[1] << "\n";
	std::cout << "i: " << count[2] << "\n";
	std::cout << "o: " << count[3] << "\n";
	std::cout << "u: " << count[4] << "\n";

	return 0;
}