#pragma once
#include<iostream>
#include<vector>
#include<list>
using namespace std;

template <typename T>
T FindBackN(list<T> li, int n)//查找链表倒数第n个节点
{ //时间复杂度为n
	auto it = li.begin();//指针1
	auto it2 = it;//指针2
	for (int i = 0; i < n; i++) //指针2推至指针1后第N位
	{
		it2++;
	}
	while (it2 !=li.end())
	{
		it++;
		it2++;
	}
	
	return *it;
}


//自构造单向链表  
class Node {
public:
	int data;
	//Node *proi;
	Node *next;
	Node(int data);
};

Node::Node(int data)
{
	this->data = data;
}

Node* init_list(vector<int> ve) { //使用数组生成一条链表 尾插法 返回头指针

	auto it = new Node(ve[0]);
	const auto head = it;
	for (int i = 1; i < ve.size(); i++)
	{
		it->next = new Node(ve[i]);
		it = it->next;
	}
	return head;
}

