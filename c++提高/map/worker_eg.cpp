/*
    Name:案例-员工分组 
    Copyright:
    Author: xiaoyeren_vector
    Date: 2022/5/15 21:43:59
    Description:
*/
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include <stdlib.h>
#include <ctime>

/*
公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
员工信息有: 姓名 工资组成；部门分为：策划、美术、研发
随机给10名员工分配部门和工资
通过multimap进行信息的插入 key(部门编号) value(员工)
分部门显示员工信息
*/

//总结：
//当数据以键值对形式存在，可以考虑用map 或 multimap

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker {
	public:
		string m_Name;
		int m_Salary;
};

void createWorker(vector<Worker> &v) {
	
	string nameSeed = "ABCDEFGHIJ";
	
	for(int i=0;i<10;i++) {
		Worker w;
		w.m_Name = "员工";
		w.m_Name += nameSeed[i];
		
		w.m_Salary = rand() % 10000 + 10000; //10000 ~ 19999
		//将员工放入到容器中
		v.push_back(w);
	}
}

void setGroup(vector<Worker> &v,multimap<int,Worker> &m) {
	
	for(vector<Worker>::iterator it=v.begin();it!=v.end();it++) {
		//产生随机部门编号
		int deptId = rand() % 3; //0 1 2
		
		//将员工插入到分组中
		//key部门编号，value具体员工
		m.insert(make_pair(deptId,*it));
	}
}

void showWorkerByGroup(multimap<int,Worker> &m) {
	
	//策划 
	cout << "==========策划==========" << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int cnt = m.count(CEHUA);// 统计具体人数
	int index = 0;
	
	for(;pos!=m.end() && index<cnt;pos++,index++) {
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
	
	//美术
	cout << "==========美术==========" << endl;
	pos = m.find(MEISHU);
	cnt = m.count(MEISHU);
	index = 0;
	
	for(;pos!=m.end() && index<cnt;pos++,index++) {
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
	
	//研发 
	cout << "==========研发==========" << endl;
	pos = m.find(YANFA);
	cnt = m.count(YANFA);
	index = 0;
	
	for(;pos!=m.end() && index<cnt;pos++,index++) {
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	
    //1.创建员工
	vector<Worker> vWorker;
	createWorker(vWorker); 
	
//	//测试 
//	for(vector<Worker>::iterator it=vWorker.begin();it!=vWorker.end();it++) {
//		cout << "姓名：" << (*it).m_Name << " 工资：" << (*it).m_Salary << endl;
//	}

	//2.员工分组
	multimap<int,Worker> mWorker;
	setGroup(vWorker,mWorker); 
	
	//3.显示分组信息
	showWorkerByGroup(mWorker); 
	 
    
    return 0;
}

