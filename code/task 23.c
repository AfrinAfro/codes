#include <stdio.h>
int main()
 {
    float f, c;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&f);
    c = (f-32)*0.56;
    printf("%f degrees C\n", c);

    if(c<20) {
        printf("Winter");
    }
    else if(c>=20&&c<=25) {
        printf("Autumn");
    }
    else if(c>25&&c<30) {
        printf("Spring");
    }
    else if(c>=30) {
        printf("Summer");
    }

    return 0;
}






