#include<iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
 
int main()
{
	//ָ��ͺ���
	//1.ֵ����
	int a = 10;
	int b = 20;
	
	swap01(a,b);
	
	cout << "a = " << a <<endl;
	cout << "b = " << b << endl;
	//2.��ַ���� 
	swap02(&a,&b);
	
	cout << "a = " << a <<endl;
	cout << "b = " << b << endl;
	
	system("pause");
	return 0;
}
