
/*A programmer is given with a string and he is asked to check the ,Availability of smallest chunk of the
character in the string .If the smallest chunk of character is available ,the programmer will return the index
of the chunk , in other cases he will return the unavailable index . If the smallest chunk is found, print its
index. Else print ‘Character not found’*/
#include<stdio.h>
int main()
{
  int n,i,flag=0;
  char c;
   printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("\nEnter the string:");
    scanf("%[^\n]s",ch);
    printf("\nEnter the character:");
    scanf(" %c",&c);
    for(i=0;i<n;i++){
    if(ch[i]==c){
    printf("%d\n",i+1);
    flag=1;
    break;
    }}
    if(flag==0)
    printf("Charcter is not found.\n");
    return 0 ; 
}

