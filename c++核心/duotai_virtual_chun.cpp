/*
    Name:虚析构和纯虚析构 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 14:59:43
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

class Animal {
	public:
		Animal() {
			cout << "Animal构造函数" << endl;
		}
		
		//虚析构函数 
		//可以解决父类指针释放子类对象时不干净的问题 
		//virtual ~Animal() {
		//	cout << "Animal析构函数" << endl;
		//}
		
		//纯虚析构
		//需要声明也需要实现
		//有了纯虚析构之后 这个类也属于抽象类，无法实例化对象 
		virtual ~Animal() = 0; 
		
		//纯虚函数
		virtual void speak() = 0; 
};

Animal::~Animal() {
	cout << "Animal纯虚析构函数" << endl;
}

class Cat : public Animal {
	public:
		Cat(string name) {
			cout << "Cat构造函数" << endl;
			m_Name = new string(name);
		} 
		
		void speak() {
			cout << *m_Name << "小猫在说话" << endl;
		}
		
		~Cat() {
			if(m_Name != NULL){
				cout << "Cat析构函数" << endl;
				delete m_Name;
				m_Name = NULL;
			}	
		}
		
		string *m_Name;//子类存在堆区数据 
};

void test01() {
	Animal * animal = new Cat("Tom");
	animal->speak();
	delete animal;
}

int main()
{
    test01();
    
    return 0;
}

