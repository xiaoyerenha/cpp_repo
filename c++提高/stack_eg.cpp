/*
    Name:stack���� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/9 22:07:30
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<stack>

// stack��һ���Ƚ����(First In Last Out,FILO)�����ݽṹ����ֻ��һ������
//ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ
//ջ�н������ݳ�Ϊ --- ��ջ push
//ջ�е������ݳ�Ϊ --- ��ջ pop

//���캯����
//stack<T> stk; //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
//stack(const stack &stk); //�������캯��
//��ֵ������
//stack& operator=(const stack &stk); //���صȺŲ�����
//���ݴ�ȡ��
//push(elem); //��ջ�����Ԫ��
//pop(); //��ջ���Ƴ���һ��Ԫ��
//top(); //����ջ��Ԫ��
//��С������
//empty(); //�ж϶�ջ�Ƿ�Ϊ��
//size(); //����ջ�Ĵ�С

//�ܽ᣺
//��ջ --- push
//��ջ --- pop
//����ջ�� --- top
//�ж�ջ�Ƿ�Ϊ�� --- empty
//����ջ��С --- size


void test01() {
	
	stack<int> s;
	
	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40); 
	
	cout << "������Ԫ�ظ�����" << s.size() << endl;
	
	while(!s.empty()) {
		
		cout << "ջ��Ԫ�أ�" << s.top() << endl;
		
		//��ջ 
		s.pop();
	}
	
	cout << "������Ԫ�ظ�����" << s.size() << endl;
}

int main()
{
    test01();
    
    return 0;
}

