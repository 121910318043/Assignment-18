#include<stdio.h>
//Write a function to transform string into uppercase
void strupp(char*);
int main()
{
    char str[30];
    printf("Enter a String ");
    fgets(str,30,stdin);
    strupp(str);
    printf("%s",str);
    return 0;
}
void strupp(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
}
