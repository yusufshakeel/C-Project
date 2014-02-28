/*balanced parenthesis
*/

#include <stdio.h>

int main(){
	//variables
	char expr[100];
	int bf = 0;	//balance factor
	int i;
	
	//input
	printf("Enter expression: ");
	scanf("%s", &expr);
	
	//scan
	i = 0;
	while(expr[i] != '\0'){
		if(expr[i] == '(')
			bf++;
		else if(expr[i] == ')'){
			bf--;
			if(bf < 0)
				break;	//terminate search
		}
		i++;
	}
	
	//output
	if(bf == 0)
		printf("Balanced parenthesis.\n");
	else
		printf("Unbalanced.\n");
	return 0;
}
