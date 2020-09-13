#pragma once
#include<iostream>
#include<vector>
using namespace std;
//(直接插入排序)： 从原数组的第二位开始判断，与前一位进行比较 若小于前一位则交换 
//若交换后还是小于前一位 则继续与前一位交换，直到比前一位大为止。 外层为固定for循环
//内层为不定while循环。  这是舞动的排序算法的思想 
//天勤的思想是在while内部不进行多次交换 只在找到了该数字最终应该待的位置后才进行交换
void insertSort(vector<int> ve)  //时间复杂度n^2 空间复杂度1
{
	for (int i = 1; i < ve.size(); i++)
	{
		int j = i;
		while (j > 0&&ve[j] < ve[j - 1])//注意 括号中两个判断语句 若第一个就是错的 那第二个不会进行判断
		{ //所以这里括号中本该越界的 故没有越界
			swap(ve[j], ve[j - 1]);
			j--;
		}
	}
	print_ve(ve);
	checkOrder(ve);
}

//希尔排序是多间隔的插入排序， 若希尔的步长变为1 则 希尔排序变为插入排序
//希尔的步长逐次递减 故希尔排序又称为缩小增量排序 本质为插入排序
void shellSort(vector<int> ve)
{
	for (int step = 5; step > 0; step = step - 2)
	{
		for (int i = step; i < ve.size(); i+=step)
		{
			int j = i;
			while (j> 0 && ve[j] < ve[j - step])
			{
				swap(ve[j], ve[j - step]);
				j -= step;
			}
		}
	}
	print_ve(ve);
	checkOrder(ve);
}

void quickSort(vector<int>& ve, int low, int  hight)//选择第一个为枢轴
{  //因为涉及了递归 所以 需要取地址
	int i = low, j = hight;
	int temp;
	if (low < hight)//判断是否进行下面的运算
	{
		temp = ve[low];//保存枢轴数字 一般为第一个
		while (i < j)
		{
			while (j > i && ve[j] >= temp) j--; //注意 一定是从j 也就是高位开始的
			if (i < j)//因为 只有地位的temp已经被保存  所以可以把高位换到第一位去
			{
				ve[i] = ve[j];
				i++;
			}
			while (i < j && ve[i] < temp) i++;
			if (i < j)
			{
				ve[j] = ve[i];
				j--;
			}

		}
		ve[i] = temp;
		quickSort(ve, low, i - 1);//注意别把i带进下次递归中 枢轴的位置已经确定了 不必再次排序
		quickSort(ve, i + 1, hight);
	}
}


void bubbleSort(vector<int> ve)//冒泡 没啥说的
{
	for (int i = 0; i < ve.size(); i++)
	{
		for (int j = 0; j < ve.size() - i - 1; j++)
		{
			if (ve[j] > ve[j + 1]) swap(ve[j], ve[j + 1]);
		}
	}
	print_ve(ve);
	//checkOrder(ve);
}

void selectSort(vector<int> ve) //选择排序  
{
	for (int i = 0; i < ve.size(); i++)
	{ //每次选择该轮的未排序的第一个数下标为最小数下标，
		int min = i;
		for (int j = i+1; j < ve.size(); j++)
		{
			if (ve[min] > ve[j]) {
				min = j;
			}
		}
		swap(ve[min], ve[i]);
	}
	print_ve(ve);
	checkOrder(ve);
}


void heapSort(vector<int> ve)
{
	vector<int> arr = ve;
	
}

