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

	printf("number %d is prime %s\n", from_user, is_prime(from_user) ? "TRUE" : "FALSE");


	/*
	for (int i = 1; i <= from_user; i++ ) {
		printf("iteration %d of %d\n", i, from_user);
	}
	*/







	return 0;





	/*

	unsigned int a; //первое число
	int num; //число для сдвига
	unsigned int result;//результат

	printf("Enter number and shift value:\n");
        scanf("%u %d", &a, &num); //ввод первого числа и второго числа для сдвига	
	 
	int n = num; 
	if (n < 0) n = -n; //убираем знак для второго числа

	    
	if (num>0) 
	{
		result = a >> n; //делаем сдвиг вправо на количество разрядов указанных во втором числе
		printf("Input: 0x%x shift right %d \nResult: 0x%x \n", a, n, result);
	}
	else if (num<0) 
	{
		result = a << n; //делаем сдвиг влево на количество разрядов указанных во втором числе
		printf("Input: 0x%x shift left %d \nResult: 0x%x \n", a, n, result);	
	}
	else if (num==0)
	{
		printf("Zero shift is not defined\n"); //ноль не принимается
	}
	else 
	{
		printf("Wrong value\n");

	}

	return 0;

	*/



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

	if (arg <= 2) {
		return false;
	}

	for (int i = 2; i < arg; i++) {
		if ((arg % i) == 0)
			return false;
	}

	return prime;
}
