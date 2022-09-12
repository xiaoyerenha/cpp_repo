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
	cout << "输入老师姓名：" << endl;
	cin >> tea->name;
	
	string nameSeed = "ABCDE";
	
	for(int i=0;i<5;i++)
	{
		//cout << "输入老师第" << i+1 << "位学生姓名：" << endl;
		//cin >> tea->stu[i].name; 
		//cout << "输入老师第" << i+1 << "位学生分数：" << endl;
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
		cout << "老师姓名：" << t[i].name << endl;
		for(int j=0;j<5;j++)
		{
			cout << "\t学生姓名：" << t[i].stu[j].name << " 学生分数：" << t[i].stu[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL)); 
	
	//结构体案例 
	//每名老师带领5个学生，总共有3名老师
	struct Teacher tea[3]; 
	
	int len = sizeof(tea) / sizeof(tea[0]);
	
	for(int i=0;i<len;i++)
	{
		cinTea(&tea[i]);
	} 
	
	/*
	for(int j=0;j<3;j++)
	{
		cout << "老师姓名：" << tea[j].name << endl;
		for(int k=0;k<5;k++)
		{
			cout << "学生姓名：" << tea[j].stu[k].name << " 学生分数：" << tea[j].stu[k].score << endl;
		}
	}
	*/
	printInfo(tea);
	
	system("pause");
	return 0;
}
