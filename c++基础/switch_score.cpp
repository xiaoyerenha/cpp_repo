#include<iostream>
using namespace std;

int main()
{
	//switch语句
	//给电影进行打分
	// 10 ~ 9 经典
	// 8 ~ 7 非常好
	// 6 ~5 一般
	// 5以下 烂片
	
	int score = 0;
	cout << "请输入电影评分：" << endl;
	cin >> score;
	cout << "您输入的电影评分为：" << score << endl; 
	
	switch(score)
	{
		case 10:
		case 9:
			cout << "经典电影" << endl;
			break;
		case 8:
		case 7:
			cout << "非常好电影" << endl;
			break;
		case 6:
		case 5:
			cout << "一般电影" << endl;
			break;
		default:
			 cout << "烂片" << endl;
	}
	
	system("pause");
	return 0;
}
