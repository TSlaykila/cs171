#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  int n1,n2,i;
  i = 1;
  printf("Input two numbers to get their least common multiplier \n");
  scanf("%d %d",&n1,&n2);
  while((fmod(i,n1)!= 0)  || (fmod(i,n2)!= 0)){
    i++;
      }
  printf("The least common multiplier is %d \n", i);
}

//|| (i <n1||i<n2))
//|| (i <n1 ||i <n2)
