#include<iostream>
using namespace std;
#include<stdlib.h>
#include<ctime>

int main()
{
	//猜数字游戏
	
	//添加随机数种子，作用：利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL)); 
	
	int r = (rand()%100) + 1;  // rand()%100 生成 0-99 随机数 
	int guss = 0;
	
	cout << "请输入一个数字（1-100）：" << endl;
	cin >> guss;
	
	while(1)
	{
		if(guss == r)
		{
			cout << "恭喜你猜对了，游戏结束" << endl;
			break;
		}
		else if(guss > r)
		{
			cout << "你猜的数过大，请重新输入：" << endl;
			cin >> guss; 
		}
		else
		{
			cout << "你猜的数过小，请重新输入：" << endl;
			cin >> guss; 
		}
	}
	
	
	system("pause");
	return 0;
} 
