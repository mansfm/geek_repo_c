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
	int total = 0;
	int digits = 0;
	int uppercase = 0;
	int lowercase = 0;
	int spaces = 0;
	int percent_of_digits = 0;
	int percent_of_uppercase = 0;
	int percent_of_lowercase = 0;
	int percent_of_spaces = 0;

	while((c = getchar()) != '\n') {
        	if (c != '\n') {
			total++; //общее количество символов
		} 
	
		if (c >= '0' && c <= '9') {
			digits++; //количество цифр
        	}

		if ('a' <= c && c <= 'z') {
			uppercase++;
		}

		if ('A' <= c && c <= 'Z') {
			lowercase++;
		}
		
		if (c == ' ') {
			spaces++; //количество пробелов
		}
    	}

	printf("Total %d\n", total); //вывод общего количества символов
	printf("Digits %d (%d%%)\n", digits, percent_of_digits = (float)digits/(float)total*100); //вывод количества цифр и процента цифр от общего количества символов
        printf("Uppercase %d (%d%%)\n", uppercase, percent_of_uppercase = (float)uppercase/(float)total*100); //вывод количества букв в верхнем регистре и процент от общего количества символов
        printf("Lowercase %d (%d%%)\n", lowercase, percent_of_lowercase = (float)lowercase/(float)total*100); //вывод количества букв в нижнем регистре и процент от общего количества символов
	printf("Spaces %d (%d%%)\n", spaces, percent_of_spaces = (float)spaces/(float)total*100); //вывод количества пробелов и процент пробелов от общего количества символов

}
