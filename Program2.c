#include<stdio.h>
//Write a function to reverse a string.
void rev(char*);
int main()
{
    char str[30];
    printf("Enter a string: ");
    fgets(str,30,stdin);
    rev(str);
    printf("%s",str);
    return 0;
}
void rev(char str[])
{
    int i,j=0;char st[30];
    for(i=0;str[i];i++);
    for(i=i-1;i>-1;i--)
    {
        st[j]=str[i];
        j++;
    }
    for(i=0;st[i];i++)
        str[i]=st[i];
}
