#include<stdio.h>

int main()
{
    int i,n=5,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[n-1-i]);
    }
    return 0;
}
