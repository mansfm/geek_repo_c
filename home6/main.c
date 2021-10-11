/*
Основное задание(обязательное):
Пользователь вводит строку, состоящую из десятичных цифр, английских букв, символов пробела и так далее.

Вычислить абсолютное и процентное соотношение символов:

1) цифр
2) английских букв верхнего регистра
3) английских букв нижнего регистра
4) пробелов

Пример:

Вводим "123 456 abc DEF ++"
общая длина строки - 18 символов
из них цифр 6, то есть примерно 33% ((float)6 / (float)18) * 100
пробелов 4
и так далее.
*/



#include <stdio.h>


void counting_characters(void);

int main (void) 
{
	counting_characters();

	return 0;

}

void counting_characters(void)
{
	char c;
	int digits = 0;
	int chars = 0;
	int spaces = 0;
	int percent_of_digits = 0;
	int percent_of_spaces = 0;

	while((c = getchar()) != '\n') {
        	if (c != '\n') {
			chars++; //количество символов
		} 
	
		if (c >= '0' && c <= '9') {
			digits++; //количество цифр
        	}

		if (c == ' ') {
			spaces++; //количество пробелов
		}
    	}

	printf("Chars %d\n", chars);
	
	printf("Digits %d\n", digits);
	percent_of_digits = (float)digits/(float)chars*100; //процент цифр
	printf("Percent of digits %d\n", percent_of_digits);
	
	printf("Spaces %d\n", spaces);
	percent_of_spaces = (float)spaces/(float)chars*100; //процент пробелов
	printf("Percent of spaces %d\n", percent_of_spaces);

}
