#include<stdio.h>
//Write a function to calculate length of the string.
int length(char*);
int main()
{
    char str[30];int l;
    printf("Enter a String: ");
    fgets(str,30,stdin);
    printf("length of string = %d ",length(str));
    return 0;
}
int length(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i-1;
}
