//Задание 10
//lab10
#include <iostream>
int main()
{
int x, k;
for (int i = 0; i < 3; i++) {
printf("Введите %d число\n", i + 1);
scanf("%d", &x);
if (i == 0)
k = x;
if (x > k && i != 0)
k = x;
}
printf("Наибольшее число: %d \n", k);
} 