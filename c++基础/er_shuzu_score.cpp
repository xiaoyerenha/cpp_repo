#include<iostream>
using namespace std;

int main()
{
	//��ά����
	//���Գɼ�ͳ��
	int score[3][3] = 
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = {"����","����","����"};
	
	for(int i=0;i<sizeof(score)/sizeof(score[0]);i++)
	{
		int sum = 0;
		for(int j=0;j<sizeof(score[0])/sizeof(score[0][0]);j++)
		{
			sum += score[i][j];
		}
		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
	}
	
	system("pause");
	return 0;	
} 
