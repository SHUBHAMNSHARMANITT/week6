
/*A splitting machine is given a character array as an input , the splitting machine splits the character
array in all possible methods to make individual strings*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    printf("\nEnter the string:");
    scanf(" %[^\n]s",ch);
    fflush(stdin);
    for(int i=2;i<=n;i++)
    { 
       for(int j=0;j<=n-i;j++)
       {
        for(int k=0;k<n;k++)
        {
          printf(" %c",ch[j+k]);
        }
        printf("\n");
       }
    }
    return 0;
    }

