#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
  double a,b,c,h,l;
  printf("Input three differents numbers ");
  scanf("%le %le %le", &a, &b, &c);

  h = fabs(a - b);
  l = fabs(c - b);

  if(h == l){
    printf("The median is equidistant ");
  } else if((a > b||c > b) && (b > c || b > a)){
    //b is the medium

    if(h > l){
      printf("%0.lf is closer to %0.lf \n", b, c);
    } else{
      printf("%0.lf is closer to %0.lf \n", b, a);
    }
    
  } else if((b > a||c > a) && (a > b || a > c)){
    //a is the medium
    
    if(h > l){
      printf("%0.lf is closer to %0.lf \n", a, c);
    } else{
      printf("%0.lf is closer to %0.lf \n", a, b);
    }
  }else if((a > c||b > c) && (c > a || c > b)){
    //c is the medium

    if(h > l){
      printf("%0.lf is closer to %0.lf \n", c, b);
    } else{
      printf("%0.lf is closer to %0.lf \n", c, a);
    } 
  }
}
