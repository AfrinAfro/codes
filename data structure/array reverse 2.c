#include<stdio.h>
int  main()
{
    int a[10],b[10],i,j;
    printf("\nenter the elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=9;i<10;i++,j--)
    {
        b[j]=a[i];
    }
    printf("\nreverse array");
    for(i=0;i<10;i++)
    {
        printf("\n%d",b[i]);
    }

}
