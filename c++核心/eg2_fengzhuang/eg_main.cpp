#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//点和圆的关系
//设计一个圆形类和一个点类
//计算点和圆的关系

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
//	int m_R;//半径
//	
//	//在类中可以让另一个类作为本类中的成员 
//	Point m_Center;//圆心 
//};

//判断点是否在圆上
void isInCircle(Circle &c,Point &p)
{
	//计算圆心到点的距离
	int dist = (c.getCenter().getX()-p.getX()) * (c.getCenter().getX()-p.getX()) + (c.getCenter().getY()-p.getY()) * (c.getCenter().getY()-p.getY());
	
	if(dist == c.getR()*c.getR())
	{
		cout << "点在圆上" << endl;
	}
	else if(dist > c.getR()*c.getR())
	{
		
		cout << "点在圆外" << endl;
	}
	else
	{
		
		cout << "点在圆内" << endl;
	} 
} 

int main()
{
	//创建圆
	Circle c;
	Point cen;
	cen.setX(10);
	cen.setY(0);
	c.setR(10);
	c.setCenter(cen);
	
	//创建点
	Point p;
	p.setX(10);
	p.setY(9);
	
	//判断关系
	isInCircle(c,p); 
	
	system("pause");
	return 0;
}
