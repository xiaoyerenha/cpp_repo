#include<iostream>
using namespace std;

//����ռλ����
void func(int a,int)
{
	cout << "this is func" << endl;
} 

//ռλ������������Ĭ�ϲ���
void func1(int a,int = 10)
{
	cout << "this is func" << endl;
}  

int main()
{
	func(10,10);
	func1(10);
	
	system("pause");
	return 0;
	
} 
