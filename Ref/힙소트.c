
#include <stdio.h>


void heapify(int* arr, int size);
void heap(int* arr, int* size);
void print(int list[], int n);
void tree(int list[], int n);
#define SIZE 10

// 힙소트 내림차순


int main() {

	int size = SIZE;
	//무작위 배열
	int arr[SIZE] = { 5, 6, 10, 4, 3, 8, 7, 1, 2, 9 };
	printf("[ 정렬 전 ]\n");
	print(arr, SIZE);

	//힙정렬
	for (int i = 0; i < SIZE; ++i) {
		heapify(arr, size);
		heap(arr, &size);
	}

	printf("[ 정렬 후 ]\n");
	print(arr, SIZE);
	return 0;
}


//heapify, 힙 상태 만들기 
void heapify(int* arr, int size) {
	for (int i = 1; i < size; ++i) {
		int child = i;
		do {
			//자식 노드가 부모 노드보다 크면 교환
			int root = (child - 1) / 2;
			if (arr[root] < arr[child]) {
				int temp = arr[root];
				arr[root] = arr[child];
				arr[child] = temp;
			}
			child = root;
		} while (child != 0);	//최상단 노드까지 점검
	}
	printf(" 히피파이 >> ");
	print(arr, SIZE);
}

//최상단 노드와 최하단 노드 교체
void heap(int* arr, int* size) {
	int temp = arr[0];
	arr[0] = arr[*size - 1];
	arr[*size - 1] = temp;
	--(*size);
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