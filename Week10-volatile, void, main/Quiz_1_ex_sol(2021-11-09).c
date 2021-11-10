// ===== 퀴즈1번(1542) =======
#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void funcA(int c) {
	int i;
	for (i = 0; i < c; i++) {
		printf("hello\n");
	}
}

int main(void) {

	/* 수정부분 1: function pointer pf를 정의하시오 */
	void (*pf)(int) = NULL;

	int c;

	scanf("%d", &c);

	/* 수정부분 2: pf가 함수 funcA를 가리키도록 하시오 */
	pf = funcA;

	pf(c);
	return 0;
}
#endif



// ======= 퀴즈 2번 (1543) =======
#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int funcA(int c, int d) {
	return c * d;
}

int funcB(int c, int d) {
	int (*p)(int, int) = funcA;
	return p(c, d);
}

int funcC(int a, int b) {
	int (*p)(int, int) = funcB;
	return p(a, b);
}

int funcD(int a, int b) {
	int (*p)(int, int) = funcC;
	return p(a, b);
}

int main(void) {


	int (*(pf[7]))(int, int) = { funcA, funcB, funcC, funcA, funcB, funcC, funcD };

	/*------------------ 수정불가:: 아래 부분은 절대로 손대지 마시오 ----------------------*/
	int i, c, d;
	scanf("%d", &c);
	scanf("%d", &d);

	for (i = 0; i < 4; i++) {
		printf("%d\n", pf[(c * d) % 4 + 3](c, d));
	}

	return 0;
}
#endif
