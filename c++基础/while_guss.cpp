#include<iostream>
using namespace std;
#include<stdlib.h>
#include<ctime>

int main()
{
	//��������Ϸ
	
	//�����������ӣ����ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL)); 
	
	int r = (rand()%100) + 1;  // rand()%100 ���� 0-99 ����� 
	int guss = 0;
	
	cout << "������һ�����֣�1-100����" << endl;
	cin >> guss;
	
	while(1)
	{
		if(guss == r)
		{
			cout << "��ϲ��¶��ˣ���Ϸ����" << endl;
			break;
		}
		else if(guss > r)
		{
			cout << "��µ����������������룺" << endl;
			cin >> guss; 
		}
		else
		{
			cout << "��µ�����С�����������룺" << endl;
			cin >> guss; 
		}
	}
	
	
	system("pause");
	return 0;
} 
