#include<iostream>
using namespace std;

//����Ĭ�ϲ���

int func(int a,int b, int c)
{
	return a+b+c;
} 

//ע��
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ 
int func1(int a,int b=20, int c=30)
{
	return a+b+c;
} 

//2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ��� 
int func2(int a=10, int b=10);

int func2(int a, int b)
{
	return a+b;
} 


int main()
{
	cout << func(10,20,30) << endl;
	cout << func1(10) << endl;
	//��������Լ����ݣ������Լ������ݣ����û�У���ô����Ĭ��ֵ 
	cout << func1(10,30) << endl;
	
	system("pause");
	return 0;
}
