#include<iostream>
using namespace std;

int main()
{
	
	//��ֻС������ء��������
	
	int pig[5] = {300,350,200,400,250};
	int length = sizeof(pig) / sizeof(pig[0]);
	int max_w = pig[0];
	
	for(int i=1;i<length;i++)
	{
		if(pig[i] > max_w)
		{
			max_w = pig[i];
		}
	}
	cout << "���ص�С�����أ�" << max_w << endl;
	
	system("pause");
	return 0;
} 
