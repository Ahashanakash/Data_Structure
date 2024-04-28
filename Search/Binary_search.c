#include<stdio.h>
int main(){
    int n;
    printf("Enter size = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers = ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter number to find = ");
    scanf("%d",&x);

    int left=0,right=n-1,mid=(left+right)/2;
    while(left<=right)
    {
        if(x==arr[mid]) 
        {
            printf("found at position %d",mid+1);
            return 0;
        }
        else if(x<arr[mid])
        {
            right=mid-1;
            mid=(left+right)/2;
        }
        else if(x>arr[mid])
        {
            left=mid+1;
            mid=(left+right)/2;
        }
    }
    printf("position not found");
}