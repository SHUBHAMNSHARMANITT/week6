
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,flag=0,repeat;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("\nEnter the string:");
    scanf("%[^\n]s",ch);
    int t;
    printf("\nEnter the number of elements:");
    scanf("%d",&t);
    char s[t+1];
    fflush(stdin);
    printf("\nEnter the word:");
    scanf("%[^\n]s",s);
    for(i=0;i<n;i++){
     if(ch[i]=' ')
     {
      for(j=0;j<t;j++){
      if(ch[i+j+1]==s[j])
      flag++;
      }
      }
    }
      for(i=0;i<3;i++){
      ch[i]=s[i];
      flag++;}
      repeat =(flag/3) -1;
    printf("\nThe word repeated in string is %d",repeat);
    printf("\nThank You");
    return 0;
}

