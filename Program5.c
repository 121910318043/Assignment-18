#include<stdio.h>
//Write a function to transform a string into lowercase.
void strlwr(char*);
int main()
{
    char str[30];
    printf("Enter a String ");
    fgets(str,30,stdin);
    strlwr(str);
    printf("%s",str);
    return 0;
}
void strlwr(char str[])
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
}
