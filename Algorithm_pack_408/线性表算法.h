#pragma once
#include<iostream>
#include<vector>
#include<list>
using namespace std;

template <typename T>
T FindBackN(list<T> li, int n)//������������n���ڵ�
{ //ʱ�临�Ӷ�Ϊn
	auto it = li.begin();//ָ��1
	auto it2 = it;//ָ��2
	for (int i = 0; i < n; i++) //ָ��2����ָ��1���Nλ
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


//�Թ��쵥������  
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

Node* init_list(vector<int> ve) { //ʹ����������һ������ β�巨 ����ͷָ��

	auto it = new Node(ve[0]);
	const auto head = it;
	for (int i = 1; i < ve.size(); i++)
	{
		it->next = new Node(ve[i]);
		it = it->next;
	}
	return head;
}

