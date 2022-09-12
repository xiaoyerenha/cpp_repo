/*
    Name:copy
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/25 21:09:40
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���õĿ������滻�㷨:
//copy // ������ָ����Χ��Ԫ�ؿ�������һ������
//replace // ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if // ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//swap // ��������������Ԫ��

//copy(iterator beg, iterator end, iterator dest);
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// dest Ŀ����ʼ������

//�ܽ᣺����copy�㷨�ڿ���ʱ��Ŀ�������ǵ���ǰ���ٿռ�

class myPrint {
	public:
		bool operator()(int val) {
			cout << val << " ";
		}
};

void test01() {
	
	vector<int> v;
	
	for(int i=0;i<10;i++) {
		v.push_back(i);
	}
	
	vector<int> vTarget;
	vTarget.resize(v.size());
	
	copy(v.begin(),v.end(),vTarget.begin());
	
	for_each(vTarget.begin(),vTarget.end(),myPrint());
	cout << endl;
	
}

int main()
{
    test01();
    
    return 0;
}

