#include<stdio.h>
int strcnt(char*);
int main()
{
    char str[30],c;
    printf("Enter a String: ");
    fgets(str,30,stdin);
    c=strcnt(str);
    printf("number of words = %d",c);
    return 0;
}
int strcnt(char str[])
{
    int i,c=0;
    for(i=0;str[i];i++)
        if(str[i] == ' ' && str[i+1] != ' ')
        c++;
    return c+1;
}

