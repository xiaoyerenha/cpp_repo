#include<iostream>
using namespace std;

//�ṹ������������ 
 
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score; 
};

//1.ֵ����
void printStu(struct Student stu)
{
	stu.score = 100;
	
	cout << "ֵ����������" << stu.name
		<< "���䣺" << stu.age
		<< "������" << stu.score << endl;
} 

//2.��ַ����
void printStu2(struct Student * p)
{
	p->score = 100;
	
	cout << "��ַ����������" << p->name
		<< "���䣺" << p->age
		<< "������" << p->score << endl;
}

int main()
{
	Student s = {"����", 15, 60};
	
	
	cout << "������" << s.name
		<< " ���䣺" << s.age
		<< " ������" << s.score << endl;
		
	printStu(s);
	cout << "ֵ���ݺ� ������" << s.name
		<< " ���䣺" << s.age
		<< " ������" << s.score << endl;
		
	printStu2(&s);
	cout << "��ַ���ݺ� ������" << s.name
		<< " ���䣺" << s.age
		<< " ������" << s.score << endl;
		
	
	system("pause");
	return 0;
}
