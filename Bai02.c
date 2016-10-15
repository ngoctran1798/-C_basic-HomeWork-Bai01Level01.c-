#include"stdio.h"
#include "math.h"
void main()
{
  float r,cv,dt;
  printf("Nhap ban kinh r=");
  scanf("%f",&r);
  cv=2*3.14*r;
  dt=3.14*r*r;
  printf("\n Chu vi=%10.2f",cv);
  printf("\n Dien tich=%10.2f",dt);
}
