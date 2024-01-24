#include<stdio.h>
int main(){

    int c1, c2,u1, u2;
    float p1, p2, TOTAL;
    //GETTING USER INPUT

    scanf("%d %d %f",&c1,&u1,&p1);
    scanf("%d %d %f",&c2,&u2,&p2);
    //calculating the value to pay(VALOR A PAGAR)

    TOTAL = (u1*p1)+(u2*p2);
    //printing the value

    printf("VALOR A PAGAR: R$ %.2f\n",TOTAL);

    return 0;
}
