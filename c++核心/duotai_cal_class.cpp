/*
    Name:��̬���ŵ㣺�������� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/4/5 10:45:08
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;

//��ͨд��
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
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ�룬����ӳ�������
		//����ʵ�����У��ᳫ ����ԭ��
		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر� 
		
		int m_Num1;//������1 
		int m_Num2;//������2 
}; 

void test01() {
	//�������������� 
	Calculator cal;
	cal.m_Num1 = 10;
	cal.m_Num2 = 10;
	
	cout << cal.m_Num1 << " + " << cal.m_Num2 << " = " << cal.getResult("+") << endl;
	cout << cal.m_Num1 << " - " << cal.m_Num2 << " = " << cal.getResult("-") << endl;
	cout << cal.m_Num1 << " * " << cal.m_Num2 << " = " << cal.getResult("*") << endl;
}

//��̬д��
//��̬���ŵ�
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ��ڵ���չ��ά�� 

//ʵ�ּ����������� 
class AbstractCalculator {
	public:
		virtual int getResult() {
			return 0;
		}
		
		int m_Num1;
		int m_Num2;
}; 

//�ӷ���������
class AddCalculator : public AbstractCalculator {
	public:
		int getResult() {
			return m_Num1 + m_Num2;
		}
}; 

//������������
class SubCalculator : public AbstractCalculator {
	public:
		int getResult() {
			return m_Num1 - m_Num2;
		}
}; 

//�˷���������
class MulCalculator : public AbstractCalculator {
	public:
		int getResult() {
			return m_Num1 * m_Num2;
		}
}; 

void test02() {
	//��̬ʹ������
	//����ָ������� ָ�� ������� 
	
	//�ӷ� 
	AbstractCalculator * abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//�����ǵ����� 
	delete abc; 
	
	//����
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc; 
	
	//�˷�
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

