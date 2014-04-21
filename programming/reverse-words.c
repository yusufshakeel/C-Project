#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[100], tmp;
	int i, j, k, len;

	//input
	printf("Enter string:\n");
	scanf("%[^\n]", &str);		//read till user press enter

	//reverse words in the given string
	len = strlen(str);

	for(i = 0, j = 0; j < len; j++){
		if(!isalnum(str[j]) || (j == len - 1)){
			//either str[j] is not alphabet and number
			//or j is pointing at the 2nd last character
			if(j < len - 1){
				k = j - 1;
			}else{
				k = j;
			}

			//reverse characters of the word
			while(i < k){
				tmp = str[i];
				str[i] = str[k];
				str[k] = tmp;
				i++;
				k--;
			}

			//set i to point at j+1
			i = j + 1;
		}
	}

	//output
	printf("%s\n", str);
	return 0;
}