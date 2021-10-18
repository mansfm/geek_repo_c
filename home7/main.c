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

//bool get_user_input(int *a, int *b);
void swap (float *X, float *Y, float *R);


bool get_user_input(float *X, float *Y, float *R);



int main(void) 
{
	float X = 1, Y = 2, R = 3;

	float *p_x = &X;
	float *p_y = &Y;
	float *p_r = &R;

	bool ret = get_user_input(&X, &Y, &R);
	if (ret == false) {
		printf("Error!\n");
		return -1;
	}

	swap(p_x, p_y, p_r);
	printf("%f %f %f\n", X, Y, R);
	
	return 0;
}



void swap(float *X, float *Y, float *R) // здесь будет функция сравнения попадания/промаха
{
	float tmp = *X;
	*X = *Y;
	*Y = tmp;
	*R = *R;
}



bool get_user_input(float *X, float *Y, float *R) // функция проверки на валидацию
{
	int retcode;

	retcode = scanf("%f%f%f", X, Y, R);
	if (retcode == 3) {
        	printf("test\n");
		if (*R != 0) {
			printf("test2\n");
			if (*R > 0) {
				printf("test3\n");
				return true;
			}
		}
		//return true;
	} else {
		return false;
	}

}

