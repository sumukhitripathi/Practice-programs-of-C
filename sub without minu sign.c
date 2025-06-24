#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two nos");
    scanf("%d %d ",&a, &b);
    c=~b+(a+1);
    printf("The rem is %d", c);
    return 0;

}