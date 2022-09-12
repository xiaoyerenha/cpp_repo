#include<iostream>
using namespace std;

//结构体指针
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

int main()
{
	//2.创建结构体变量
	struct Student stu = {
		"张三",
		12,
		112
	};
	//3.通过指针指向结构体变量
	struct Student * p = &stu;
	
	//4.通过指针访问结构体变量中的数据
	//通过结构体指针 访问结构体中的属性， 需要利用 ‘-> ’
	cout << "姓名：" << p->name
		<< " 年龄：" << p->age
		<< " 分数：" << p->score << endl;
	 
	system("pause");
	return 0;
} 
