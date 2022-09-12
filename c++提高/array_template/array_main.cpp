#include<iostream>
using namespace std;
#include "array.hpp"

//可以对内置数据类型以及自定义数据类型的数据进行存储
//将数组中的数据存储到堆区
//构造函数中可以传入数组的容量
//提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组中的元素
//可以获取数组中当前元素个数和数组的容量 

void test01() {
	myArray<int> arr1(5);
	
	myArray<int> arr2(arr1);
	
	myArray<int> arr3(100);
	arr3 = arr1;
}

void printIntArray(myArray<int> &arr) {
	for(int i=0;i<arr.getSize();i++) {
		cout << arr[i] << endl;
	}
}

void test02() {
	myArray<int> arr1(5);
	
	for(int i=0;i<5;i++) {
		//利用尾插法向数组中插入数据 
		arr1.pushBack(i);
	}
	
	cout << "arr1打印输出：" << endl;
	printIntArray(arr1);
	
	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;
	
	myArray<int> arr2(arr1);
	
	cout << "arr2打印输出：" << endl;
	printIntArray(arr2);
	
	//尾删 
	arr2.popBack();
	
	cout << "arr2尾删后：" << endl;
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;
}

//测试自定义数据类型
class Person {
	public:
		Person() {
		}
		Person(string name,int age) {
			this->m_Name = name;
			this->m_Age = age;
		}
		
		string m_Name;
		int m_Age;
}; 

void printPersonArray(myArray<Person> &arr) {
	for(int i=0;i<arr.getSize();i++) {
		cout << "姓名： " << arr[i].m_Name << " 年龄： " << arr[i].m_Age << endl;
	}
}

void test03() {
	myArray<Person> arr(5);
	
	Person p1("张三",15);
	Person p2("李四",25);
	Person p3("王五",35);
	
	//将数据插入到数组中
	arr.pushBack(p1);
	arr.pushBack(p2);
	arr.pushBack(p3); 
	
	//打印数组 
	printPersonArray(arr);
	
	cout << "arr的容量为：" << arr.getCapacity() << endl;
	cout << "arr的大小为：" << arr.getSize() << endl;
}

int main() {
	
	//test01(); 
	//test02();
	test03();
	
	system("pause");
	return 0;
}
