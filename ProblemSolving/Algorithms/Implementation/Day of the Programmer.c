#include<stdio.h>

int main()
{
    int year, sum, dd, mm = 9;
    scanf("%d", &year);
    sum = 215;

    if(year >1918)
    sum = ((year%4 == 0) && (year%100 != 0)) || (year%400==0) ? sum + 29 : sum + 28;
    else if(year<1918)
    sum = year % 4 ==0 ? sum +29 : sum +28;
    else if(year == 1918 )
    sum = sum +15;
    dd = 256 - sum;
    printf("%.2d.%.2d.%.2d", dd, mm, year);
}
