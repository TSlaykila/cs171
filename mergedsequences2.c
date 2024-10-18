#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, w1[100],w2[100], i, k;

  printf("Input number in order from smallest to largest for two differents list, terminate the lists inputs with a negative number");
  scanf("%d", &n);
  i = 0;
  while(i < 100){
    w1[i] = w2[i] = 0;
    i++;
  }

  i = 0;
  while(n >= 0){
    w1[i] = n;
    scanf("%d", &n);
    i++;
  }
  w1[i] = -1;

  scanf("%d", &n);
  i = 0;
  while(n >= 0){
    w2[i] = n;
    scanf("%d", &n);
    i++;
  }

  w2[i] = -1;

  i = 0;
  k = 0;
  while(w1[i] != -1 || w2[k]!= -1){
    if(w1[i] > w2[k] ||  w1[i] == -1){
      printf("%d ", w2[k]);
      k++;
    } else if(w1[i] < w2[k] ||  w2[k] == -1){
      printf("%d ", w1[i]);
      i++;
    } else{
      printf("%d ", w1[i]);
      i++;
    }
  }
}

