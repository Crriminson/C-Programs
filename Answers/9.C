#include <stdio.h>
#include <conio.h>

int isPrime(int num) {
    int i;
    if (num <= 1) {
	return 0; // Numbers less than or equal to 1 are not prime
    }

    for (i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
	if (num % i == 0) {
	    return 0; // num is divisible by i, so it's not a prime
	}
    }

    return 1; // num is prime
}

int main() {
    int n, i;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
	if (isPrime(i)) {
	    printf("%d ", i);
	}
    }

    printf("\n");

    getch();

    return 0;
}
