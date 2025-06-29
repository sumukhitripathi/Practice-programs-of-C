#include<stdio.h>

void bubbleSort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

//Driver program
int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	/*
	printf("Enter elements of array: ");
	for(int i=0; i<n; i++)
	scanf("%d ",&arr[i]);
	*/
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}