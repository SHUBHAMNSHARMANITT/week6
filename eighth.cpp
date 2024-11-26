//Write a c program to check wheather given string is a palindrome or not.
#include<stdio.h>
#include <string.h>

int main() {
    char str[100], reverseStr[100];
    int length, i, j;
    printf("Enter a string: ");
    gets(str); 
    length = strlen(str);
	for (i = 0, j = length - 1; j >= 0; i++, j--) {
        reverseStr[i] = str[j];
    }
    reverseStr[i] = '\0'; 
    if (strcmp(str, reverseStr) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


