//Kevin Nguyen
//C++ (Cpp) program that determines whether a given char sequence is a palindrome. This algorithm only checks half of the specified char sequence.

/*
How to run (linux):
	1.) open command line and cd into directory folder of where this code is
	2.) type in "g++ *.cpp" to compile c++ files
	3.) type in "a.out" to run out file
*/

//include statements
#include <cstdlib>
#include <iostream>
using namespace std;

//function definitions
void printArrayAndResults(char[], int, int);

//main driver
int main(int argc, char** argv) {
	//local declarations
	char str[] = {'a', 'b', 'z', 'z', 'a'}; //<--- string to find palindrome
	int i = 0, length = ((sizeof(str)/sizeof(*str))-1), midLength = ((sizeof(str)/sizeof(*str)))/2, isPalindrome = 1;

	//loop through up to half of the string (palindromes only need to consider half since the other half of the string is the same as the first half!)
	while(i < midLength) {
		//conditional to check the first characters and last characters if they're identical
		if(str[0+i] != str[length-i]) {
			isPalindrome = 0; //<-- not a palindrome!
			break;
		}
		i++;
	}
	//print out elements in array and call results
	printArrayAndResults(str, length+1, isPalindrome);
}

//Functions implementations goes below
void printArrayAndResults(char str[], int length, int boolVal) {
	//local declaratoins
	int i = 0;

	//loop through all elements in array
	while(i < length) {
		cout << str[i]; //output each char
		i++;
	}

	//output the results to screen
	if(boolVal == 0) {
		cout << " is not a palindrome!" << endl;
	}
	else {
		cout << " is a palindrome!" << endl;
	}
}