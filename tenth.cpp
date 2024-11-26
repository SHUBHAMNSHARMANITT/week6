//10. Write a C program to insert a new character in a given string at a given position//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,k,t;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    char s[n+1];
    fflush(stdin);
    printf("\nEnter the string:");
    scanf("%[^\n]s",ch);
    printf("\nEnter the position:");
    scanf("%d",&t);
    printf("\nEnter the character:");
    scanf("%s",&k);
    for(i=0;i<t-1;i++)
    s[i]=ch[i];
    s[t-1]=k;
    for(i=t;i<=n;i++)
   s[i]=ch[i-1];
   s[n+1]='\0';
   printf("\nNew string:%s",s);
   return 0;


}
