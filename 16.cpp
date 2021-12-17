//Задание 16
//lab16
#include <iostream>

int main()
{
// lab_16
int volume, fishs, fishs_;
scanf("%d %d", &volume, &fishs);
if (volume<fishs*3) {
if ((fishs * 3 - volume) % 3 == 0)
fishs_ = (fishs * 3 - volume) / 3;
else
fishs_ = (fishs * 3 - volume) / 3 + 1;
printf("Аквариум перенаселен, нужно переселить %d рыб(ы)", fishs_);
} else
printf("Аквариум не перенаселен");
}