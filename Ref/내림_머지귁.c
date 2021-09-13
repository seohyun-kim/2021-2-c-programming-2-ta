#include <stdio.h>
#define SIZE 6
#define SWAP(x,y,tmp) ((tmp)=(x), (x)=(y) , (y)=(tmp) )


// 배열의 각 원소들을 출력하는 함수
void print(int list[], int n)
{
	for (int k = 0; k < n; k++)
	{
		printf("%d | ", list[k]);
	}
	printf("\n");
}

void merge(int data[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	int tmp[6];//임시 배열
	while (i <= q && j <= r) {
		if (data[i] > data[j])
			tmp[k++] = data[i++];
		else
			tmp[k++] = data[j++];
	}//한쪽이 끝날때까지 정렬. 그 후 다른 한쪽에서 남은 값들은 이미 정렬됐으므로 그대로 넣어주면 됨.
	while (i <= q)
		tmp[k++] = data[i++];
	while (j <= r)
		tmp[k++] = data[j++];
	for (int i = p; i <= r; i++) {
		data[i] = tmp[i];
	}//합병한 값을 원래 배열에 넣어줌
}

void mergeSort(int data[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(data, p, q);//전반부 정렬
		mergeSort(data, q + 1, r);//후반부 정렬
		merge(data, p, q, r);//합병
		print(data, SIZE);
	}
}


// 내림 퀵소트 -------------------------------------------------

int partition(int list[], int left, int right)
{
	int tmp;
	int low = left + 1;
	int high = right;
	int pivot = list[left]; //첫번쨰 인덱스를 피봇으로 함


	while (low <= high) //역전되지 않았을 때
	{
		for (; (low <= right) && (list[low] > pivot); low++);
		for (; (high >= left) && (list[high] < pivot); high--);
		if (low < high)
		{
			SWAP(list[low], list[high], tmp);
		}
	}
	printf("[pivot : %d] 와 [ %d ] 교환 \n\n", pivot, list[high]);
	SWAP(list[left], list[high], tmp);
	print(list, SIZE);

	return high;
}
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


//-------------------------------------------------------



int main() {
	int data[SIZE] = { 2,4,7,1,6,9 };

	printf(" 정렬 전 : ");
	print(data, SIZE);

	// mergeSort(data, 0, SIZE-1);
	//quick_sort(data, 0, SIZE - 1);

	printf(" 정렬 후 : ");
	print(data, SIZE);
	return 0;
}