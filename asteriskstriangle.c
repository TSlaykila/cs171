#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, index, indexgrow = 0,i = 0, k;
  printf("Input a number to make a triangle ");
  scanf("%d", &n);
  n--;
  index = n;
  while(i <= n){
    
    k = i;
    while(indexgrow < index){
      printf(" ");
      indexgrow++;
    }
    indexgrow = 0;
    index--;
    printf("*");
    while(k > 0){
      printf("**");
      k--;
    }
    printf("\n");
    i++;
  }
    
  
}
