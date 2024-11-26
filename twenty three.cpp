
//Write a C program to remove all repeated characters from a string.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("\nEnter the string:");
    scanf("%[^\n]s",ch);
    char s[100];
   int flag[256]={0};
    for(i=0;i<n;i++){
        flag[32]=0;
        if(flag[ch[i]]==0){
            flag[ch[i]]=1;
            s[k++]=ch[i];}}
    printf("New string:%s",s);
    return 0;

}

