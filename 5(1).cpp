//Задание 5
A) В case необходимо писать значение, но не условие (case x> 0: x--; break;)

#include <iostream>
#include <stdio.h>
int main ()
{
int x;
scanf ("% d", & x);
переключатель (x)
{
case 5: x ++; перерыв;
case 0: x--; перерыв;
по умолчанию: x + = 66;
}
printf ("% d", x);
}