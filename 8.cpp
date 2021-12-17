//Задание 8
//lab8
#include <iostream>
int main()
{
int x, e, f;
printf("Введите промежуток\n");
scanf("%d %d", &e, &f);
for (int i = 0; i < 3; i++) {
printf("Введите %d число\n", i + 1);
scanf("%d", &x);
if (e <= x && x <= f)
printf("%d лежит в указанном промежутке\n", x);
}
}