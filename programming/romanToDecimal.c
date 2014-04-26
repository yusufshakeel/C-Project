#include <stdio.h>
#include <string.h>

int indexOf(char);

// 7 roman symbols
char roman[] = "IVXLCDM";
int decimal[] = {1, 5, 10, 50, 100, 500, 1000};

int main(){
	int n = 0, i, j;
	char input[10];

	//input
	printf("Enter Roman Number: ");
	scanf("%s", &input);

	i = strlen(input) - 1;
	n += decimal[indexOf(input[i])];
	j = i;
	i--;

	while(i >= 0){
		if(indexOf(input[i]) >= indexOf(input[j])){
			n += decimal[indexOf(input[i])];
		}else{
			n -= decimal[indexOf(input[i])];
		}
		i--;
		j--;
	}

	//output
	printf("Number = %d\n", n);
	return 0;
}

int indexOf(char c){
	int i;
	for(i = 0; i < 7; i++){
		if(roman[i] == c){
			return i;
		}
	}
	return -1;	//NOT FOUND
}