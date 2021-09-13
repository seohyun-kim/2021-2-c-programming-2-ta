#include <stdio.h>
#define SWAP(x,y,tmp) ((tmp)=(x), (x)=(y) , (y)=(tmp) )
#define SIZE 8

void mergeSort(int data[], int p, int r);
void merge(int data[], int p, int q, int r);

void quick_sort(int list[], int left, int right);

void print(int list[], int n);

int main() {
	int data[SIZE] = { 69,10,30,2,16,8,31,22 };


	int i;
	printf("���� ��\n");
	print(data, SIZE);

	//mergeSort(data, 0, SIZE-1);
	//quick_sort(data, 0, SIZE-1);


	printf("\n���� ��\n");
	print(data, SIZE);
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


// ������Ʈ ----------------------------------------------
void mergeSort(int data[], int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}
void merge(int data[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	int tmp[SIZE]; // �� �迭
	while (i <= q && j <= r) {
		if (data[i] <= data[j]) tmp[k++] = data[i++];
		else tmp[k++] = data[j++];
	}
	while (i <= q) tmp[k++] = data[i++];
	while (j <= r) tmp[k++] = data[j++];
	for (int a = p; a <= r; a++) data[a] = tmp[a];
	print(data, SIZE);
}

//------------------------------------------------------



// ����Ʈ -------------------------------------------------
void quick_sort(int list[], int left, int right)
{
	int q;
	if (left < right)
	{
		q = partition(list, left, right);
		quick_sort(list, left, q - 1);
		quick_sort(list, q + 1, right);
	}
}

int partition(int list[], int left, int right)
{
	int tmp;
	int low = left + 1;
	int high = right;
	int pivot = list[left]; //ù���� �ε����� �Ǻ����� ��
	

	while (low <= high) //�������� �ʾ��� ��
	{
		for (; (low <= right) && (list[low] < pivot); low++);
		for (; (high >= left) && (list[high] > pivot); high--);
		if (low < high)
		{
			SWAP(list[low], list[high], tmp);
		}
	}
	printf("[pivot : %d] �� [ %d ] ��ȯ \n\n", pivot, list[high]);
	SWAP(list[left], list[high], tmp);
	print(list, SIZE);

	return high;
}
//------------------------------------------------------------------


