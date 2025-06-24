#include<stdio.h>

void strrev(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    printf("The length of the string is %d",len);
    for(int i=0; i<len/2; i++)
    {
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("The reversed string is: %s",str);
}

int main()
{
    char str[]="Sumukhi";
    strrev(str);
    return 0;
}