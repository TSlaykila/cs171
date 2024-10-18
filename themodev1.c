#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,k,w[1000], mode, frecuency;

  printf("Input whole number from 0 to 1000, input negative number to end action. ");
  scanf("%d", &n);

  while(k < 1000){
    w[k] = 0;
    k++;
  }

  while(n >= 0){
    w[n]++;
    scanf("%d", &n);
  }

  k = 0;
  mode = 0;
  frecuency = 0;
  while(k < 1000){
    if(mode < w[k]){
      frecuency = w[k];
      mode = k;
    }
    k++;
  }

  printf("n\ The mode is %d and the frecuency is %d.", mode, frecuency);
}
