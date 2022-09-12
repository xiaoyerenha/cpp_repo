#include<iostream>
using namespace std;

//设计一个学生类 
class Student
{
public:
	
	//类中的属性和行为，统一称为 成员
	//属性  成员属性  成员变量
	//行为  成员函数  成员方法 
	
	 //属性有姓名和学号
	 string name;
	 string sno;
	 
	 //行为 
	 //显示学生的姓名和学号
	 void showInfo()
	 {
	 	cout << "姓名：" << name << " 学号：" << sno << endl;
	 } 
	 //给姓名学号赋值
	 void setName(string sname)
	 {
	 	name = sname;
	 } 
	 void setSno(string num) 
	 {
	 	sno = num;
	 }
};

int main()
{
	Student s1;
	s1.name = "张三";
	s1.sno = "123456";
	
	s1.showInfo();
	
	Student s2;
	s2.setName("李四");
	s2.setSno("654321");
	
	s2.showInfo();
	
	system("pause");
	return 0;
} 
