#include<iostream>
using namespace std;

//�ṹ��ָ��
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

int main()
{
	//2.�����ṹ�����
	struct Student stu = {
		"����",
		12,
		112
	};
	//3.ͨ��ָ��ָ��ṹ�����
	struct Student * p = &stu;
	
	//4.ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ� ��Ҫ���� ��-> ��
	cout << "������" << p->name
		<< " ���䣺" << p->age
		<< " ������" << p->score << endl;
	 
	system("pause");
	return 0;
} 
