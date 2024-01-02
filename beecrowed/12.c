#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c){
        temp=a;
        b=c;
        c=temp;
    }
    if(a>=(b+c)){
            printf("NAO FORMA TRIANGULO\n");
            return 0;
    }
     if(pow(a,2)==(pow(b,2)+pow(c,2)))
        printf("TRIANGULO RETANGULO\n");
     if(pow(a,2)>(pow(b,2)+pow(c,2)))
        printf("TRIANGULO OBTUSANGULO\n");
     if(pow(a,2)<(pow(b,2)+pow(c,2)))
        printf("TRIANGULO ACUTANGULO\n");
     if(a == b && a == c)
        printf("TRIANGULO EQUILATERO\n");
     if((a==b&&a!=c)||(b==c&&a!=c))
        printf("TRIANGULO ISOSCELES\n");
    return 0;

}
