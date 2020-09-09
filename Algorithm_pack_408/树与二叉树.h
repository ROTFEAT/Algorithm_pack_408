#pragma once
#include<iostream>
#include<vector>
#include<stack>
using namespace std;


//自构建树
class TreeNode {
public:
	int data;
	TreeNode *right;
	TreeNode *left;

	TreeNode(int data)
	{
		this->data = data;
	}
};
//层序遍历生成二叉树
/*

TreeNode* InitTree(vector<int>ve)
{
	ve.insert(ve.begin(), 0);//ve 头部插入0
	auto head = new TreeNode(ve[1]);
	auto it = head;
	for (int i = 2; i < ve.size(); i++)
	{
		
		if (i % 2 == 0) it->left = new TreeNode(ve[i]);
		else it->right = new TreeNode(ve[i]);
		//指针变化  //先左后右 
		
	}
}
*/
//层序遍历查找结点
/*

TreeNode* GetNodePos(TreeNode* root, int n)
{
	stack<TreeNode* > st;
	st.push(root);
	TreeNode* res;
	while (st.top != NULL)
	{
		auto it = st.top();
		st.pop();
		if (it->data == n)
		{
			res = it;
			return it;
		}
		st.push(it->left);
		st.push(it->right);
	}
	return res;
}
*/







