#pragma once
#include<iostream>
#include<vector>

using namespace std;

struct Node {
		int data;
		Node *next;

}node;
//±éÀú¶þ²æÊ÷
template <typename T>
Node * InitLinkedList(vector<T>ve)
{
	int n = ve.size();
	node.data = ve[0];
	node.next = NULL;
	auto head = &node;
	auto it = &node;
	for (int i = 1; i < n; i++)
	{
		auto node2 = new Node();
		node2->data = ve[i];
		it->next = node2;
		it = it->next;
	}
	return head;
}






