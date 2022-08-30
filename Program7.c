#include<stdio.h>
//Write a function to check whether a given string is palindrome or not.
void palindrome(char*);
int main()
{
    char str[30];
    printf("Enter a string: ");
    fgets(str,30,stdin);
    palindrome(str);
    return 0;
}
void palindrome(char str[])
{
    int i,j=0,p;
    for(i=0;str[i];i++);//if given input from user is Suppose NiTiN then the program counts 6 times including enter key as a character.
    for(i=i-2;i>i/2;i--)//i-2 for input NiTiN 6-2 = index values 0,1,2,3,4 = N,i,T,i,N.
    {
        if(str[j]!=str[i])
            p=1;
        break;
        j++;
    }
    if(p==1)
        printf("Not a Palindrome");
    else
        printf("Palindrome");
}
