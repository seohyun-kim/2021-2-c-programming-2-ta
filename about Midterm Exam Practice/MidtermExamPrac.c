// 2021 -2 �߰���� �������� �ڵ�


//============== 1�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// =============================================
// ����ü�� �������� ����

enum is_correct { WRONGANSWER, ACCEPTED };

typedef struct {
	enum is_correct result;
	int score;
}Quiz;

// ==============================================

int main()
{
	Quiz midterm[5] = {
		{WRONGANSWER,10},
		{ACCEPTED,20},
		{ACCEPTED,10},
		{WRONGANSWER,15},
		{ACCEPTED,45} };

	int sum = 0; //���� �հ������ϴ� ����

	// =========================================
	// �������� �հ踦 ���ϴ� �ڵ� �ۼ�



	for (int i = 0; i < 5; i++)
	{
		if (midterm[i].result == ACCEPTED)
		{
			sum += midterm[i].score;
		}
	}
	// ========================================	

	printf("%d", sum);
}
#endif





// =========== 2�� ===============
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10], b[10];


	//==========================================
	// �� �κп� �ҽ��ڵ带 �ۼ��� �ּ���.
	// ������ ���� ����, ���� �����ϴ� ���α׷� ���

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	char* p = (char*)&a;
	char* pp = (char*)&b;

	
	for (int i = 0; i < sizeof(a); i++)
	{
		*(pp+i) = *(p + i);
	}

	//==========================================

	//�迭 b�� ����ϴ� �κ�
	for (int i = 0; i < 10; i++)
	{
		printf("b[%d] ---> %d\n", i, b[i]);
	}

	return;
}
#endif





// ================== 3�� ===================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int myStrlen(char* string);

int main() {
	char arr[100];
	scanf("%s", arr);

	printf("���ڿ��� ���� : %d\n", myStrlen(arr));

	return 0;
}

// ======================================
// myStrlen �Լ� ���Ǹ� ���⿡ �ۼ�

int myStrlen(char* string) {
	int cnt = 0;
	while (string[cnt] != NULL) {
		cnt++;
	}
	return cnt;
}
// =====================================
#endif


//============== 4�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Customer {
	char name[10];
	int visit;
};

void showInfo(int _index, struct Customer* _parr);

int main()
{
	struct Customer list[10];

	int index = 0;
	char name[10];

	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		strcpy(list[index].name, name);
		scanf("%d", &(list[index].visit));
		index++;
	}

	showInfo(index, list);
}


// ================================================
// showInfo �Լ��� ���Ǹ� ����
void showInfo(int _index, struct Customer* _parr) {
	for (int i = 0; i < _index; i++)
	{
		printf("%s ---> %d\n", (_parr + i)->name, (_parr + i)->visit);
	}
}

//=================================================
#endif



//============== 5�� =============
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char phone[15];
	scanf("%s", phone);


	// ================================================
	// �� �κп� �ڵ带 �ۼ��ϼ���.
	// �����͸� ����� '-'�� �������� �ٲٱ�

	char* p = phone;

	while (*p != NULL)
	{
		if (*p == '-')
		{
			*p = ' ';
		}
		p++;
	}

	//=================================================

	printf("phone: %s",phone);
}
#endif


//============== 6�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char text[50];
	scanf("%s", text);


	// ================================================
	// �� �κп� �ڵ带 �ۼ��ϼ���.
	

	char* p = text;
	int cnt = 0;


	while (*p != '!')
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			cnt++;
		}
		p++;

		if (*p == NULL)
		{
			printf("%d", cnt);
			return 0;
		}
	}

	printf("%d", cnt);
	return 0;
	
	//=================================================

}

#endif


//==============7�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SWAP(int* text, int a, int b);

int main()
{
	int text[8] = { 1,2,3,4,5,6,7,8 };

	
	for (int i = 0; i < 4; i++)

	{   // SWAP�Լ��� ������ ���ڸ� �־� ȣ���϶�
		//SWAP(, , );
		SWAP(text, i, 7 - i);
	}


	for (int i = 0; i < 8; i++)
	{
		printf("%d \n", text[i]);
	}
}

// =============================================
// SWAP�Լ��� �����϶�

void SWAP(int* text, int a, int b) {
	int temp = *(text + a);
	*(text + a) = *(text + b);
	*(text + b) = temp;
}

// =============================================
#endif


//============== 8�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Pick(char** p, int part);

char person1[10] = "kim";
char person2[10] = "lee";
char person3[10] = "park";

int main()
{
	char* p = NULL;
	int part;

	scanf("%d", &part);

	Pick(&p, part);
	printf("%s", p);
}

// =============================================
// PICK �Լ��� �����϶�

void Pick(char** p, int part) {
	switch (part % 3) {
	case 0:
		*p = person1;
		break;
	case 1:
		*p = person2;
		break;
	case 2:
		*p = person3;
		break;
	}
	
}
// =============================================
#endif



//============== 9�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int sub1(int _a, int _b)
{
	return _a - _b;
}
int sub2(int _a, int _b)
{
	return _b - _a;
}

int main()
{
	int result = 0;
	int a, b;

	scanf("%d %d", &a, &b);

	// =============================================
	// �� �κп� �ڵ带 �ۼ��Ͽ� �����ÿ�.

	int (*pf)(int, int) = NULL;

	if (a > b) 
	{
		pf = sub1;
	}
	else 
	{
		pf = sub2;
	}

	result = pf(a, b);

	// ==============================================
	printf("result: %d", result);

	return 0;
}

#endif




//============== 10�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void SWAP(char* p, int size);

int main()
{
	char text[50];
	scanf("%s", text);

	SWAP(text, strlen(text));

	printf("%s", text);
	return 0;
}

// =============================================
// SWAP�Լ� ����
void SWAP(char* p, int size)
{	
	int cur = 0;

	while (*(p + cur) != NULL)
	{
		
		if (*(p+cur) == 'a')
		{
			if (*(p + cur + 1) == 'n')
			{
				if (*(p + cur + 2) == 'd')
				{
					*(p+cur) = '&';
					for (int i = cur+1; i < size-1; i++)
					{
						*(p + i) = *(p + i + 2);
					}
					size -= 2;
				}
			}
		}
		cur++;

	}
}
// ===============================================

#endif


//============== 11�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef enum  {SAMSUNG, KAKAO, LG} COMPANY;

struct Stock {
	COMPANY company;
	int num;
	int price;
};

int main()
{
	struct Stock account[3] = {
		{SAMSUNG, 10, 90000},
		{KAKAO, 5, 100000},
		{LG, 3, 110000}
	};

	int cur_price[3]; 
	cur_price[SAMSUNG] = 69400;
	cur_price[KAKAO] = 121500;
	cur_price[LG] = 125000;

	int revenue = 0;

	// ====================================================
	// �� �κп� �ڵ带 �ۼ��ϼ���.

	for (int i = 0; i < 3; i++)
	{
		revenue += account[i].num * (cur_price[i] - account[i].price);
	}

	// ===================================================

	printf("%d", revenue);

}

#endif


//============== 12�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < stdlib.h >

int area(int _x1, int _x2, int _y1, int _y2);

int main()
{
	int N;
	int x1, x2, y1, y2;
	int sum = 0; //������ �հ�

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
		sum += area(x1, x2, y1, y2);
	}
	
	printf("%d", sum);

}

int area(int _x1, int _x2, int _y1, int _y2)
{
	return abs(_x2 - _x1)* abs(_y2 - _y1);
}

#endif


//============== 13�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	unsigned int a =0X12345678; //����
	int N = 0;

	scanf("%d", &N); // 1~4�� ����

	// ==========================================
	// �� �κп� �ڵ带 �ۼ��ϼ���.

	char* p = (char*)&a;
	
	for (int i = 0; i < N; i++)
	{
		*(p + i) = 0;
	}

	printf("%X", a);

	// ==========================================

}


#endif


//============== 14�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int score_list[10] = { 67, 49, 30, 15, 20, 59, 51, 12, 0, 78 };

void selectScore(int** k, int N);

int main()
{
	int N; //0~9
	scanf("%d", &N);
	int* p = NULL;

	selectScore(&p, N);

	printf("%d", *p);

}

// =========================================
// selectScore �Լ��� ����

void selectScore(int** k, int N)
{
	*k = score_list + N;

}
//===========================================

#endif



//============== 15�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Count(char** _names, char key);

int main()
{
	char* names[4] = {
		"karina",
		"winter",
		"giselle",
		"ningning"
	};
	char key;
	int cnt = 0;

	scanf("%c", &key);

	cnt = Count(names, key);

	printf("%d", cnt);

}

// =====================================
// �� �κп� Count�Լ��� �����ϼ���.

int Count(char** _names, char key)
{
	int cnt = 0;

	for (int i = 0; i < 4; i++)
	{
		char* p = _names[i];
		while (*p != NULL) {
			if (*p == key)
			{
				cnt++;
			}
			p++;
		}
	}
	return cnt;
}

// =======================================

#endif



//============== 16�� =============
#if 0

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	int funcNumber;    // �Լ� ��ȣ
	int num1, num2;
	

	printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ���: ");
	scanf("%d %d %d", &funcNumber, &num1, &num2);    // �Լ� ��ȣ�� ����� ���� �Է¹���

	// ====================================================
	// ���⿡ �Լ������� �迭�� �����ϰ� ȣ���ϴ� �ڵ带 �ۼ��ϼ���.

	int (*fp[4])(int, int) = { add, sub, mul, div };
	printf("%d\n", fp[funcNumber](num1, num2));    // �Լ� ������ �迭�� �ε����� �����Ͽ� �Լ� ȣ��

	// ===================================================


	return 0;
}

#endif

// =========== 17 �� ==================

#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct node
{
	int data;
	struct node* next;
};


int main() {
	
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	struct node x = { a, NULL };
	struct node y = { b, NULL };
	struct node z = { c, NULL };

	// ====================================
	// �� �κп� �ڵ带 �ۼ����ּ���.

	x.next = &y;
	y.next = &z;

	printf("%d", x.next->next->data);

	// ====================================
	
	return 0;
}

#endif


// =========== 18 �� ==================

#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

typedef struct node
{
	int data;
	struct node* next;
	struct node* pre;
} NODE;

void LinkNew(NODE* _x, NODE* _new);

int main() {

	int n1, n2;
	scanf("%d %d", &n1, &n2);

	NODE x =   { 10, NULL , NULL };

	NODE new1 = { n1, NULL , NULL };
	NODE new2 = { n2, NULL , NULL };


	LinkNew(&x, &new1);
	LinkNew(&new1, &new2);


	// =====���⿡ �ڵ带 �ۼ��ϼ���..=========
	// new2�� �̿��� x�� data��� �� ���

	printf("%d\n", new2.pre->pre->data);

	// ====================================

	return 0;
}

// ==============================================
// LinkNew �Լ��� �����ϼ���.

void LinkNew(NODE* _x, NODE* _new) {
	_x->next = _new;
	_new->pre = _x;
}
// ==============================================

#endif




// =========== 19�� ==================

#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int main() {
	int a = 0x12345678;
	int b = 0x0a0b0c0d;
	int c = 0xabcd1234;
	int d = 0x87654321;

	char* p[4] = { (char*)&a, (char*)&b, (char*)&c, (char*)&d };

	// ===========================================================
	// ���⿡ �ڵ带 �ۼ��ϼ���.

	for (int j = 0; j < 4; j++)
	{
		for (int k = j; k < 3 - j; k++)
		{
			if (*(p[k]) > *(p[k + 1])) //���� ���������� �� ũ��
			{
				char temp = *(p[k]);
				*(p[k]) = *(p[k+1]);
				*(p[k + 1]) = temp;
			}
		}

	}

	// ===========================================================

	printf("%x\n%x\n%x\n%x\n", a, b, c, d);

	return 0;
}


#endif


// =========== 20�� ==================

#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>



int main() {
	char arr[100], record[26] = { 0 }; 
	int cnt;

	scanf("%s", arr);

	// ==========================================================
	// �� �κп� �ڵ带 �ۼ��ϼ���. (��, �ݺ����� �ϳ��� �� ��)

	for (cnt = 0; cnt < strlen(arr); cnt++) {
		record[arr[cnt] - 'a']++;
	}

	// ==========================================================

	for (cnt = 0; cnt < 26; cnt++) {
		printf("%c : %d times\n", cnt + 'a', record[cnt]);
	}
}

#endif

