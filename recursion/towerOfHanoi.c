/*tower of hanoi			author: yusuf shakeel	date: 20-12-2012
*/

#include <stdio.h>

void t(int n, char beg, char aux, char end);

int main(){
	printf("Moves\n");
	t(3, 'a', 'b', 'c');	//N = 3 (no. of disks)  a, b, c are the three pegs
	return 0;
}//main() ends here

void t(int n, char beg, char aux, char end){
	if(n == 1){
		printf("%c --> %c\n", beg, end);
	}else{
		t(n-1, beg, end, aux);
		t(1, beg, aux, end);
		t(n-1, aux, beg, end);
	}
}//t() ends here