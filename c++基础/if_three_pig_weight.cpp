#include<iostream>
using namespace std;

int main()
{
	//��ֻС�������
	int pig1 = 0, pig2 = 0, pig3 = 0;
	cout << "�������һֻС������أ�" << endl;
	cin >> pig1;
	cout << "������ڶ�ֻС������أ�" << endl;
	cin >> pig2;
	cout << "���������ֻС������أ�" << endl;
	cin >> pig3;
	
	if(pig1 > pig2)
	{
		if(pig1 > pig3)
		{
			cout << "��һֻС������" << endl;
		}
		else
		{
			cout << "����ֻС������" << endl;
		}
	} 
	else
	{
		if(pig2 > pig3)
		{
			cout << "�ڶ�ֻС������" << endl;
		}
		else
		{
			cout << "����ֻС������" << endl;
	    } 
	}
	
	system("pause");
	return 0;
} 
