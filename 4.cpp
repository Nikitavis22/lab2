//Задание 4
#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
if (!(x<=0))
if (x%2==0)
x=x*x;
else
x%=3;
printf("%d",x);
}