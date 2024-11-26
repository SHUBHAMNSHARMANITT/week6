
/*Harish is designing a language processor which processes only alphabetical data. This alphabetical data
is processed in a way that repetition of alphabets are not allowed, now your task is to design the code for
alphabetical data processing.*/
#include<stdio.h>
int main()
{
  int n,i,k=0;
   printf("Enter the number of elements:");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("\nEnter the string:");
    scanf("%[^\n]s",ch);
    char s[n+1];
    int flag[256]={0};
    for(i=0;i<n;i++){
        flag[32]=0;
        if(flag[ch[i]]==0){
            flag[ch[i]]=1;
            s[k++]=ch[i];}}
    printf("\nNew string:%s",s);
    return 0;

}

