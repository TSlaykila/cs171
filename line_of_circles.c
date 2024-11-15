#include "FPToolkit.c"
#include <math.h>

int main(){
  double n;
  double A[2], B[2];
  printf("how many circles");
  scanf("%lf", &n);

  G_init_graphics(800,800);
  G_wait_click(A);
  G_fill_circle(A[0], A[1], 2);
  G_wait_click(B);
  G_fill_circle(B[0], B[1], 2);
  G_line(A[0], A[1], B[0], B[1]);

  printf("%lf %lf %lf %lf", A[0], A[1], B[0], B[1]);
  double total_distance =sqrt( pow(B[0] - A[0],2) + pow(B[1] - A[1], 2));
  printf("\n %lf", total_distance);
  double r = total_distance / (n*2); // * ((B[1]-A[1])/(B[0] - A[0])); //assigning amount of pixel each circle will take and then divding by two to get the radius
  printf("\n %lf", r);
  int i = 0;
  double x = A[0], y = A[1];
  double x_change = fabs(B[0]-A[0])/(2*n);
  double y_change = fabs(B[1]-A[1])/(2*n);
  if(B[0] > A[0]){
   x= x +  x_change;
    
  } else{
   x = x - x_change;
  }

  if(B[1] > A[1]){
   y= y +  y_change;
  } else{
    y = y - y_change;
  }

  
  while(i < n){
    G_circle(x, y, r);
   
    if(B[0] > A[0]){
   x= x + 2* x_change;
    
  } else{
   x = x - 2* x_change;
  }

  if(B[1] > A[1]){
   y= y + 2* y_change;
  } else{
    y = y - 2* y_change;
  }
    i++;
  }
  
  
  
	      G_wait_key();
}

