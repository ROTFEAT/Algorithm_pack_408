#pragma once
#include<iostream>
#include<vector>
using namespace std;
//(ֱ�Ӳ�������)�� ��ԭ����ĵڶ�λ��ʼ�жϣ���ǰһλ���бȽ� ��С��ǰһλ�򽻻� 
//����������С��ǰһλ �������ǰһλ������ֱ����ǰһλ��Ϊֹ�� ���Ϊ�̶�forѭ��
//�ڲ�Ϊ����whileѭ����  �����趯�������㷨��˼�� 
//���ڵ�˼������while�ڲ������ж�ν��� ֻ���ҵ��˸���������Ӧ�ô���λ�ú�Ž��н���
void insertSort(vector<int> ve)  //ʱ�临�Ӷ�n^2 �ռ临�Ӷ�1
{
	for (int i = 1; i < ve.size(); i++)
	{
		int j = i;
		while (j > 0&&ve[j] < ve[j - 1])//ע�� �����������ж���� ����һ�����Ǵ�� �ǵڶ�����������ж�
		{ //�������������б���Խ��� ��û��Խ��
			swap(ve[j], ve[j - 1]);
			j--;
		}
	}
	print_ve(ve);
	checkOrder(ve);
}

//ϣ�������Ƕ����Ĳ������� ��ϣ���Ĳ�����Ϊ1 �� ϣ�������Ϊ��������
//ϣ���Ĳ�����εݼ� ��ϣ�������ֳ�Ϊ��С�������� ����Ϊ��������
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


void heapSort(vector<int> ve)
{
	vector<int> arr = ve;
	
}

void bubbleSort(vector<int> ve)
{
	vector<int> arr = ve;
	

}