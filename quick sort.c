#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void quicksort(int arr[SIZE],int , int)
int partition(int arr[SIZE],int ,int)
void swap(int arr[SIZE],int*,int*)
int n;//total number of elements to sort
int main()
{
    int i;
    int arr[SIZE];
    clrscr();
    printf("\n\t\t QUICK SORT METHOD \n");
    printf("\n enter the total numbers to sort:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter the %d element ",i+1);
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("\n the sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }
    getch();
    return 0;
}


void quicksort(int arr,int low,int high)
{
    int j=partition(arr,low,high);//j is the value of partition at which pivot is present
    quicksort(arr,low,j);//sort the first sublist on basis of pivot,smaller the pivot
    quicksort(arr,j+1,high);//sort the second sublist on basis of pivot , greater than pivot 
}


int partition(int arr,int low,int high)
{
    int pivot= arr[low],i=low,j=high;
    while(i<=j)
{
        
    while(arr[i]<=pivot)
    {
        i++;
    }
    while(arr[j]>pivot)
    {
        j++;
    }
    if(i<j)
    {
        swap(arr,&i,&j);//swap the values at positons where i value is greater and j value is smaller.
    }
    
}
swap(arr,&low,&j);//we have now finally got the pivot ,now we swap it with the position of pivot which was arr[low],
return j;

}

void swap(int arr,int *i,int*j)
{
    int temp;
    temp=arr[*i];
    arr[*i]=arr[*j];
    arr[*j]=temp;
}