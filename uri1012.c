#include <stdio.h>
 main(){
double A,B,C, TRI, CIR, TRAP, SQ, REC, pi;

scanf("%lf %lf %lf", &A, &B, &C);
pi=  3.14159;
TRI=(A*C)/2;
CIR=pi*C*C;
TRAP= ((A+B)/2)*C;
SQ=B*B;
REC=A*B;
printf("TRIANGULO: %.3f\n",TRI);
printf("CIRCULO: %.3f\n",CIR);
printf("TRAPEZIO: %.3f\n",TRAP);
printf("QUADRADO: %.3f\n",SQ);
printf("RETANGULO: %.3f\n",REC);


return 0;
 }
