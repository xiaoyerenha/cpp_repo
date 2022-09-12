#include "swap.h"

//函数的定义 
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "a = " << num1 << endl;
	cout << "b = " << num2 << endl;
}
