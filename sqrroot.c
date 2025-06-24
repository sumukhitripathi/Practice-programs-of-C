#include <stdio.h>
 
int sqrrt(int num)
{
	int low=1, high=num;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int temp=mid*mid;
		if(temp<=num)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return high;
}

int main()
{
	int num;
	printf("Enter no to be evaluated: ");
	scanf("%d", &num);
	int ans=sqrrt(num);
	printf("The floor of square root of %d is %d ", num, ans);
	return 0;
}