#include <stdio.h>
#include <string.h>

int main(){
	char str[100], tmp, rev[100];
	int begin, end;
	
	//input
	printf("Enter string: ");
	scanf("%s", &str);
	
	//copy str to rev
	strcpy(rev,str);	//rev will be used to check palindrome
	
	//reverse
	begin = 0;
	end = strlen(str) - 1;	//-1 because last character is NULL \0
	while(begin < end){
		tmp = str[begin];
		str[begin] = str[end];
		str[end] = tmp;
		begin++;
		end--;
	}
	
	//output
	printf("Reverse string: %s\n", str);
	
	//checking palindrome
	if(strcmp(rev,str) == 0)
		printf("%s is palindrome!\n", str);
	else
		printf("%s is not palindrome!\n", str);
		
	return 0;
}
