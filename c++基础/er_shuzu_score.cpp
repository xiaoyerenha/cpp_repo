#include<iostream>
using namespace std;

int main()
{
	//二维数组
	//考试成绩统计
	int score[3][3] = 
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = {"张三","李四","王五"};
	
	for(int i=0;i<sizeof(score)/sizeof(score[0]);i++)
	{
		int sum = 0;
		for(int j=0;j<sizeof(score[0])/sizeof(score[0][0]);j++)
		{
			sum += score[i][j];
		}
		cout << names[i] << "的总分为：" << sum << endl;
	}
	
	system("pause");
	return 0;	
} 
