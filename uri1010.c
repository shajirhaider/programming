
#include<stdio.h>

main(){
    int pro1, a1, pro2, b1;
    float a2,b2, total;

    scanf("%d %d %f",&pro1,&a1, &a2);
    scanf("%d %d %f",&pro2,&b1, &b2);

    total= (a1*a2)+(b1*b2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;

}
