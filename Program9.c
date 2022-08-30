#include<stdio.h>
#include<string.h>
/*Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )*/
void strrevword(char*);
void strev(int,int,char*);
int main()
{
    char str[30]="MySirG Education Services";
    strrevword(str);
    printf("%s",str);
    return 0;
}
void strrevword(char str[])
{
    int i=0,min=0,max=0;
    while(str[i]!='\0')
    {
        for(;str[i]!=' ';i++)
        {
            if(str[i]=='\0')
                break;
        }
        max=i-1;
        strev(min,max,str);
        i=i+1;
        min=i;
    }
    strrev(str);
}
void strev(int min,int max,char str[])
{
    int k,t;
    for(k=0;k<=max;k++)
    {
        if(min<=max)
        {
           t=str[min];
           str[min]=str[max];
           str[max]=t;
        }
        min++;
        max--;
    }
}
