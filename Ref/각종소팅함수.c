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



// 배열의 각 원소들을 출력하는 함수
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
	printf(" [-----버블소트-----] ");
	printf(" [정렬 전] ");
	print(list, SIZE);
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (list[j] > list[j + 1])//앞이더 크면
			{
				SWAP(list[j], list[j + 1], tmp); //바꿔
			}
		}
		print(list, SIZE);
	}

	printf(" [정렬 후] ");
	print(list, SIZE);
}




//selection sort
void selection_sort(int list[], int n)
{
	int i, j, least, tmp, cnt = 0;

	printf(" [----선택(셀렉션) 정렬-----]\n\n");
	for (i = 0; i < n - 1; i++)
	{
		printf("%d 번째 : ", cnt);
		for (int k = 0; k < n; k++)
		{
			printf("%d | ", list[k]);
		}
		printf("\n----------------------------------------\n");
		least = i;
		for (j = i + 1; j < n; j++)
		{
			if (list[least] > list[j])// 더 작은게 있으면
			{
				least = j;
			}
		}
		SWAP(list[least], list[i], tmp);
		cnt++;
	}
	printf("%d 번째 : ", cnt);
	for (int k = 0; k < n; k++)
	{
		printf("%d | ", list[k]);
	}
}



// insertion sort

void insertion_sort(int list[], int n)
{
	int i, j, key;
	printf(" [-----삽입(인서션) 정렬-----] \n\n");
	printf(" [정렬 전] ");
	print(list, SIZE);

	for (i = 1; i < n; i++)
	{
		key = list[i];
		for (j = i - 1; (j >= 0) && (list[j] > key); j--)
		{
			list[j + 1] = list[j]; //어차피 key값을 빼놨으니까 그냥 덮어씀
		}
		list[j + 1] = key;//for문 다 돌리고 자리 찾으면 key를 넣어

		print(list, SIZE);
	}
	printf(" [정렬 후] ");
	print(list, SIZE);
}




