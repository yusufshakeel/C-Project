#include <stdio.h>
int main(){
	char ch = 'A';	//char variable storing A
	void *v;	//void pointer

	v = &ch;	//void pointer v storing the address of variable ch

	char p = *((char *) v);	//variable p taking the value of variable ch through void pointer v
	printf("%c", p);	//printing the value of ch
	return 0;
}