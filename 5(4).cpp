//Задание 5(4)В switch необходимо заменить число на переменную, чтобы выполнялся не только case 5
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