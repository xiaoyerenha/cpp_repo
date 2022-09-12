/*
    Name:�������ʹ������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 14:59:43
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Animal {
	public:
		Animal() {
			cout << "Animal���캯��" << endl;
		}
		
		//���������� 
		//���Խ������ָ���ͷ��������ʱ���ɾ������� 
		//virtual ~Animal() {
		//	cout << "Animal��������" << endl;
		//}
		
		//��������
		//��Ҫ����Ҳ��Ҫʵ��
		//���˴�������֮�� �����Ҳ���ڳ����࣬�޷�ʵ�������� 
		virtual ~Animal() = 0; 
		
		//���麯��
		virtual void speak() = 0; 
};

Animal::~Animal() {
	cout << "Animal������������" << endl;
}

class Cat : public Animal {
	public:
		Cat(string name) {
			cout << "Cat���캯��" << endl;
			m_Name = new string(name);
		} 
		
		void speak() {
			cout << *m_Name << "Сè��˵��" << endl;
		}
		
		~Cat() {
			if(m_Name != NULL){
				cout << "Cat��������" << endl;
				delete m_Name;
				m_Name = NULL;
			}	
		}
		
		string *m_Name;//������ڶ������� 
};

void test01() {
	Animal * animal = new Cat("Tom");
	animal->speak();
	delete animal;
}

int main()
{
    test01();
    
    return 0;
}

