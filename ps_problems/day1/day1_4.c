#include<stdio.h>
void main()
{
    int y;
    scanf("%d",&y);
    if ((y%4==0&&y%100!=0)||(y%400==0))
        printf("Leap year");
    else
        printf("Not a leap year");
}