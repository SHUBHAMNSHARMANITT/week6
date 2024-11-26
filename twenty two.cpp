
//Write a C program to print the first capital letter in a given string.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("Enter the string:");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++){
    if(ch[i]>=65 && ch[i]<=90){
    printf("%c",ch[i]);
    break;}}
    return 0;
    }

