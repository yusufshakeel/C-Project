/**
* File: stringToDigitArray.c
* Description:
* Convert string of digits "12345" into digit array
*
* Function
* ------------------
* wywiwyg() = Works for positive number string only like "12345", "007", etc.
* If the string contains non-digit characters then it will give erroneous result.
*
* Input			Output
* "12345"		[1, 2, 3, 4, 5]
* "007"			[0, 0, 7]
* "-123"		[-3, 1, 2, 3]				//- sign gives erroneous result
*
* strip_special_char() = Works with any type of input string.
* If the string contains non-digit it is simply ignored.
*
* Input				Output
* "12345"			[1, 2, 3, 4, 5]
* "007"				[0, 0, 7]
* "-12345"			[1, 2, 3, 4, 5]				//- sign is discarded from input
* "12,345.67:8+9"	[1, 2, 3, 4, 5, 6, 7, 8, 9]	//, . : + signs are discarded from input
*
*
* Author: Yusuf Shakeel
* Date: 05-July-2014 Saturday
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
#include <string.h>

void wywiwyg();		//this will extact digits. INPUT is expected to be in integer form.
void strip_special_char();	//this will remove special characters from the string

int main(){
	wywiwyg();
	strip_special_char();
	return 0;
}

void wywiwyg(){
	char str[100];		//for user input string like "12345"
	int digits[100];	//will hold the digits of the string str like [1, 2, 3, 4, 5]
	int slen, i;

	//input
	printf("Enter string: ");
	scanf("%s", &str);

	//extract digits from string
	slen = strlen(str);		//length of the string str
	for(i = 0; i < slen; i++){
		digits[i] = str[i] - '0';
	}

	//output digits
	for(i = 0; i < slen; i++){
		printf("%d  ", digits[i]);
	}
}

void strip_special_char(){
	char str[100];		//for user input string like "12345"
	int digits[100];	//will hold the digits of the string str like [1, 2, 3, 4, 5]
	int slen, i, dlen = 0;

	//input
	printf("\nEnter string: ");
	scanf("%s", &str);

	//extract digits from string
	slen = strlen(str);		//length of the string str
	for(i = 0; i < slen; i++){
		if(str[i] >= 48 && str[i] <= 57){	//consider only digit character like 0, 1, 2, ... 9
			digits[dlen++] = str[i] - '0';
		}
	}

	//output
	for(i = 0; i < dlen; i++){
		printf("%d  ", digits[i]);
	}
}