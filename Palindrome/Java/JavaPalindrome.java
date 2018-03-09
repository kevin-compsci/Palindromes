/*
Kevin Nguyen
Naive Java program that outputs whether a given string is a palindrome.

How to run (linux):
	1.) open command line and cd into directory folder of where this code is
	2.) type in "javac *.java" to compile java files
	3.) type in "java JavaPalindrome"
*/

//imports
import java.io.*;
import java.util.*;

//class
class JavaPalindrome {
	//Global Declarations

	//main driver
	public static void main(String[] args) {
		//local Declarations
		String str = "abzba"; //<--- string to find palindrome
		int i = 0, length = str.length()-1, midLength = str.length()/2;
		Boolean isPalindrome = true;
	
		//loop through up to half of the string (palindromes only need to consider half since the other half of the string is the same as the first half!)
		while(i < midLength) {
			//conditional to check the first characters and last characters if they're identical
			if(str.charAt(0+i) != str.charAt(length-i)) {
				isPalindrome = false; //<-- not a palindrome!
				break;
			}
			i++;
		}

		//output the results to screen
		if(!isPalindrome) {
			System.out.println(str + " is not a palindrome!");
		}
		else {
			System.out.println(str + " is a palindrome!");
		}
	}
}