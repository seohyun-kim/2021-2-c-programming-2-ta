#define _CRT_SECURE_NO_WARNINGS 



#if 1
// 작성해야 할 부분: 
//-----------------------------------------
// 적절한 헤더파일들을 include하시오.
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

	// 작성해야 할 부분: 
	//-----------------------------------------
	// 구조체 포인터 변수 q를 선언.
	struct A* q = NULL;
	//------------------------------------------

	scanf("%d\n", &i);
	scanf("%c", &k);

	// 작성해야 할 부분: 
	//-----------------------------------------
	// 구조체 포인터 변수 q를 이용하여 구조체 1개를 저장할 공간을 할당받고,
	// 입력받은 i는 구조체 멤버 a에, k는 멤버 c에 저장하는 코드를 작성
	
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
			//printf("테스트 : %d\n", *(arr[idx] + j));
 		}
	}

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", *(arr[a] + b));

	return 0;
}

#endif