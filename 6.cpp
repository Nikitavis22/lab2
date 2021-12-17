//Задание 6
//lab6
#include <iostream>

#include <stdio.h>
int main()
{
int x,y;
scanf("%d",&y);
scanf("%d",&x);
switch (x)
{
case 5: y=x*x; break;
case 7: y=x%2; break;
default: y++; break;
}
printf("%d",y); 
}