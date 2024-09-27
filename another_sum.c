#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  double  n,i,x4;
  double result;
  result = 0;
  i = 1;
  printf("Input a number a positive integer divisible by 4 \n");
  scanf("%lf", &n);
  while(fmod(n,4) != 0 || n < 0){
    printf("The input doesn't make sense, try again \n");
    scanf("%lf", &n);
    }

  while(0 < n){
    if(fmod(n,8) == 0){
    result = result - ((n - 3)*(n -2))/ ((n-1)+n);
    } else{
    result = result + ((n - 3)*(n -2))/ ((n-1)+n);
    }
    i++;
    n = n - 4;
  }

  printf("result is %f \n", result);
  
}
