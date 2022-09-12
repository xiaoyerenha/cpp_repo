/*
    Name:list��������͹��캯�� 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/10 23:02:39
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<list>

//�����ݽ�����ʽ�洢
//STL�е�������һ��˫��ѭ������
//��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������

//list���ŵ㣺
//���ö�̬�洢���䣬��������ڴ��˷Ѻ����
//����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��
//list��ȱ�㣺
//���������ǿռ�(ָ����) �� ʱ�䣨����������ķѽϴ�

//List��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ������ġ�

//�ܽ᣺STL��List��vector���������ʹ�õ�������������ȱ��

//list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
//list(beg,end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
//list(n,elem); //���캯����n��elem����������
//list(const list &lst); //�������캯����

void printList(const list<int> &l) {
	
	for(list<int>::const_iterator it=l.begin();it!=l.end();it++) {
		
		cout << *it << " ";
	}
	cout << endl;
	
}

void test01() {
	
	list<int> l1;
	
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	
	printList(l1);
	
	list<int> l2(l1.begin(),l1.end());
	printList(l2);
	
	list<int> l3(5,10);
	printList(l3);
	
	list<int> l4(l3);
	printList(l4);
}
 

int main()
{
    test01();
    
    return 0;
}

