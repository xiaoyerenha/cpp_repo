/*
    Name:��ģ����̳� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 19:23:04
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//1.������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ���������� T ������
//2.�����ָ�����������޷�����������ڴ�
//3.��������ָ���������� T �����ͣ�����Ҳ���Ϊ��ģ��

template<class T>
class Base {
	T m;
}; 

//class Son1 : public Base {//������
class Son1 : public Base<int> {
	
};

template<class T1, class T2>
class Son2 : public Base<T2> {
	T1 obj;
};

void test01() {
	Son1 s1;
}

void test02() {
	Son2<string,int> s2;
}

int main()
{
    test01();
    test02();
    
    return 0;
}

