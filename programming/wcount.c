/*specific word count	author: yusuf shakeel	date: 18-1-2014
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void gotoNextWord();

char str[200], w[20];
int slen, wlen, wcount, i, j;

int main(){
	//input
	printf("Enter string: ");
	gets(str);
	printf("Enter word: ");
	gets(w);

	//finding length
	slen = strlen(str);
	wlen = strlen(w);

	//search w in str
	i = j = wcount = 0;
	while(i < slen){
		if(str[i] == w[0]){
			//first letter of the word found
			for(j = 0; j < wlen; j++){
				if(str[i+j] != w[j]){
					//mismatch
					gotoNextWord();
					break;
				}
			}
			if(j == wlen){
				//match found
				if(isspace(str[i+j])||ispunct(str[i+j])||str[i+j]=='\0'){
					wcount++;
					i += j;
				}
			}
		}
		else{
			gotoNextWord();
		}
		i++;
	}
	printf("Word count: %d\n",wcount);
	return 0;
}

void gotoNextWord(){
	while(isspace(str[i]) == 0 && ispunct(str[i]) == 0 && str[i] != '\0')
		i++;
}