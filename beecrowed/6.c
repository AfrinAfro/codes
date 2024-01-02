#include<stdio.h>
int main()
{
    int a,b;
    float x;
    scanf("%d%d",&a,&b);
    if(a==1)
        x=b*4.00;
    else if(a==2)
        x=b*4.50;
    else if(a==3)
        x=b*5.00;
    else if(a==4)
        x=b*2.00;
    else if(a==5)
        x=b*1.50;
    printf("Total: R$ %.2f\n",x);
    return 0;
}
