#include<iostream>
using namespace std;

int main()
{
	//三只小猪称体重
	int pig1 = 0, pig2 = 0, pig3 = 0;
	cout << "请输入第一只小猪的体重：" << endl;
	cin >> pig1;
	cout << "请输入第二只小猪的体重：" << endl;
	cin >> pig2;
	cout << "请输入第三只小猪的体重：" << endl;
	cin >> pig3;
	
	if(pig1 > pig2)
	{
		if(pig1 > pig3)
		{
			cout << "第一只小猪最重" << endl;
		}
		else
		{
			cout << "第三只小猪最重" << endl;
		}
	} 
	else
	{
		if(pig2 > pig3)
		{
			cout << "第二只小猪最重" << endl;
		}
		else
		{
			cout << "第三只小猪最重" << endl;
	    } 
	}
	
	system("pause");
	return 0;
} 
