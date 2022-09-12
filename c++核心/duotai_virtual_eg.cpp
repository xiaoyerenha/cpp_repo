/*
    Name:多态案例：制作饮品 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 11:33:34
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//饮品基类 
class AbstractDrinkBase {
	public:
		//煮水
		void func1() {
			cout << "煮水" << endl;
		}
		//冲泡
		virtual void func2() = 0;
		//倒入杯中
		void func3() {
			cout << "倒入杯中" << endl;
		}
		//加入辅料 
		virtual void func4() = 0;
		
		//制作饮品
		void makeDrink() {
			func1();
			func2();
			func3();
			func4();
		} 
};

//制作咖啡
class Coffee : public AbstractDrinkBase {
	public:
		//冲泡
		virtual void func2() {
			cout << "冲泡咖啡" << endl;
		}
		//加入辅料 
		virtual void func4() {
			cout << "加入糖和牛奶" << endl;
		}
}; 

//制作茶水 
class Tea : public AbstractDrinkBase {
	public:
		//冲泡
		virtual void func2() {
			cout << "冲泡茶叶" << endl;
		}
		//加入辅料 
		virtual void func4() {
			cout << "加入柠檬" << endl;
		}
};

//制作函数
void doWork(AbstractDrinkBase * abd) { //AbstractDrinkBase * abd = new Coffee;
	abd->makeDrink();
	delete abd;
}

void test01() {
	cout << "制作咖啡：" << endl;
	//AbstractDrinkBase * adb = new Coffee;
	//adb->func1();
	//adb->func2();
	//adb->func3();
	//adb->func4();
	//delete adb;
	doWork(new Coffee);
	
	cout << "\n====================\n\n制作茶水：" << endl;;
	//adb = new Tea;
	//adb->func1();
	//adb->func2();
	//adb->func3();
	//adb->func4();
	//delete adb;
	doWork(new Tea);
} 

int main()
{
    test01();
    
    return 0;
}

