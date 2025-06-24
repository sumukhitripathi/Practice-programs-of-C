#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i ;
    clrscr();
    printf("\t A B A.B A+B A' \n");
    for (i=0; i<4; i++);
        c=i;
        a=i%2;
        c/=2;
        b=c%2;
        printf("\n\t %d %d %d %d \n", b, a, a&&b, a||b, !b);
getch();
}
