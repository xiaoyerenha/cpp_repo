/*
    Name:replace_if
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:26:58
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//������������������Ԫ�أ��滻��ָ��Ԫ��

//replace_if(iterator beg, iterator end, _pred, newvalue);
// �������滻Ԫ�أ������������滻��ָ��Ԫ��
// beg ��ʼ������
// end ����������
// _pred ν��
// newvalue �滻����Ԫ��

//�ܽ᣺replace_if���������ң��������÷º������ɸѡ���������

void myPrint(int val) {
	cout << val << " ";
}

class Greater20 {
	public:
		bool operator()(int val) {
			return val > 20;
		}
};

void test01() {
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);
	
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
	
	cout << "�滻��" << endl;
	replace_if(v.begin(),v.end(),Greater20(),2000); 
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;
}

int main()
{
    test01();
    
    return 0;
}

