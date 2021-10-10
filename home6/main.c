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


void number_of_digits(void);

int main (void) 
{
	number_of_digits();

	return 0;

}

void number_of_digits(void)
{
    char c;
    int digits = 0;
    int chars = 0;
    int spaces = 0;

    while((c = getchar()) != '\n') {
        if (c != ' ') {
		chars++;
	} 
	
	if (c >= '0' && c <= '9') {
		digits++;
        }

	if (c == ' ') {
		spaces++;
	}
    }

    printf("Number of chars %d\n", chars);
    printf("Number of digits %d\n", digits);
    printf("Number of spaces %d\n", spaces);
}
