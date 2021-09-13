#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
#define SIZE 5

void bubble_sort(int list[], int n);
void selection_sort(int list[], int n);
void insertion_sort(int list[], int n);


void print(int list[], int n);



int main()
{
	int list[SIZE] = { 8,3,4,9,7 };


	//bubble_sort(list, SIZE);
	selection_sort(list, SIZE);
	//insertion_sort(list, SIZE);
	
	return 0;
}



// �迭�� �� ���ҵ��� ����ϴ� �Լ�
void print(int list[], int n)
{
	for (int k = 0; k < n; k++)
	{
		printf("%d | ", list[k]);
	}
	printf("\n");
}

//Bubble sort
void bubble_sort(int list[], int n)  
{
	int i, j, tmp;
	printf(" [-----�����Ʈ-----] ");
	printf(" [���� ��] ");
	print(list, SIZE);
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (list[j] > list[j + 1])//���̴� ũ��
			{
				SWAP(list[j], list[j + 1], tmp); //�ٲ�
			}
		}
		print(list, SIZE);
	}

	printf(" [���� ��] ");
	print(list, SIZE);
}




//selection sort
void selection_sort(int list[], int n)
{
	int i, j, least, tmp, cnt = 0;

	printf(" [----����(������) ����-----]\n\n");
	for (i = 0; i < n - 1; i++)
	{
		printf("%d ��° : ", cnt);
		for (int k = 0; k < n; k++)
		{
			printf("%d | ", list[k]);
		}
		printf("\n----------------------------------------\n");
		least = i;
		for (j = i + 1; j < n; j++)
		{
			if (list[least] > list[j])// �� ������ ������
			{
				least = j;
			}
		}
		SWAP(list[least], list[i], tmp);
		cnt++;
	}
	printf("%d ��° : ", cnt);
	for (int k = 0; k < n; k++)
	{
		printf("%d | ", list[k]);
	}
}



// insertion sort

void insertion_sort(int list[], int n)
{
	int i, j, key;
	printf(" [-----����(�μ���) ����-----] \n\n");
	printf(" [���� ��] ");
	print(list, SIZE);

	for (i = 1; i < n; i++)
	{
		key = list[i];
		for (j = i - 1; (j >= 0) && (list[j] > key); j--)
		{
			list[j + 1] = list[j]; //������ key���� �������ϱ� �׳� ���
		}
		list[j + 1] = key;//for�� �� ������ �ڸ� ã���� key�� �־�

		print(list, SIZE);
	}
	printf(" [���� ��] ");
	print(list, SIZE);
}




