#include <stdio.h>
#include <conio.h>

int main(){
	int n, sum;
	clrscr();
	
	printf("Enter Number to find sum upto: ");
	scanf("%d", &n);
	sum = (n*(n+1))/2;
	printf("Sum of first %d numbers is: %d", n, sum);
	getch();

	return 0;
}