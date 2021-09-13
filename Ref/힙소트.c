
#include <stdio.h>


void heapify(int* arr, int size);
void heap(int* arr, int* size);
void print(int list[], int n);
void tree(int list[], int n);
#define SIZE 10

// ����Ʈ ��������


int main() {

	int size = SIZE;
	//������ �迭
	int arr[SIZE] = { 5, 6, 10, 4, 3, 8, 7, 1, 2, 9 };
	printf("[ ���� �� ]\n");
	print(arr, SIZE);

	//������
	for (int i = 0; i < SIZE; ++i) {
		heapify(arr, size);
		heap(arr, &size);
	}

	printf("[ ���� �� ]\n");
	print(arr, SIZE);
	return 0;
}


//heapify, �� ���� ����� 
void heapify(int* arr, int size) {
	for (int i = 1; i < size; ++i) {
		int child = i;
		do {
			//�ڽ� ��尡 �θ� ��庸�� ũ�� ��ȯ
			int root = (child - 1) / 2;
			if (arr[root] < arr[child]) {
				int temp = arr[root];
				arr[root] = arr[child];
				arr[child] = temp;
			}
			child = root;
		} while (child != 0);	//�ֻ�� ������ ����
	}
	printf(" �������� >> ");
	print(arr, SIZE);
}

//�ֻ�� ���� ���ϴ� ��� ��ü
void heap(int* arr, int* size) {
	int temp = arr[0];
	arr[0] = arr[*size - 1];
	arr[*size - 1] = temp;
	--(*size);
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

void tree(int list[], int n)
{
	for (int k = 0; k < n; k++)
	{
		printf("  %d  ", list[k]);

		if(k==0 || k== 2 || k==6 || k==14)
		{
			printf("\n");
		}
	}
	printf("\n");
}