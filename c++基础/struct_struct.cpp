#include<iostream>
using namespace std;

//结构体嵌套结构体 
//1.定义结构体 
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score; 
};

struct Teacher
{
	//姓名
	string name;
	//年龄
	int age;
	
	struct Student stu;
};

int main()
{
	//创建老师
	Teacher t;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 18;
	t.stu.score = 90;
	
	cout << "老师姓名：" << t.name
		<< " 老师年龄：" << t.age
		<< " 老师辅导的学生：" << t.stu.name
		<< " 老师辅导的学生年龄：" << t.stu.age
		<< " 老师辅导的学生分数：" << t.stu.score << endl; 
	
	system("pause");
	return 0;
}
