/*counting words	author: yusuf shakeel	date: 21-11-2013
*/

#include <stdio.h>

int main(){
	//variables
	char str[200];
	int w = 0, i = 0;

	//input
	printf("Enter your sentence:\n");
	gets(str);

	//count words
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] != ' ' && str[i] != '\t'){
			w++;
			while(str[i] != ' ' && str[i] != '\t')
				i++;
		}
	}

	//output
	printf("No. of words = %d\n", w);
	return 0;
}