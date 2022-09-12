/*
    Name:多态1 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/4 15:28:46
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Animal {
	public:
		//void Speak() {
		
		//虚函数 
		virtual void Speak() {
			cout << "动物在说话" << endl; 
		}
};

class Cat : public Animal {
	public:
		//重写  函数返回值类型 函数名 参数列表 完全相同 
		/*virtual*/void Speak() {
			cout << "小猫在说话" << endl; 
		}
};

class Dog : public Animal {
	public:
		void Speak() {
			cout << "小狗在说话" << endl; 
		}
};

//执行说话的函数
//地址早绑定  在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段绑定，即地址晚绑定 

//动态多态满足条件
//1.有继承关系
//2.子类重写父类的虚函数 

//动态多态使用 
//父类的指针或者引用 指向子类对象 


void doSpeak(Animal &animal) { //Animal & animal = cat;
	animal.Speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);
	
	Dog dog;
	doSpeak(dog);
}

int main()
{
    test01();
    
    return 0;
}

