/*FOURTH PROGRAM
C PROGRAM TO CONVERT A STRING FROM UPPER CASE TO LOWER CASE
BY SHUBHAM SHARMA DATE :23 OCT 2024*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n , i , j  ;
	char ch;
	char arr1[100];
	printf("Please enter string  length less than 100:");
    scanf("%s",arr1);
    fflush(stdin);
    scanf("%c",&ch);
    for(i = 0; i<strlen(arr1);i++)
    {
    	arr1[i]= arr1[i]+32;
    }
    printf("\nThe string after updation is %s",arr1);
    printf("\nThank You");
	return 0 ;
}
