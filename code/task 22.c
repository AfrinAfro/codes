#include <stdio.h>

int main() {
    int ncanvas, nTube;
    int pcanvas = 120 ;
    int pTube = 75;
    int totalAmount;
    int discount = 0;

    printf("Enter the number of canvases: ");
    scanf("%d", &ncanvas);

    printf("Enter the number of paint tubes: ");
    scanf("%d", &nTube);

    totalAmount = (ncanvas*pcanvas) + (nTube * pTube);

    if (totalAmount>=0&&totalAmount<=299){
        discount = 0;
    }
    else if(totalAmount>=300&&totalAmount<=499){
        discount = 10;
    }
    else if(totalAmount>=500&&totalAmount<=749){
        discount = 20;
    }
    else if(totalAmount>=750&&totalAmount<=999){
        discount = 50;
    }
    else if (totalAmount>=1000) {
        discount = 150;
    }

    printf("previous total: %d Tk\n", totalAmount);

    printf("New total after discount: %d Tk\n", totalAmount - discount);

    return 0;
}







