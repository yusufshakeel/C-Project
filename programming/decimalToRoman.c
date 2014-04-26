/**
* decimalToRoman.c
* Convert Decimal number to Roman
*
* Author: Yusuf Shakeel
* Date: 25-04-2014 FRI	[XXV-IV-MMXIV FRIDAY]
*
* https://www.youtube.com/yusufshakeel
*/

#include <stdio.h>

//7 roman symbols
//in decimal     1    5    10   50  100  500  1000
char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int decimal[] = {1, 5, 10, 50, 100, 500, 1000};

int main(){
	int n, beg, end, d;

	//input
	printf("Enter n: ");
	scanf("%d", &n);

	if(n<0){
		printf("You entered a negative number!\n");
	}else if(n == 0){
		printf("You entered Zero or Nulla!\n");
	}else if(n >= 4000){
		printf("This code has a limit from 1 to 3999.\n");
	}else{

		while(n>0){
			//find limit
			for(beg = 6; beg > 0; beg--){
				if(n >= decimal[beg]){
					break;
				}
			}

			for(end = 0; end < 7; end++){
				if(n <= decimal[end]){
					break;
				}
			}

			//get left most digit in n
			d = n;
			while(d != 0){
				d /= 10;
				if(d < 10){
					break;
				}
			}

			//print roman numeral
			if(n<10 && n==4){
				printf("%c%c", roman[beg], roman[end]);
				n=0;
			}else if(n>10 && d==4){
				printf("%c%c", roman[beg], roman[end]);
				n -= (decimal[end] - decimal[beg]);
			}else if(n<10 && n==9){
				printf("%c%c", roman[beg - 1], roman[end]);
				n=0;
			}else if(n>10 && d==9){
				printf("%c%c", roman[beg - 1], roman[end]);
				n -= (decimal[end] - decimal[beg - 1]);
			}else{
				printf("%c", roman[beg]);
				n -= decimal[beg];
			}
		}
	}
	return 0;
}