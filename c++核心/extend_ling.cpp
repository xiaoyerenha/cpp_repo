/*
    Name:菱形继承 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/4 14:33:15
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//动物类 
class Animal {
	public:
		int m_age;
	
};

//利用虚继承 解决菱形继承的问题
//继承之前 加上关键字 virtual 变为虚继承
//Animal类称为 虚基类 
//羊类
//class Sheep : public Animal {};
class Sheep : virtual public Animal {}; 
//驼类
//class Tuo : public Animal {}; 
class Tuo : virtual public Animal {}; 
//羊驼类
class SheepTuo : public Sheep, public Tuo {}; 

void test01() {
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;
	
	//问题1 当菱形继承，两个父类拥有相同数据，需要加以作用域区分 
	cout << "Sheep::m_age = " << st.Sheep::m_age << endl;
	cout << "Tuo::m_age = " << st.Tuo::m_age << endl;
	
	//问题2 m_age数据只有一份即可，菱形继承导致数据有两份，资源浪费
	cout << "st.m_age = " << st.m_age << endl; 
}

int main()
{
    test01();
    
    return 0;
}

