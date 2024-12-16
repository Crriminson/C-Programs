#include <stdio.h>
#include <conio.h>

int main(){
	int num;
	clrscr();
	
	printf("Enter a Number: ");
	scanf("%d", &num);

	if (num & 1){
	printf("This is an odd Number");
	}
	else {
	printf("This is an even Number");
	}

	getch();
	
	return 0;
}