/*
Ввод: 2 целых числа(scanf)

1 - беззнаковое. Исходное число введенное пользователем для операций над ним
2 - знаковое. Величина сдвига.

Если второе число больше нуля, то выполнить сдвиг ВПРАВО первого числа на количество разрядов указанных во втором числе.
Если второе число меньше нуля, то выполнить сдвиг ВЛЕВО первого числа на количество разрядов указанных во втором числе. .
Если второе число равно нулю, выдать сообщение об этом.

После получения значений переменных, программа должна вывести в шестнадцатеричном представлении значение переменной 1 и результата

Пример:

./main
Enter number and shift value:
55 -5
Input: 0x37 shift left 5
Result: 0x6E0

./main
Enter number and shift value:
55 3
Input: 0x37 shift right 3
Result: 0x6

./main
Enter number and shift value:
55 0
Zero shift is not defined
*/


#include <stdio.h>

int main (void) 
{
	unsigned int a; //первое чилсо
	int num; //число для сдвига
	unsigned int result;//результат

	printf("Enter number and shift value:\n");
        scanf("%u %d", &a, &num); //ввод первого числа и второг числа для сдвига	
	 
	int i = 0; //переменная для количества разрядов 
	int n = num; //временная переменная для вычисления разрядов
	if (n < 0) n = -n;
    	while (n > 0) 
	{
        	n = n/10;
        	i += 1;
    	}

	    
	if (num>0) 
	{
		result = a >> i; //делаем сдвиг вправо на количество разрядов второго числа
		printf("Input: 0x%x shift right %d \nResult: 0x%x \n", a, i, result);
	}
	else if (num<0) 
	{
		result = a << i; //делаем сдвиг влево на количество разрядов второго числа
		printf("Input: 0x%x shift left %d \nResult: 0x%x \n", a, i, result);	
	}
	else if (num==0)
	{
		printf("Zero shift is not defined\n"); //ноль не принимается
	}
	else 
	{
		printf("Wrong value\n");

	}


	/*
	
	//отображение значений в двоичном виде
	int ii;
        for(ii=sizeof(a)*8-1; ii>=0; --ii)
        {
                printf("%d", a&(1<<ii)?1:0);
        }
        printf("\n");

	int iii;
        for(iii=sizeof(num)*8-1; iii>=0; --iii)
        {
                printf("%d", num&(1<<iii)?1:0);
        }
	printf("\n");

	int iiii;
        for(iiii=sizeof(result)*8-1; iiii>=0; --iiii)
        {
                printf("%d", result&(1<<iiii)?1:0);
        }
	printf("\n");
	
	*/

	return 0;

}

