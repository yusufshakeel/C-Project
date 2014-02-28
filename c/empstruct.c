#include <stdio.h>
int main(){
	//defining structure employee
	struct employee{
		char name[30],post[5];
		float salary;
	};

	//declaring structure variables
	struct employee emp[3],high;

	//declaring other variables
	int i,h;

	//reading user input
	for(i=0;i<3;i++){
		printf("\nEnter emp #%d detail\n",i+1);
		printf("Name: ");
		scanf("%s",&emp[i].name);
		printf("Post: ");
		scanf("%s",&emp[i].post);
		printf("Salary: ");
		scanf("%f",&emp[i].salary);
	}

	//searching for highest earner
	h=0;
	high=emp[h];
	for(i=1;i<3;i++){
		if(emp[i].salary>high.salary){
			h=i;
			high=emp[h];
		}
	}

	//printing highest earner detail
	printf("\nHighest Earner Detail\n");
	printf("Name: %s\nPost: %s\nSalary: %.2f\n",high.name,high.post,high.salary);
	return 0;
}