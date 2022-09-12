/*
    Name:��̬1 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/4 15:28:46
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Animal {
	public:
		//void Speak() {
		
		//�麯�� 
		virtual void Speak() {
			cout << "������˵��" << endl; 
		}
};

class Cat : public Animal {
	public:
		//��д  ��������ֵ���� ������ �����б� ��ȫ��ͬ 
		/*virtual*/void Speak() {
			cout << "Сè��˵��" << endl; 
		}
};

class Dog : public Animal {
	public:
		void Speak() {
			cout << "С����˵��" << endl; 
		}
};

//ִ��˵���ĺ���
//��ַ���  �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣�����ַ��� 

//��̬��̬��������
//1.�м̳й�ϵ
//2.������д������麯�� 

//��̬��̬ʹ�� 
//�����ָ��������� ָ��������� 


void doSpeak(Animal &animal) { //Animal & animal = cat;
	animal.Speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);
	
	Dog dog;
	doSpeak(dog);
}

int main()
{
    test01();
    
    return 0;
}

