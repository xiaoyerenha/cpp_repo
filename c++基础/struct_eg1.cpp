#include<iostream>
using namespace std;
#include<stdlib.h>
#include<ctime>

struct Student
{
	string name;
	int score;
};

struct Teacher
{
	string name;
	struct Student stu[5];
};

void cinTea(struct Teacher * tea)
{
	cout << "������ʦ������" << endl;
	cin >> tea->name;
	
	string nameSeed = "ABCDE";
	
	for(int i=0;i<5;i++)
	{
		//cout << "������ʦ��" << i+1 << "λѧ��������" << endl;
		//cin >> tea->stu[i].name; 
		//cout << "������ʦ��" << i+1 << "λѧ��������" << endl;
		//cin >> tea->stu[i].score;
		tea->stu[i].name = "Student_";
		tea->stu[i].name += nameSeed[i];
		
		int random = rand() % 61 + 40; // 40-100
		tea->stu[i].score = random;
	} 
	
}

void printInfo(struct Teacher * t)
{
	for(int i=0;i<3;i++)
	{
		cout << "��ʦ������" << t[i].name << endl;
		for(int j=0;j<5;j++)
		{
			cout << "\tѧ��������" << t[i].stu[j].name << " ѧ��������" << t[i].stu[j].score << endl;
		}
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL)); 
	
	//�ṹ�尸�� 
	//ÿ����ʦ����5��ѧ�����ܹ���3����ʦ
	struct Teacher tea[3]; 
	
	int len = sizeof(tea) / sizeof(tea[0]);
	
	for(int i=0;i<len;i++)
	{
		cinTea(&tea[i]);
	} 
	
	/*
	for(int j=0;j<3;j++)
	{
		cout << "��ʦ������" << tea[j].name << endl;
		for(int k=0;k<5;k++)
		{
			cout << "ѧ��������" << tea[j].stu[k].name << " ѧ��������" << tea[j].stu[k].score << endl;
		}
	}
	*/
	printInfo(tea);
	
	system("pause");
	return 0;
}
