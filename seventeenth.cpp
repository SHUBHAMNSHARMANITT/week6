
//Write a C program to cound number of words in a string.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,k=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("\nEnter the string:");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++){
    if(ch[i]==' ')
    k++;}
    printf("\nNo.of words in string:%d",k);
  return 0;
}

