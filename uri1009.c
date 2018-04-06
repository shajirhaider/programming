#include<stdio.h>
#include<math.h>
main(){
    double a,b,d,total;
    char c;
    scanf("%s",&c);
    scanf("%lf %lf",&a,&b);
    d= b*(15)/100;
    total=a+d;
    printf("TOTAL = R$ %.2f\n",total);
    return 0;

}
