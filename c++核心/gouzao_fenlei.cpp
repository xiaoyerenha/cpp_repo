#include<iostream>
using namespace std;

//1���캯���ķ��༰����
//����
//   ���ղ�������   �޲ι��죨Ĭ�Ϲ��죩���вι��� 
//   �������ͷ���   ��ͨ���� �� �������� 
class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	} 
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	} 
	//�������캯��
	Person(const Person &p) 
	{
		cout << "Person�Ŀ������캯������" << endl;
		//������������ϵ��������ԣ������������� 
		age = p.age;
	}
	
	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	} 
	
	int age;
};

//���� 
void test01()
{
	//1.���ŷ�	
/*
	Person p1; //Ĭ�Ϲ��캯������ 
	Person p2(10); //�вι��캯�� 
	Person p3(p2); //�������캯�� 
	
	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;
*/
	
	//ע������
	//����Ĭ�Ϲ��캯��ʱ����Ҫ��()
	//��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
	//Person p1(); 
	
	//2.��ʾ��
/**/
	Person p1;
	Person p2 = Person(10); //�вι���
	Person p3 = Person(p2); //�������� 

	
	//��������   �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	/*
	Person(10);
	cout << "aaaaaa" << endl;
   */
   
   //ע������
   //��Ҫ���ÿ������캯�� ��ʼ����������  
   //����������Ϊ Person (p3) === Person p3;  ��������
   //Person(p3); 
	
	//3.��ʽת���� 
	Person p4 = 10; //�൱�� д�� Person p4 = Person(10); �вι���
	Person p5 = p4; //�������� 
	
}

int main()
{
	test01();
	
	system("pause");
	return 0;
}
