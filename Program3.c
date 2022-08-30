#include<stdio.h>
//Write a function to compare two strings.
int strcmp(char*,char*);
int main()
{
    char str1[30],str2[30];
    printf("Enter Two Strings: ");
    fgets(str1,30,stdin);
    fgets(str2,30,stdin);
    printf("%d",strcmp(str1,str2));
    return 0;
}
int strcmp(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]||str2[i];i++)
    {
        if(str1[i]!=str2[i])
        {
                if(str1[i]<str2[i]&&str1[i])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
    return 0;
}
