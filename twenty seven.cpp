
//Write a C program to check if a given string is pangram or not.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,s=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    int a[26]={0};
    fflush(stdin);
    printf("\nEnter the string:");
    scanf("%[^\n]s",ch);
    for(i=0;ch[i]!='\0';i++){
        a[ch[i]-97]++;}
   for(i=0;i<26;i++){
   if(a[i]==0)
   {printf("\nString is not pangram.");
   break;}
   else 
   s++;
   }
   if(s==26)
   printf("\nThe string is pangram.");

   return 0;
}

