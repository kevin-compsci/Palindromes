#
#Kevin Nguyen
#Python program that determines whether a given character sequence is a palindrome or not.
#
#How to run (linux):
#	1.) open command line and cd into directory folder of where this code is
#	2.) type in "python Python-Shell.py"

#import statements
import sys;
import array;

#function implementation/definition below
def checkForPalindrome(somestr):
	#local declarations
	i, length, midLength, isPalindrome = 0, len(somestr)-1, len(somestr)/2, 1;

	#loop through up to mid length of the palindrome --> they could be the same forwards and backwards
	while(i < midLength):
		#conditional to compare first and last character with addition/subtraction by i --> work towards the middle
		if(somestr[0+i] != somestr[length-i]):
			isPalindrome = 0; #not a palindrome!
			break;
		i=i+1;

	#print out the results of the analysis to screen
	if(isPalindrome == 1):
		print somestr + " is a palindrome!";
	else:
		print somestr + " is not a palindrome!";

#main driver below
somestr = "abaaba"; # <---- char sequence to consider for palindrome?
checkForPalindrome(somestr);