#include <stdio.h>
int binarysearch(int arr[],int low,int high,int key)
{
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high= mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    return low-1;
}
int main()
{
    
    int arr[]={2,3,5,6,7,10,50,65,100};
    int high= sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    int result= binarysearch(arr,0,high-1,key);
    if(result==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at %d",result);
    }
}