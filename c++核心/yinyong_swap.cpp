#include<iostream>
using namespace std;

//��������

//1.ֵ����
void swap01(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
} 

//2.��ַ����
void swap02(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}  

//3.���ô���
void swap03(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
} 

int main()
{
	int a = 10;
	int b = 20;
	
	//swap01(a,b);  //ֵ���ݣ��ββ�����ʵ�� 
	//swap02(&a,&b); //��ַ���ݣ��β�����ʵ�� 
	swap03(a,b); //���ô��ݣ��β�����ʵ�� 
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	system("pause");
	return 0;
} 
