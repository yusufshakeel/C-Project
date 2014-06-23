/**
* Date: 23 June 2014 9:09 PM Monday
* Author: Yusuf Shakeel
* File: password.c
* Description: Program to create password field in C.
* Code will replace password character with *
*
* The MIT License (MIT)
* Copyright (c) 2014 Yusuf Shakeel
*
* https://www.youtube.com/yusufshakeel
* https://www.facebook.com/yusufshakeel
* https://plus.google.com/+YusufShakeel
* https://github.com/yusufshakeel/C-Project
*/

#include <stdio.h>
#define ENTER 13
#define TAB 9
#define BKSP 8

char pwd[100];

int main(){
	int i = 0;
	char ch;

	printf("Enter your password. Hit ENTER to confirm.\n");
	printf("Password:");

	while(1){
		ch = getch();	//get key

		if(ch == ENTER || ch == TAB){
			pwd[i] = '\0';
			break;
		}else if(ch == BKSP){
			if(i > 0){
				i--;
				printf("\b \b");		//for backspace
			}
		}else{
			pwd[i++] = ch;
			printf("* \b");				//to replace password character with *
		}
	}//while ends here

	printf("\n\nPassword:%s\nLength:%d\n\n", pwd, i);
	return 0;
}//main() ends here