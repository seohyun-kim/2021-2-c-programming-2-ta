// ===== ����1��(1542) =======
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

	/* �����κ� 1: function pointer pf�� �����Ͻÿ� */
	void (*pf)(int) = NULL;

	int c;

	scanf("%d", &c);

	/* �����κ� 2: pf�� �Լ� funcA�� ����Ű���� �Ͻÿ� */
	pf = funcA;

	pf(c);
	return 0;
}
#endif



// ======= ���� 2�� (1543) =======
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

	/*------------------ �����Ұ�:: �Ʒ� �κ��� ����� �մ��� ���ÿ� ----------------------*/
	int i, c, d;
	scanf("%d", &c);
	scanf("%d", &d);

	for (i = 0; i < 4; i++) {
		printf("%d\n", pf[(c * d) % 4 + 3](c, d));
	}

	return 0;
}
#endif
