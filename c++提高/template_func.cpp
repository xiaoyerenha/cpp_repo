/*
    Name:����ģ������﷨ 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/13 19:11:54
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//������ͬ�������͵ĺ���
template<typename T>
void swapFunc(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
} 

void test01() {
	int a = 10;
	int b = 20;
	
	//��һ�ֵ��÷��� 
	//swapFunc(a,b);
	//cout << "a = " << a << " b = " << b << endl; 
	
	//�ڶ��ֵ��÷��� 
	swapFunc<int>(a,b);
	cout << "a = " << a << " b = " << b << endl;
	
}

int main()
{
    test01();
    
    return 0;
}

