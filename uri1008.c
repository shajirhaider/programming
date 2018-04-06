#include<stdio.h>
main(){
int e_num, w_hr;
float amt, salary;
scanf("%d %d",&e_num, &w_hr);
scanf("%f",&amt);
printf("NUMBER = %d\n",e_num);
salary=amt*w_hr;
printf("SALARY = U$ %.2f\n",salary);
return 0;


}
