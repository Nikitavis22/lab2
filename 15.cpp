//Задание 15
//lab15
#include <iostream>

int main()
{
// lab_15
int m, s;
scanf("%d %d", &m, &s);
if ((m*60+s)*16 > 6*1024)
printf("Места не хватит");
else
printf("Места хватит");
}