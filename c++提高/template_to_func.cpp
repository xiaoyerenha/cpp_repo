/*
    Name:��ͨ�����뺯��ģ������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/15 16:02:38
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
//����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
//���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��

//��ͨ����
int myAdd1(int a, int b) {
	 
	return a + b;
}

//����ģ�� 
template<typename T>
T myAdd2(T a, T b) {
	
	return a + b;
} 

void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	
	cout << myAdd1(a,b) << endl;
	cout << myAdd1(a,c) << endl;
}

void test02() {
	int a = 10;
	int b = 20;
	char c = 'c';
	
	cout << myAdd2(a,b) << endl;
	cout << myAdd2<int>(a,c) << endl;
}

int main()
{
    //test01();
    test02();
    
    return 0;
}

