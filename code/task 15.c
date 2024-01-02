#include<stdio.h>
int main()
{
    int credit;
    float CGPA;
    printf("Enter the CGPA of the student= ");
    scanf("%f",&CGPA);
    printf("Enter the number of credits of the student= ");
    scanf("%d",&credit);
    if(CGPA>=3.80&&credit>=30){

        if(CGPA>=3.80&&CGPA<=3.89){
            printf("The student is eligible for a waiver of 25 percent.");
            }
        else if(CGPA>=3.90&&CGPA<=3.94){
            printf("The student is eligible for a waiver of 50 percent.");
            }
        else if(CGPA>=3.95&&CGPA<=3.99){
            printf("The student is eligible for a waiver of 75 percent.");
            }
        else if(CGPA==4.00){
            printf("The student is eligible for a waiver of 100 percent.");
            }

        }
        else{
            printf("The student is not eligible for a waiver");
        }
        return 0;

}
