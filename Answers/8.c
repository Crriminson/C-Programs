#include <stdio.h>
#include <conio.h>

int main(){
	int n, fact = 1, i;
	clrscr();

	printf("Enter the number to find factorial: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
	fact *= i;
	}
	printf("factorial of the number is %d", fact);	
	getch();

	return 0;
}