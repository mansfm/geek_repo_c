/*
Домашнее задание :

Распечатать первые n простых чисел (простое число X - это такое число X >= 2 и делится только на 1 и на себя).

Пример:
Пользователь вводит 5 - значит надо вывести первые 5 простых чисел
2 3 5 7 11

На пункт "домашние задания" в методичке не обращаем внимания
*/



#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int get_user_input(void);

bool is_prime(int arg);

int main (void) 
{

	int from_user = get_user_input();

	int i=0;   //числа, которые будем проверять
	int j=0;   //числа, которых должно быть N

   	while (j<from_user) {
    		if (is_prime(i)) printf("%d ",i),j++;  //если число простое, печатаем его, инкрементируем счётчик.
   		i++;
    	}

	return 0;

}


int get_user_input(void)
{
	int input;
	int rc;

	rc = scanf("%d", &input);
	if(rc != 1) {
		printf("Error!\n");
	}

	return input;
}


bool is_prime(int arg)
{
	bool prime = true;

	if (arg < 2) {
		return false;
	}

	for (int i = 2; i < arg; i++) {
		if ((arg % i) == 0)
			return false;
	}

	return prime;
}
