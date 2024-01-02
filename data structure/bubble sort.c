#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int temp ,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[]={22,14,12,18,9};
    int i,n;
    bubble_sort(a,5);
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
