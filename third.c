/*THIRD PROGRAM
C PROGRAM TO COPY ONE STRING INTO ANOTHER 
BY SHUBHAM SHARMA DATE :23 OCT 2024*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n , i , j ,length ;
	char ch;
	char arr1[100], arr2[100];
	printf("Please enter string 1 length less than 100:");
    scanf("%s",arr1);
    fflush(stdin);
    scanf("c",&ch);
    printf("\nPlease enter string 2 length less than 100: ");
    scanf("%s",arr2);
    fflush(stdin);
    scanf("%c",&ch);
    length = strlen(arr1);
    for (i=length,j=0;i < ( strlen(arr1)+strlen(arr2));i++,j++)
    arr1[i]=arr2[j];
    printf("\nThe string 1 after concat is %s",arr1);

	printf("\nThank You");
	return 0 ;
}
