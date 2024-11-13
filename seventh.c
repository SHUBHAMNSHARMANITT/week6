/*SEVENTH PROGRAM
C PROGRAM TO COMPARE TWO STRINGS 
BY SHUBHAM SHARMA DATE :23 OCT 2024*/
#include<stdio.h>
#include<string.h>
int main()
{	
	int n , i ,length ;
	char ch , t , p;
	char arr1[100] , arr2[100];
	printf("Please enter string 1 length less than 100:");
    scanf("%s",arr1);
    fflush(stdin);
    scanf("%c",&ch);
    printf("Please enter string 2 length less than 100:");
    scanf("%s",arr2);
    fflush(stdin);
    scanf("%c",&ch);
    if (strlen(arr1)==strlen(arr2))
	{
		for(i=0;i<strlen(arr2);i++)
		{
		if (arr1[i]!=arr2[i]){
			printf("Both the string are not equal:");
			break;
		}
		}
		printf("Both the string are equal:");
				
		
	}


   else
	printf("Both the string are not equal:");
	return 0 ;
}
