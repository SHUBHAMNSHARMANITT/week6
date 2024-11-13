/*SIXTH PROGRAM
C PROGRAM TO FIND THE FIRST OCCURENCE OF THE CHARACTER 
BY SHUBHAM SHARMA DATE :23 OCT 2024*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n , i ,length ;
	char ch , t , p;
	char arr1[100];
	printf("Please enter string 1 length less than 100:");
    scanf("%s",arr1);
    fflush(stdin);
    scanf("%c",&ch);
    printf("\nEnter character for which occurence is finding :");
    scanf("%c",&t);
    for (i=0;i<= strlen(arr1);i++)
    {
    	p = arr1[i];
    	if(p==t){
		
    	printf("\nThe first occurence of %c is at %dth position of string:",t , i+1);
    	break;
    }
	}
     
	
	printf("\nThank You");
	return 0 ;
}
