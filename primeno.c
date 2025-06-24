#include<stdio.h>
void primeno(int n)
{
    for(int i=1; i<=n; i++)
    {
        int j;
        int count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            count++;
        }
        if(count<=2)
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