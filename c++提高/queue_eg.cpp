/*
    Name:queue���� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/9 22:17:54
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<queue>

//Queue��һ���Ƚ��ȳ�(First In First Out,FIFO)�����ݽṹ��������������

//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//�����н����ݳ�Ϊ --- ��� push
//�����г����ݳ�Ϊ --- ���� pop

//���캯����
//queue<T> que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue &que); //�������캯��
//��ֵ������
//queue& operator=(const queue &que); //���صȺŲ�����
//���ݴ�ȡ��
//push(elem); //����β���Ԫ��
//pop(); //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back(); //�������һ��Ԫ��
//front(); //���ص�һ��Ԫ��
//��С������
//empty(); //�ж϶�ջ�Ƿ�Ϊ��
//size(); //����ջ�Ĵ�С

//�ܽ᣺
//��� --- push
//���� --- pop
//���ض�ͷԪ�� --- front
//���ض�βԪ�� --- back
//�ж϶��Ƿ�Ϊ�� --- empty
//���ض��д�С --- size

class Person {
	public:
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		string m_Name;
		int m_Age;
};

void test01() {
	
	queue<Person> q;
	
	Person p1("��ɮ",30);
	Person p2("�����",1000);
	Person p3("��˽�",900);
	Person p4("ɳɮ",800);
	
	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4); 
	
	cout << "������Ԫ�صĸ�����" << q.size() << endl;
	
	while(!q.empty()) {
		
		cout << "������һ��Ԫ�ء���������" << q.front().m_Name << "  ���䣺" << q.front().m_Age << endl;
		cout << "�������һ��Ԫ�ء���������" << q.back().m_Name << "  ���䣺" << q.back().m_Age << endl;
		
		//����
		q.pop(); 
		
	}
	
	cout << "������Ԫ�صĸ�����" << q.size() << endl;
	
}

int main()
{
    test01();
    
    return 0;
}

