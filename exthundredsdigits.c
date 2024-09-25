#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  double n,n2,n3;
  printf("Input a whole number ");
  scanf("%lf", &n);
  n2 =floor(fabs(n) / 100);//bring the hundred digit to the unit level
  n3 = fmod(n2, 10); // Make the unit hundred remaining after fmod
  printf("The hundreds digit is %0.lf \n", n3);
  return 0;
}
