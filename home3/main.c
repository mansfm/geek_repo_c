/*
 Домашнее задание к уроку 3 :

 Пользователь вводит радиус через scanf.
 Нужно вычислить для указанного радиуса R:

 Длину окружности. Формула 2 * Pi * R
 Площадь круга. Формула Pi * R * R
 Объем шара. Формула 4/3 * Pi * R * R * R
 Pi можно принять за 3.1415 либо использовать константу M_PI подключив #include <math.h>
 Результаты вывести в консоль через printf
 */

#include <stdio.h>

int main (void) 
{
	int x1, x2, x3;
	int y;

	printf("Please enter radius\n");
	scanf("%d%d", &x1, &x2 );
	y = x1 * x2;
	printf("Result %d\n", y);
}
