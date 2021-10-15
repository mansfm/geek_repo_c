/*
Домашнее задание:

Программа "стрельба в мишень"

Пользователь вводит с клавиатуры 3 числа типа float(X, Y, Radius)

Первая функция вида
bool get_user_input(float *X, float *Y, float *R)
считывает с клавиатуры значения координат X,Y и радиуса, и проводит валидацию входных значений.(количество успешных преобразований от функции scanf, неотрицательный и ненулевой радиус и так далее)
Если происходит ошибка - функция возвращает false. В этом случае программа с ошибкой завершается.

Вторая функция вида
bool is_target_hit(float X, float Y, float R)
проверяет, попал ли пользователь в мишень. Формула X*X + Y*Y < R*R
Результат выводится на экран(printf)
*/


#include <stdio.h>
#include <stdbool.h>

bool get_user_input(int *a, int *b);
void swap (int *a, int *b);


int main(void) 
{
	int a = 5, b = 10;

	int *p_a = &a;
	int *p_b = &b;

	bool ret = get_user_input(&a, &b);
	if (ret == false) {
		printf("Error!\n");
		return -1;
	}

	swap(p_a, p_b);
	printf("%d %d\n", a, b);
	
	return 0;
}


void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


bool get_user_input(int *a, int *b)
{
	int retcode;

	retcode = scanf("%d%d", a, b);
	if (retcode == 2) {
        	return true;
	} else {
		return false;
	}
}
