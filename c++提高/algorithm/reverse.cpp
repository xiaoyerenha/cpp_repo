/*
    Name:reverse
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:02:52
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//��������Ԫ�ؽ��з�ת

//reverse(iterator beg, iterator end);
// ��תָ����Χ��Ԫ��
// beg ��ʼ������
// end ����������

//�ܽ᣺reverse��ת������Ԫ�أ�����������漰��

class myPrint {
	public:
		bool operator()(int val) {
			cout << val << " ";
		}
};

void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(60);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(70);
	
	cout << "��תǰ��" << endl;
	for_each(v.begin(),v.end(),myPrint());
	cout << endl;
	
	
	cout << "��ת��" << endl;
	reverse(v.begin(),v.end());
	
	for_each(v.begin(),v.end(),myPrint());
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}

