#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//���Բ�Ĺ�ϵ
//���һ��Բ�����һ������
//������Բ�Ĺ�ϵ

//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//	
//private:
//	int m_X;
//	int m_Y;	
//};

//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(Point p)
//	{
//		m_Center = p;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}	
//	
//private:
//	int m_R;//�뾶
//	
//	//�����п�������һ������Ϊ�����еĳ�Ա 
//	Point m_Center;//Բ�� 
//};

//�жϵ��Ƿ���Բ��
void isInCircle(Circle &c,Point &p)
{
	//����Բ�ĵ���ľ���
	int dist = (c.getCenter().getX()-p.getX()) * (c.getCenter().getX()-p.getX()) + (c.getCenter().getY()-p.getY()) * (c.getCenter().getY()-p.getY());
	
	if(dist == c.getR()*c.getR())
	{
		cout << "����Բ��" << endl;
	}
	else if(dist > c.getR()*c.getR())
	{
		
		cout << "����Բ��" << endl;
	}
	else
	{
		
		cout << "����Բ��" << endl;
	} 
} 

int main()
{
	//����Բ
	Circle c;
	Point cen;
	cen.setX(10);
	cen.setY(0);
	c.setR(10);
	c.setCenter(cen);
	
	//������
	Point p;
	p.setX(10);
	p.setY(9);
	
	//�жϹ�ϵ
	isInCircle(c,p); 
	
	system("pause");
	return 0;
}
