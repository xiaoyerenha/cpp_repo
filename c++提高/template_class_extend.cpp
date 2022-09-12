/*
    Name:类模板与继承 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/18 19:23:04
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//1.当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中 T 的类型
//2.如果不指定，编译器无法给子类分配内存
//3.如果想灵活指定出父类中 T 的类型，子类也需变为类模板

template<class T>
class Base {
	T m;
}; 

//class Son1 : public Base {//报错！！
class Son1 : public Base<int> {
	
};

template<class T1, class T2>
class Son2 : public Base<T2> {
	T1 obj;
};

void test01() {
	Son1 s1;
}

void test02() {
	Son2<string,int> s2;
}

int main()
{
    test01();
    test02();
    
    return 0;
}

