#include<iostream>
using namespace std;

//�ṹ������
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
	//2.�����ṹ������
	struct Student stuArray[3] = 
	{
		{"����",11,62},
		{"����",22,76},
		{"����",33,86}
	}; 
	
	//3.���ṹ������Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 55;
	stuArray[2].score = 99;
	
	//4.�����ṹ������
	for(int i=0;i<3;i++)
	{
		cout << "������" << stuArray[i].name
			<< " ���䣺" << stuArray[i].age
			<< " ������" << stuArray[i].score << endl;
	} 
	
	system("pause");
	return 0; 
}
