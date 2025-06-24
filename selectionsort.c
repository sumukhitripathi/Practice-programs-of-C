#include<stdio.h>

void selectionsort()
{
    for(int i=0; i<n; i++)
    {
        int mini=i;
        for(int j=i+1; j<n; j++)
            {if (arr[j]<arr[mini]
                {
                mini=j;
                }
            }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}

int main()
{
    int arr[]={6,3,9,5,7,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr);
    return 0;
}