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

//常用的拷贝和替换算法:
//copy // 容器内指定范围的元素拷贝到另一容器中
//replace // 将容器内指定范围的旧元素修改为新元素
//replace_if // 容器内指定范围满足条件的元素替换为新元素
//swap // 互换两个容器的元素

//copy(iterator beg, iterator end, iterator dest);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// dest 目标起始迭代器

//总结：利用copy算法在拷贝时，目标容器记得提前开辟空间

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

