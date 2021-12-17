//Задание 5(3)Добавили break
#include <iostream>
#include <stdio.h>
int main()
{
int x;
scanf("%d",&x);
switch (x)
{
case 5: x*=16; break;
case 6: case 11: x-=23; break;
}
printf("%d",x);
}