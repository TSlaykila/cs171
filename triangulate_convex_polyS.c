#include "FPToolkit.c"

int triangulate(double x_cordinate[], double y_cordinate[], int n){
  double x_center = 0, y_center = 0;
  int i = 0;
  while(i < n){
    x_center += x_cordinate[i];
    y_center += y_cordinate[i];
    i++;
  }
  // Getting centroid cordinates
  x_center = x_center / n;
  y_center = y_center / n;

  // Getting distance from centroid to vertice and vertice to vertice, and storing in array
  G_rgb(1.0, 1.0, 1.0);
  double distance[100];
  int k = 0, r = 2;
  i = 0;
  while(r <= n){
    while(i < r){
      distance[k] = sqrt(pow(x_center - x_cordinate[i], 2) + pow(y_center - y_cordinate[i], 2));
      G_line(x_center, y_center, x_cordinate[i], y_cordinate[i]);
      i++;
      k++;
    }
   distance[k] =  sqrt(pow(x_cordinate[i - 1] - x_cordinate[i - 2], 2) + pow(y_cordinate[i - 1] - y_cordinate[i- 2], 2));
   G_line(x_cordinate[i - 1], y_cordinate[i - 1], x_cordinate[i - 2], y_cordinate[i - 2]);
   k++;
   r = r + 1;
   i--;
  }

  distance[k] = sqrt(pow(x_cordinate[i] - x_cordinate[0], 2) + pow(y_cordinate[i] - y_cordinate[0], 2));
  G_line(x_cordinate[i], y_cordinate[i], x_cordinate[0], y_cordinate[0]);
  distance[k+1] = -1;
  // calculating areas
  double area = 0;
  double s;
  s = (distance[0] + distance[k] + distance[k-2]) / 2;
  area += sqrt(s*(s - distance[0])*(s - distance[k])*(s - distance[k-2]));
  
  i = 0;
  while(distance[i+2] != -1 && distance[i+1] != -1 && distance [i] != -1){
    s = (distance[i] + distance[i+1] + distance[i+2]) / 2;
    area += sqrt(s*(s - distance[i])*(s - distance[i + 1])*(s - distance[i + 2]));
    i = i + 3;
   }
  return area;
}

int main()
{
  double a[100],b[100] ;
  double d[100],e[100] ;
  double u[100],v[100] ;  
  double a1,a2,a3 ;

  
  a[0] = 100 ; b[0] = 200 ;
  a[1] = 500 ; b[1] = 200 ;
  a[2] = 500 ; b[2] = 300 ;
  a[3] = 150 ; b[3] = 400 ;


  d[0] = 200 ; e[0] = 400 ;
  d[1] = 300 ; e[1] = 420 ;
  d[2] = 400 ; e[2] = 500 ;
  d[3] = 350 ; e[3] = 660 ;
  d[4] = 300 ; e[4] = 700 ;
  d[5] = 230 ; e[5] = 600 ;  

  u[0] = 450 ; v[0] = 400 ;
  u[1] = 550 ; v[1] = 420 ;
  u[2] = 650 ; v[2] = 500 ;
  u[3] = 600 ; v[3] = 660 ;
  u[4] = 550 ; v[4] = 700 ;
  u[5] = 480 ; v[5] = 600 ;
  u[6] = 440 ; v[6] = 520 ;  		   

  
  G_init_graphics(800,800) ;  
  G_rgb(0,0,0) ;
  G_clear() ;
  G_rgb(0.9, 0, 0.6) ;

  a1 = triangulate(a,b,4) ;
  printf("area of first polygon = %lf\n",a1) ;
  
  a2 = triangulate(d,e,6) ;
  printf("area of second polygon = %lf\n",a2) ;

  a3 = triangulate(u,v,7) ;
  printf("area of third polygon = %lf\n",a3) ;  
  
  G_wait_key() ;

}
