//Задание 13
//lab13
#include <iostream>

int main()
{
// lab_13
int x;
scanf("%d", &x);
if (x % 10 == 1)
printf("%d рубль", x);
else if (x % 10 >= 5 | x % 100 >= 10 && x % 100 <= 19)
printf("%d рублей", x);
else if (x % 10 > 1 && x % 10 < 5)
printf("%d рубля", x);
}