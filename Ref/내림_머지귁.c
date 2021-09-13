#include <stdio.h>
#define SIZE 6
#define SWAP(x,y,tmp) ((tmp)=(x), (x)=(y) , (y)=(tmp) )


// �迭�� �� ���ҵ��� ����ϴ� �Լ�
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
	int tmp[6];//�ӽ� �迭
	while (i <= q && j <= r) {
		if (data[i] > data[j])
			tmp[k++] = data[i++];
		else
			tmp[k++] = data[j++];
	}//������ ���������� ����. �� �� �ٸ� ���ʿ��� ���� ������ �̹� ���ĵ����Ƿ� �״�� �־��ָ� ��.
	while (i <= q)
		tmp[k++] = data[i++];
	while (j <= r)
		tmp[k++] = data[j++];
	for (int i = p; i <= r; i++) {
		data[i] = tmp[i];
	}//�պ��� ���� ���� �迭�� �־���
}

void mergeSort(int data[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(data, p, q);//���ݺ� ����
		mergeSort(data, q + 1, r);//�Ĺݺ� ����
		merge(data, p, q, r);//�պ�
		print(data, SIZE);
	}
}


// ���� ����Ʈ -------------------------------------------------

int partition(int list[], int left, int right)
{
	int tmp;
	int low = left + 1;
	int high = right;
	int pivot = list[left]; //ù���� �ε����� �Ǻ����� ��


	while (low <= high) //�������� �ʾ��� ��
	{
		for (; (low <= right) && (list[low] > pivot); low++);
		for (; (high >= left) && (list[high] < pivot); high--);
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

	printf(" ���� �� : ");
	print(data, SIZE);

	// mergeSort(data, 0, SIZE-1);
	//quick_sort(data, 0, SIZE - 1);

	printf(" ���� �� : ");
	print(data, SIZE);
	return 0;
}