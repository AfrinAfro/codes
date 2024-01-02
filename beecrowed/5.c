#include<stdio.h>
int  main()
{
    float input;
    int i, count =0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&input);
        if(input>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}
