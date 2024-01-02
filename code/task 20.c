#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num%2!=0&&num%5!=0){
        printf("%d",num);
    }
    else{
        printf("No");
    }

    return 0;
}
