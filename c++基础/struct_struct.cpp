#include<iostream>
using namespace std;

//�ṹ��Ƕ�׽ṹ�� 
//1.����ṹ�� 
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score; 
};

struct Teacher
{
	//����
	string name;
	//����
	int age;
	
	struct Student stu;
};

int main()
{
	//������ʦ
	Teacher t;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 90;
	
	cout << "��ʦ������" << t.name
		<< " ��ʦ���䣺" << t.age
		<< " ��ʦ������ѧ����" << t.stu.name
		<< " ��ʦ������ѧ�����䣺" << t.stu.age
		<< " ��ʦ������ѧ��������" << t.stu.score << endl; 
	
	system("pause");
	return 0;
}
