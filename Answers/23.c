#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    float a, b, c, discriminant, root1, root2;

    clrscr();

    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = pow(b, 2) - 4 * a * c;  // Calculate discriminant

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);  // First root
        root2 = (-b - sqrt(discriminant)) / (2 * a);  // Second root
        printf("The roots of the quadratic equation are: %.2f and %.2f\n", root1, root2);
    } else {
        printf("The equation has complex roots.\n");
    }

    getch();
}
