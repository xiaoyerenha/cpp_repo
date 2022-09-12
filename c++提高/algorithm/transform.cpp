/*
    Name:transform
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/22 21:10:05
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//������������һ��������

//transform(iterator beg1, iterator end1, iterator beg2, _func);
//beg1 Դ������ʼ������
//end1 Դ��������������
//beg2 Ŀ��������ʼ������
//_func �������ߺ�������

//�ܽ᣺ ���˵�Ŀ����������Ҫ��ǰ���ٿռ䣬�����޷���������

class myTransform {
	public:
		int operator()(int val) {
			return val + 1;
		}
};

class myPrint {
	public:
		void operator()(int val) {
			cout << val << " ";
		}
};

void test01() {
	
	vector<int> v1;
	
	v1.push_back(50);
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(20);
	
	vector<int> v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),myTransform());
	
	for_each(v2.begin(),v2.end(),myPrint());
	
}

int main()
{
    test01();
    
    return 0;
}

