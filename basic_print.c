#include<stdio.h>
int main()
{
    int num, denm, a, b;
    char c;
    printf("Enter numerator & denominator:");
    scanf("%d %d", &num, &denm);
    a=num*2;
    b=denm*2;
    c='/';
    printf("%d %c %d \n",a, c, b);
    a=num*3;
    b=denm*3;
    printf("%d %c %d \n",a, c, b);
    a=num*5;
    b=denm*5;
    printf("%d %c %d \n",a, c, b);
    return 0;
}
