/*	cylinder example
	finding curved surface area, total surface area and volume
*/

#include <stdio.h>
#define PI 22/7

//function declaration
void cylinder(float r, float h, float *csa, float *tsa, float *vol);

int main(){
	//variable declaration
	float r, h, csa, tsa, vol;
	
	//read input
	printf("Enter radius: ");
	scanf("%f", &r);
	printf("Enter height: ");
	scanf("%f", &h);
	
	//calculate
	cylinder(r, h, &csa, &tsa, &vol);	//sending address
	
	//print result
	printf("Curved surface area: %f\n", csa);
	printf("Total surface area: %f\n", tsa);
	printf("Volume: %f\n", vol);
	return 0;
}

//function definition
void cylinder(float r, float h, float *csa, float *tsa, float *vol){
	*csa = 2*r*h*PI;
	*tsa = 2*r*(h+r)*PI;
	*vol = r*r*h*PI;
}