//Задание 11
//lab11
#include <iostream>

int main() {
int x,y;
scanf("%d",&y);
scanf("%d",&x);
if (x>0&&y>0)
{
printf("точка располагается в 1 квадранте");
}
else if (x<0&&y>0)
{
printf("точка располагается в 2 квадранте");
}
else if (x<0&&y<0)
{
printf("точка располагается в 3 квадранте");
}
else if (x>0&&y<0)
{
printf("точка располагается в 4 квадранте");
}
else
{
printf("точка не удовлетворяет не одному из условий");
}
}