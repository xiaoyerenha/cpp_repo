/*
    Name:����������ʹ�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/21 17:14:18
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//���غ������ò��������࣬����󳣳�Ϊ��������
//��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���

//���ʣ���������(�º���)��һ���࣬����һ������

//ʹ���ص㣺
//����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//�������󳬳���ͨ�����ĸ����������������Լ���״̬
//�������������Ϊ��������

class myAdd {
	public:
		//1.����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
		int operator()(int a,int b) { 
			return a + b;
		}
};

class myPrint {
	public:
		myPrint() {
			cnt = 0;
		}
		void operator()(string str) {
			cnt++;
			cout << str << endl;
		}
		
		//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
		int cnt;
};

//3.�������������Ϊ��������
void doPrint(myPrint &mp,string str) {
	
	mp(str);
	mp(str);
	cout << "myPrint���ô�����" << mp.cnt << endl;
	
}

void test01() {
	
	myAdd md;
	cout << md(10,20) << endl;
	
}

void test02() {
	myPrint mp;
	mp("hello");
	mp("hello");
	mp("hello");
	cout << "myPrint���ô�����" << mp.cnt << endl;
}

void test03() {
	
	myPrint mp;
	doPrint(mp,"world");
	
}

int main()
{
    //test01();
    //test02();
    test03();
    
    return 0;
}

