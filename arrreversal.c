#include<stdio.h> 

void rvereseArray(int arr[], int start, int end) 
{ 
	while (start < end) 
	{ 
		int temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp; 
		start++; 
		end--; 
	} 
}	 

void printArray(int arr[], int n) 
{ 
    for (int i=0; i < n; i++) 
	printf("%d ", arr[i]); 
} 

/* Driver function */
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	rvereseArray(arr, 0, n-1); 
	printf("Reversed array is \n"); 
	printArray(arr, n);	 
	return 0; 
} 