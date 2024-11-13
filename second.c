/*SECOND PROGRAM
C PROGRAM TO COPY ONE STRING INTO ANOTHER 
BY SHUBHAM SHARMA DATE :23 OCT 2024*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n , i ;
	char arr1[100], arr2[100];
	printf("Please enter string 1 length less than 100:");
    scanf("%s",arr1);
    printf("\nPlease enter string 2 length less than 100: ");
    scanf("%s",arr2);
    printf("\nCopying string 2 into string 1");
    if(strlen(arr1)>strlen(arr2)){
	
    for(i=0;i<strlen(arr2);i++)
    {
    	arr1[i]=arr2[i];
	}
}

	else
	{
		for(i=0;i<strlen(arr1);i++)
		arr1[i]=arr2[i];
	}
	printf("\nThe string 1 is now %s",arr1);
	printf("\nThe string 2 is now %s",arr2);

	printf("\nThank You");
	return 0 ;
}
