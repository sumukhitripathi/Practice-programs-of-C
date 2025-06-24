#include<stdio.h>

void insertionsort(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else{
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr={5,2,3,9,6,7,4,13,12};
    int n=sizeof(arr[])/sizeof(arr[0]);
    insertionsort(arr,n);
    return 0;
}
