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

bool is_target_hit(float *p_x, float *p_y, float *p_r);
bool get_user_input(float *p_x, float *p_y, float *p_r);

int main(void) 
{
	float X = 0, Y = 0, R = 0;

	float *p_x = &X;
	float *p_y = &Y;
	float *p_r = &R;

	printf("Enter X, Y shot and target radius:\n");

	bool ret = get_user_input(&X, &Y, &R);
	if (ret == false) {
		printf("Error!\n");
		return -1;
	}

	bool result = is_target_hit(&X, &Y, &R);
        if (result == true) {
                printf("Successful hit!\n");
        }
        else {
		printf("Lucky next time\n");
	}
	
	return 0;
}

bool get_user_input(float *p_x, float *p_y, float *p_r) // функция проверки на валидацию
{
	int retcode;

	retcode = scanf("%f%f%f", p_x, p_y, p_r);
	if (retcode == 3 && *p_r != 0 && *p_r > 0) {
		return true;
	} else {
		return false;
	}
}

bool is_target_hit(float *p_x, float *p_y, float *p_r) // функция сравнения попадания/промаха
{
	if(*p_x**p_x+*p_y**p_y<*p_r**p_r) {
		return true;
	}
	else {
		return false;
	}
}

