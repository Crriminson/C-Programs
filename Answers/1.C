#include <stdio.h>
#include <conio.h>
#define PI 3.14159
int main(){
	//defining variables
	float radius, volume, surface_area;

	clrscr();

	//taking radius as an input
	printf("Enter the Radius Of the Circle: ");
	scanf("%f", &radius);

	//calculations using formulas
	volume = (4.0 / 3.0) * PI * radius * radius * radius;
	surface_area = 4 * PI * radius * radius;

	//displaying outputs
	printf("The Surface Area Is: %.2f \n", surface_area);
	printf("The Volume Is: %.2f", volume);

	getch();
	return 0;
}