/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int linearsearch(int arr[],int n,int num)
{
     int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[20],n,i,num,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to find");
    scanf("%d",&num);
    pos=linearsearch(arr,n,num);
    printf("%d",pos);

    return 0;
}
