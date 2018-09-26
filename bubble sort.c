void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)//n-1 comparisons because the last element get sorted itself.
    {
        for(int j=0;j<n-1-i;j++)//in n-1-i times only the n-1 will get sorted.
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("the array elements are");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
}
int main()
{
    int n,arr[20];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements in array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
}