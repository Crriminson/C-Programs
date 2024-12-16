
#include <stdio.h>
#include <conio.h>

int main(){
	int num;
	clrscr();

	printf("Enter an number: ");
	scanf("%d", &num);

	if (num > 0){
	printf("This is a Positive Number");
	}
	else if (num < 0){
	printf("This is a Negative Number");
	}
	else{
	printf("The Number is 0");
	}

	getch();

	return 0;
}