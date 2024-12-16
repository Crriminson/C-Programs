#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    int length;
    char *ptr;
    clrscr();

    // Input two strings
    printf("Enter the first string: ");
    gets(str1);  // Using gets() (it’s unsafe, but keeps things simple)
    printf("Enter the second string: ");
    gets(str2);  // Using gets() (it’s unsafe, but keeps things simple)

    // 1. strlen: Calculate the length of str1
    length = strlen(str1);
    printf("\nLength of the first string: %d\n", length);

    // 2. strcpy: Copy str2 to str1
    strcpy(str1, str2);
    printf("After copying str2 to str1, str1: %s\n", str1);

    // 3. strcmp: Compare str1 and str2
    if (strcmp(str1, str2) == 0) {
	printf("Both strings are equal.\n");
    } else {
	printf("Strings are not equal.\n");
    }

    // 4. strcat: Concatenate str2 to the end of str1
    strcat(str1, str2);
    printf("After concatenating str2 to str1: %s\n", str1);

    // 5. strstr: Find the first occurrence of str2 in str1
    ptr = strstr(str1, str2);
    if (ptr != NULL) {
	printf("\nSubstring '%s' found in str1 at position: %ld\n", str2, ptr - str1 + 1);
    } else {
        printf("\nSubstring '%s' not found in str1.\n", str2);
    }

    getch();
}
