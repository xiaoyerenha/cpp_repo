/*
    Name:��ͨ�����뺯��ģ��ĵ��ù��� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/15 16:15:03
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//����ģ��Ҳ���Է�������
//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

//��ͨ����
void myPrint(int a); //{
//	
//	cout << "���õ���ͨ����" << endl;
//} 

//����ģ��
template<typename T>
void myPrint(T a) {
	
	cout << "���õĺ���ģ��" << endl;
} 

//����ģ������ 
template<typename T>
void myPrint(T a, T b) {
	
	cout << "���õĺ���ģ������" << endl;
}

void test01() {
	int a = 10;
	//myPrint(a);
}

void test02() {
	int a = 10;
	myPrint<>(a);
}

void test03() {
	int a = 10;
	int b = 20; 
	myPrint(a,b);
}

int main()
{
    //test01();//���õ���ͨ����
    test02();//���õĺ���ģ��
    
    test03();
    
    return 0;
}

