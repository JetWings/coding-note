/* Summary: ѡ������
* Author: Amusi
* Date:   208-06-22
*
* Reference: 
*   https://en.wikipedia.org/wiki/Selection_sort
*
* ѡ������˵����������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ���Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ� 
*
*/

#include <iostream>

// ѡ��������
namespace alg{
	template<typename T>
	static void SelectionSort(T list[], int length)
	{

		for (int i = 0; i < length-1; ++i)
		{ 
			int minIndex = i;
			for (int j = i; j < length; ++j)
			{
				// ÿ�δ�δ�����������ѡ����С��ֵ����������������У�����С��������
				if (list[j] < list[minIndex])
				{
					minIndex = j;
				}
			}
			int temp = list[minIndex];
			list[minIndex] = list[i];
			list[i] = temp;
		}

	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	SelectionSort<int>(a, 8);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}