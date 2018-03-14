//Kevin Nguyen
//C (C files) program that determines whether a given char sequence is a palindrome or not. This algorithm only looks through half of the character sequence.

/*
How to run (linux):
	1.) open command line and cd into directory folder of where this code is
	2.) type in "gcc *.c" to compile c files
	3.) type in "a.out" to run out file
*/

//include statements
#include <stdio.h>

//function definitions
void printArrayAndResults(char[], int, int);

//main driver
int main() {
	//local declarations
	char str[] = {'q', 'a', 'x', 'a', 'q'}; //<--- string to find palindrome
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
  	return 0;
}

//Functions implementations goes below
//Print out the characters in the array and display the output results
void printArrayAndResults(char str[], int length, int boolVal) {
	//local declaratoins
	int i = 0;

	//loop through all elements in array
	while(i < length) {
		printf("%c", str[i]); //output each char
		i++;
	}

	//output the results to screen
	if(boolVal == 0) {
		printf(" is not a palindrome!\n");
	}
	else {
		printf(" is a palindrome!\n");
	}
}