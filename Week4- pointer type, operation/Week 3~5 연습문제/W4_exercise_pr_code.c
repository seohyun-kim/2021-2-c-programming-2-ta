#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== 1번 ==================

typedef struct _Point2D {
	int x;
	int y;
} Point2D;



// ============== 2번 ==================

#if 0 
typedef enum { MON, TUE, WED, THU, FRI, SAT, SUN = 10 } DAYS;

int main()
{
	DAYS today = FRI;

	printf("today = %d\n", today);

	printf("MON = %d\n", MON);
	printf("SUN = %d\n", SUN);
}
#endif

// ============== 3번 ==================



#if 0 
int main()
{
	unsigned char* p, c[10] = { 1,2,3,4,5,6,7,8,9,10 };
	p = c; //포인터 변수 p에 배열 c의 시작주소를 넣는다.

	printf("*p = %d\n", *p); //1
	printf("c[0] = %d\n", c[0]); //1

	printf("c[4] = %d\n", c[4]);//5
	*(p + 4) = 10;
	printf("c[4] = %d\n", c[4]);//10
}
#endif


// ===============4번 =================
// 내 컴퓨터 메모리 저장 방식 파악

#if 0


int main()
{
	char* pa = NULL;

	int a = 0X12345678;
	pa = &a;

	printf("*pa = %2X\n", *pa);
	printf("*(pa+1) = %2X\n", *(pa + 1));
	printf("*(pa+2) = %2X\n", *(pa + 2));
	printf("*(pa+3) = %2X\n", *(pa + 3));
}

#endif