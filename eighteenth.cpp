
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    char t;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("\nEnter the string:");
    fgets(ch,n+1,stdin);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++){
        if(ch[j]>ch[j+1]){
            t=ch[j];
            ch[j]=ch[j+1];
            ch[j+1]=t;
        }}}
        printf("\nNew string:%s",ch);
          return 0;

}

