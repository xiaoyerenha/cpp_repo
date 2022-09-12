#include<iostream>
using namespace std;

//结构体数组
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
	//2.创建结构体数组
	struct Student stuArray[3] = 
	{
		{"张三",11,62},
		{"李四",22,76},
		{"王五",33,86}
	}; 
	
	//3.给结构体数组元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 55;
	stuArray[2].score = 99;
	
	//4.遍历结构体数组
	for(int i=0;i<3;i++)
	{
		cout << "姓名：" << stuArray[i].name
			<< " 年龄：" << stuArray[i].age
			<< " 分数：" << stuArray[i].score << endl;
	} 
	
	system("pause");
	return 0; 
}
