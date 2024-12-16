#include <stdio.h>
#include <conio.h>
#define PI 3.14159

void main() {
    float radius, circumference, area;
    
    clrscr();
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);
    
    getch();
}
