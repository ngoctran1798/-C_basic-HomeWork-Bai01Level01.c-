#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,h,cv,s;
    printf("Nhap day be: ");
    scanf("%f",&a);
    printf("nhap day lon: ");
    scanf("%f",&b);
    printf("nhap canh ben thu 1 :");
    scanf("%f",&c);
    printf("nhap canh ben thu 2: ");
    scanf("%f",&d);
    printf("nhap chieu cao: ");
    scanf("%f",&h);
    cv=(a+b+c+d);
    s=((a+b)*h)/2;
    printf("Chu vi hinh thang la: %0.2f\n",cv);
    printf("Dien tich hinh thang la: %0.2f",s);
}
