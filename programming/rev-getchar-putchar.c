/**
* Reverse String and Palindrome - using getchar() and putchar()
* Author: Yusuf Shakeel
* Date: 19-April-2014 Sat
*
* https://www.youtube.com/yusufshakeel
*
* For more detail on Reverse String and Palindrome kindly watch the video
* https://www.youtube.com/watch?v=UwDhJ9ANP7c
*
* In this program I am using getchar() and putchar() to read the string and write the reverse string.
* I have commented out scanf() and printf(). If you wish you can use that.
* This program is to demonstrate the difference between scanf()-printf() and getchar()-putchar().
* If you look closely at the code, then you will notice that we need a loop to read and write
* string when using getchar() and putchar(), which is not the case with scanf() and printf().
*
* have fun coding :-) 
*/

#include <stdio.h>
#include <string.h>

int main(){
	char str[100], tmp, rev[100];
	int i, j, len;
	
	//input
	printf("Enter string: ");
	//scanf("%s", &str);
	
	len = 0;				//length of the string
	do{
		tmp = getchar();	//read user input character by character
		str[len] = tmp;		//save the character in str array
		len++;				//move the len to the next array index
	}while(tmp != '\n');	//exit loop only when user presses ENTER
	len--;					//point at the last index where \n character was saved
	str[len] = '\0';		//replace \n [New Line character] with \0 [NULL character]
		
	//copy str to rev
	strcpy(rev,str);		//rev will be used to check palindrome
	
	//reverse
	i = 0;
	j = len - 1;	//point at 2nd last character i.e., before \0 [NULL character]
	while(i < j){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	
	//output
	//printf("Reverse string: %s\n", str);
	
	printf("Reverse string:\n");
	for(i = 0; i < len; i++){
		putchar(str[i]);		//output the reverse string character by character
	}
	printf("\n");
	
	//checking palindrome
	if(strcmp(rev,str) == 0)
		printf("%s is palindrome!\n", str);
	else
		printf("%s is not palindrome!\n", str);
		
	return 0;
}
