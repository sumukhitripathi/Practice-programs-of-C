#include <stdio.h>

//with third variable
int main()
{
	int x, y;
	printf("Enter Value of x ");
	scanf("%d", &x);
	printf("\nEnter Value of y ");
	scanf("%d", &y);

	int temp = x;
	x = y;
	y = temp;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}

   
//without third variable
#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter the two numbers : \n");
	scanf("%d %d", &a, &b);
	printf("Before swapping A is : %d and B is %d \n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping A is : %d and B is : %d \n", a, b);
	return 0;
}