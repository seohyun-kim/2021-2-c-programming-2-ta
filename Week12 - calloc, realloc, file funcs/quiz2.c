#define _CRT_SECURE_NO_WARNINGS 



#if 1
// �ۼ��ؾ� �� �κ�: 
//-----------------------------------------
// ������ ������ϵ��� include�Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>
//------------------------------------------

struct A {
	int a;
	char c;
};

int main(void) {

	int i;
	char k;

	// �ۼ��ؾ� �� �κ�: 
	//-----------------------------------------
	// ����ü ������ ���� q�� ����.
	struct A* q = NULL;
	//------------------------------------------

	scanf("%d\n", &i);
	scanf("%c", &k);

	// �ۼ��ؾ� �� �κ�: 
	//-----------------------------------------
	// ����ü ������ ���� q�� �̿��Ͽ� ����ü 1���� ������ ������ �Ҵ�ް�,
	// �Է¹��� i�� ����ü ��� a��, k�� ��� c�� �����ϴ� �ڵ带 �ۼ�
	
	q = (struct A*)malloc(sizeof(struct A));
	q->a = i;
	q->c = k;
	//------------------------------------------


	printf("%d", (q->a) + (q->c));

	//free(q);
	return 0;
}

#endif



#if 0
#include <stdio.h>
#include <stdlib.h>

int main() {

	int* arr[4];
	int idx, cnt;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &idx, &cnt);
		arr[idx] = (int*)malloc(sizeof(int) * cnt);
		for (int j = 0; j < cnt; j++)
		{
			scanf("%d", (arr[idx] + j));
			//printf("�׽�Ʈ : %d\n", *(arr[idx] + j));
 		}
	}

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", *(arr[a] + b));

	return 0;
}

#endif