#include<iostream>
using namespace std;

//结构体做函数参数 
 
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score; 
};

//1.值传递
void printStu(struct Student stu)
{
	stu.score = 100;
	
	cout << "值传递姓名：" << stu.name
		<< "年龄：" << stu.age
		<< "分数：" << stu.score << endl;
} 

//2.地址传递
void printStu2(struct Student * p)
{
	p->score = 100;
	
	cout << "地址传递姓名：" << p->name
		<< "年龄：" << p->age
		<< "分数：" << p->score << endl;
}

int main()
{
	Student s = {"张三", 15, 60};
	
	
	cout << "姓名：" << s.name
		<< " 年龄：" << s.age
		<< " 分数：" << s.score << endl;
		
	printStu(s);
	cout << "值传递后 姓名：" << s.name
		<< " 年龄：" << s.age
		<< " 分数：" << s.score << endl;
		
	printStu2(&s);
	cout << "地址传递后 姓名：" << s.name
		<< " 年龄：" << s.age
		<< " 分数：" << s.score << endl;
		
	
	system("pause");
	return 0;
}
