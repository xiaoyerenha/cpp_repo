/*
    Name:多态的优点：计算器类 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 10:45:08
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//普通写法
class Calculator {
	public:
		int getResult(string oper) {
			if(oper == "+") {
				return m_Num1 + m_Num2;
			}
			else if(oper == "-") {
				return m_Num1 - m_Num2;
			}
			else if(oper == "*") {
				return m_Num1 * m_Num2;
			}
		}
		//如果想扩展新的功能，需要修改源码，如添加除法功能
		//在真实开发中，提倡 开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭 
		
		int m_Num1;//操作数1 
		int m_Num2;//操作数2 
}; 

void test01() {
	//创建计算器对象 
	Calculator cal;
	cal.m_Num1 = 10;
	cal.m_Num2 = 10;
	
	cout << cal.m_Num1 << " + " << cal.m_Num2 << " = " << cal.getResult("+") << endl;
	cout << cal.m_Num1 << " - " << cal.m_Num2 << " = " << cal.getResult("-") << endl;
	cout << cal.m_Num1 << " * " << cal.m_Num2 << " = " << cal.getResult("*") << endl;
}

//多态写法
//多态的优点
//1.组织结构清晰
//2.可读性强
//3.利于前期和后期的扩展和维护 

//实现计算器抽象类 
class AbstractCalculator {
	public:
		virtual int getResult() {
			return 0;
		}
		
		int m_Num1;
		int m_Num2;
}; 

//加法计算器类
class AddCalculator : public AbstractCalculator {
	public:
		int getResult() {
			return m_Num1 + m_Num2;
		}
}; 

//减法计算器类
class SubCalculator : public AbstractCalculator {
	public:
		int getResult() {
			return m_Num1 - m_Num2;
		}
}; 

//乘法计算器类
class MulCalculator : public AbstractCalculator {
	public:
		int getResult() {
			return m_Num1 * m_Num2;
		}
}; 

void test02() {
	//多态使用条件
	//父类指针或引用 指向 子类对象 
	
	//加法 
	AbstractCalculator * abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完后记得销毁 
	delete abc; 
	
	//减法
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc; 
	
	//乘法
	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;  
}

int main()
{
    //test01();
    test02();
    
    return 0;
}

