/*FIRST PROGRAM
C PROGRAM TO FIND THE LENGTH OF THE STRING
BY SHUBHAM SHARMA DATE :23 OCT 2024*/
#include<stdio.h>
int main()
{
	int n , i , count = 0 ;
	char arr[100];
	printf("Please enter string length less than 100:");
    scanf("%s",arr);
    for(i=0; arr[i] != '\0'; i++)
    {
    	count+=1;
	}
	printf("The length of the given string is %d",count);
	printf("\nThank You");
	return 0 ;
}
