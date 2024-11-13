/*FIFTH PROGRAM
C PROGRAM TO REVERSE A STRING 
BY SHUBHAM SHARMA DATE :23 OCT 2024*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n , i ,length ;
	char ch , t;
	char arr1[100];
	printf("Please enter string 1 length less than 100:");
    scanf("%s",arr1);
    fflush(stdin);
    scanf("%c",&ch);
    length = strlen(arr1);
    for (i=0;i<length/2;i++)
    {
    	t= arr1[i];
    	arr1[i] = arr1[length-1-i];
    	arr1[length-1-i] = t;
	}
	printf("\nThe string after reversing is %s",arr1);
	printf("\nThank You");
	return 0 ;
}
