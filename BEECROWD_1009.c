#include <stdio.h>

int main() {

    char name;
    scanf("%s",&name);
    double A,B,C;
    scanf("%lf%lf",&A,&B);
    C=(A+(B*15/100));
    printf("TOTAL = R$ %.2lf\n",C);

    return 0;
}
