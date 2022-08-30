#include<stdio.h>
//Write a function to find the repeated character in a given string.
int rep(char*);
int main()
{
    char str[30];
    printf("Enter a string: ");
    fgets(str,30,stdin);
    printf("%d",rep(str));
    return 0;
}
int rep(char str[])
{
    int i,j,h=0,hash[127]={0};
    for(i=0;str[i];i++)
        for(j=0;j<127;j++)
    {
        if(str[i]==j)
            {
                hash[j]=hash[j]+1;
                break;
            }
    }
    for(i=0;i<127;i++)
        if(hash[i]>1)
        h++;
    return h;
}
