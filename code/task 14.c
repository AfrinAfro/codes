#include<stdio.h>
int main()
{
    float distance,km, velocity;
    int time,hr;
    printf("Enter the distance in meters = ");
    scanf("%f",&distance);
    km = distance/1000;
    printf("Enter the time in seconds = ");
    scanf("%d",&time);
    hr = time/3600;
    velocity = km/hr;
    printf("velocity = %.1f km/h\n",velocity);
    if(velocity<60){
        printf("Too slow. Needs more changes.");
        }
    else if(velocity>=60&&velocity<=90){
        printf("Velocity is okay. The car is ready!");
        }
    else if(velocity>90){
        printf("Too fast. Only a few changes should suffice.");
        }
    return 0;


 }
