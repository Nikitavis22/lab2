//Задание 5(2)
#include <iostream>
#include <stdio.h>
int main()
{
int x;
scanf("%d",&x);
switch (x)
{
case 5: x+=7; break;
case 6: case 11: --x; break;
}
printf("%d",x);
}