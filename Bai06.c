#include<stdio.h>
void main(){
float pi,chieuCao,banKinh,theTich;
pi=3.14;
printf("Nhap chieu cao va ban kinh cua hinh tru:");
scanf("%f%f",&chieuCao,&banKinh);
theTich=chieuCao*pi*banKinh*banKinh;
printf("The tich hinh tru:%0.2f",theTich);
}
