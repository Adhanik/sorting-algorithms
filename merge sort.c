#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void mergesort(int arr[],int , int);
void combine(int arr[],int ,int ,int);
int n;
int main()
{
    int i ,arr[10];
    printf("\n \tmergesort implementation \n");
    printf("enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\t enter the %dth number",i+1);
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("\n\t sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }
    getch();
    return 0;
    
    
}
void mergesort(int arr[10],int low , int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        combine(arr,low,mid,high);
    }
}


 void combine(int arr[10],int low,int mid,int high)
 {
     int i=low,j=mid+1,k=low;//pay attention to the default values you assign to the variables
     int temp[10];
     while(i<=mid && j<=high)//consider 2 way mergesort
{
     if(arr[i]<=arr[j])//suppose 2 list are given and you compare elements of both the list and put the smaller one into auxillary array temp
     {
         temp[k]=arr[i];
         k++;
         i++;
     }
     else
     {
         temp[k]=arr[j];
         k++;
         j++;
     }
     
}


     //after the elements have been sorted there might be some elements remaining in either of both the list 
     while(i<=mid)
     {
         temp[k]=arr[i];
         i++;
         k++;
     }
     while(j<=high)
     {
         temp[k]=arr[i];
         j++;
         k++;
     }
     
     for(k=low;k<=high;k++)
     {
         arr[k]=temp[k];
     }
 }
 
 