#include<stdio.h>
void primeno(int n)
{
    int j;
    for(int i=1; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ", i);
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    primeno(n);
    return 0;
}