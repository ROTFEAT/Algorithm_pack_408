// Algorithm_pack_408.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//mian文件
#include"pch.h"	
#include"utils.h"

#include<iostream>
#include<random>
#include<ctime>

 
using namespace std;
int main()
{
	
	
	vector<int> ve = gengerate_arr_int(70); //生成随机数组
	print_ve(ve);
	//list<int> li = gengerate_list_int(8); //生成随机链表
	//vector<char> ve{ 'a','b','c','d','1','2','3','4','5'};//循环左右移动测试数组
	//vector<int>va{ 1,2,3,4,5 };
	//排序
	//insertSort(ve);  //ok！
	//shellSort(ve);	//ok!
	
	//auto head = init_list(va);
	//PrintMyList(head);
	selectSort(ve);
	
	//print_ve(ve);//打印vector数组
	//print_list(li)//打印slt链表
	
	

	/*  循环左移操作
	reverse(ve, 1, 4);
	reverse(ve, 5, 9);
	reverse(ve, 1, 9); //这三步完成了循环左移4位
	*/
	
}





