#include<iostream>
using namespace std;
#include "array.hpp"

//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ洢������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
//�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//����ͨ���±�ķ�ʽ���������е�Ԫ��
//���Ի�ȡ�����е�ǰԪ�ظ�������������� 

void test01() {
	myArray<int> arr1(5);
	
	myArray<int> arr2(arr1);
	
	myArray<int> arr3(100);
	arr3 = arr1;
}

void printIntArray(myArray<int> &arr) {
	for(int i=0;i<arr.getSize();i++) {
		cout << arr[i] << endl;
	}
}

void test02() {
	myArray<int> arr1(5);
	
	for(int i=0;i<5;i++) {
		//����β�巨�������в������� 
		arr1.pushBack(i);
	}
	
	cout << "arr1��ӡ�����" << endl;
	printIntArray(arr1);
	
	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;
	
	myArray<int> arr2(arr1);
	
	cout << "arr2��ӡ�����" << endl;
	printIntArray(arr2);
	
	//βɾ 
	arr2.popBack();
	
	cout << "arr2βɾ��" << endl;
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
}

//�����Զ�����������
class Person {
	public:
		Person() {
		}
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		string m_Name;
		int m_Age;
}; 

void printPersonArray(myArray<Person> &arr) {
	for(int i=0;i<arr.getSize();i++) {
		cout << "������ " << arr[i].m_Name << " ���䣺 " << arr[i].m_Age << endl;
	}
}

void test03() {
	myArray<Person> arr(5);
	
	Person p1("����",15);
	Person p2("����",25);
	Person p3("����",35);
	
	//�����ݲ��뵽������
	arr.pushBack(p1);
	arr.pushBack(p2);
	arr.pushBack(p3); 
	
	//��ӡ���� 
	printPersonArray(arr);
	
	cout << "arr������Ϊ��" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;
}

int main() {
	
	//test01(); 
	//test02();
	test03();
	
	system("pause");
	return 0;
}
