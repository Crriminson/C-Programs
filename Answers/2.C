#include <stdio.h>
#include <conio.h>

float area_of_triangle(float a, float b) {
    return 0.5 * a * b;
}

float area_of_rectangle(float a, float b) {
    return a * b;
}

int main() {
    float s1, s2, base, height, area_rectangle, area_triangle;

    clrscr();

    printf("Enter the sides of the rectangle: ");
    scanf("%f %f", &s1, &s2);
    area_rectangle = area_of_rectangle(s1, s2);
    printf("The area of the rectangle is: %.2f\n", area_rectangle);

    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area_triangle = area_of_triangle(base, height);
    printf("The area of the triangle is: %.2f\n", area_triangle);

    getch();

    return 0;
}
