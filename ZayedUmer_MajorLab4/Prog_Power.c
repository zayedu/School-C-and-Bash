#include <stdio.h>

double power(double base, int n){
    if(n==0){
        return 1;
    }else{
        return base*power(base,n-1);
    }
}

void main(){
  printf("Please enter the base: ");
  double base;
  scanf("%lf",&base);
  printf("Please enter a non negative integer exponent: ");
  int exp;
  scanf("%d",&exp);
  printf("%lf raised to the power of %d is %lf\n",base,exp,power(base,exp));
}