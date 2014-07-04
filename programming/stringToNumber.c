/**
* File: stringToNumber.c
* Description:
* Convert string of digits "12345" into equivalent number 12345.
* Works for both +ve and -ve number string.
*
* Input			Output
* "12345"		12345
* "-12345"		-12345
*
*
* Author: Yusuf Shakeel
* Date: 04-July-2014 Friday
*
* The MIT License
* Copyright (c) 2014 Yusuf Shakeel
*
* https://www.youtube.com/yusufshakeel
* https://www.facebook.com/yusufshakeel
* https://plus.google.com/+YusufShakeel
* https://github.com/yusufshakeel/C-Project
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void without_using_library_function();
void using_library_function();
int power(int);		//this will return 10^n like: 1, 10, 100, 1000, ...

int main(){
	without_using_library_function();
	using_library_function();
	return 0;
}

void without_using_library_function(){
	char str[100];	//this will hold the string number like "12345"
	int number = 0;		//this will hold the equivalent number like 12345
	int digit, place = 0;
	int slen;		//length of the string number "12345"
	int i;

	//input
	printf("Enter a number: ");
	scanf("%s", &str);

	//convert string to number
	slen = strlen(str);
	for(i = slen-1; i > 0; i--){	//start from last character and go till 2nd character
		digit = str[i] - '0';		//get the digit
		number += digit * power(place);
		place++;
	}

	//check if the first character in str is - sign
	if(str[0] == '-'){
		number *= -1;	//the string is of negative number like "-12345" so result will be -12345
	}else{
		digit = str[0] - '0';		//get the equivalent digit of 1st character
		number += digit * power(place);
	}

	//output
	printf("Number: %d\n", number);
}

void using_library_function(){
	char str[100];	//for string number "12345"
	int number;		//equivalent number

	//input
	printf("Enter a number: ");
	scanf("%s", &str);

	//convert string to number
	number = atoi(str);

	//output
	printf("Number: %d\n", number);
}

//this will return 10^n like: 1, 10, 100, 1000, ...
int power(n){
	if(n > 0) return 10 * power(n-1);
	else return 1;
}