#include<stdio.h>
//Write a function to check whether a given string is an alphanumeric string or not.
void alphanumeric(char*);
int main()
{
    char str[30];
    printf("Enter a string: ");
    fgets(str,30,stdin);
    alphanumeric(str);
    return 0;
}
void alphanumeric(char str[])
{
    int alpha=0,digit=0,i;
    for(i=0;str[i];i++)
    {
            if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
                alpha++;
            if(str[i]>='0' && str[i]<='9')
                digit++;
            if(alpha>0 && digit>0)
                break;
    }
    if(alpha>0 && digit>0)
        printf("Alphanumeric");
    else
        printf("Not Alphanumeric");
}
