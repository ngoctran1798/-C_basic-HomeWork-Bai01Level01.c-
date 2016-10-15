# -C_basic-HomeWork-Bai01Level01.c-
bai1
#include <stdio.h>
#include <math.h>
void main ()
{
float a, b, c, p, s ,cv;
printf ("Nhap vao canh thu nhat a= ");
scanf ("%f", &a);
printf("Nhap vap canh thu hai b = ");
scanf ("%f", &b);
printf ("Nhap vao canh thu ba c = ");
scanf ("%f", &c);
cv = (a + b + c);
p = cv/2;
s = sqrt(p * (p - a) * (p - b) * (p - c));
printf ("Chu vi cua tam giac la cv = %f", cv);
printf ("Dien tich cua tam giac la s = %f", s);
}
