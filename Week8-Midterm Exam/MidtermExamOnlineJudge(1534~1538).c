// ========= 1번 (1534) =============

#if 0

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

void mystery(char* _str, char _a, char _b){
	for (int i = 0; i < strlen(_str); i++){
		if (*(_str + i) == _a) *(_str + i) = _b;
	}
}

//--------  이 아래로는 절대 수정하지 마시오 -(문법오류제외)------------------
int main(void) {

	char str[100];
	scanf("%s", str);

	mystery(str, 'K', 'y');

	printf("%s", str);
	return 0;
}

#endif



// =========== 2번 함수포인터배열사용(1535)===================
#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct student {
	int id;
	int age;
	float height;
};

int MaxAge(struct student* _result, struct student* _cur) {
	return _result->age < (_cur)->age;
}
int MinAge(struct student* _result, struct student* _cur) {
	return _result->age > (_cur)->age;
}
int MaxHeight(struct student* _result, struct student* _cur) {
	return _result->height < (_cur)->height;
}
int MinHeight(struct student* _result, struct student* _cur) {
	return _result->height > (_cur)->height;
}

int mystery(struct student* _A, char _cmd) {

	int (*fp[4])() = { MaxAge, MinAge, MaxHeight, MinHeight };
	char list[4] = { 'A', 'a', 'H', 'h' };
	int i = 0;
	while (list[i] != _cmd) i++; //cmd입력에 따라 함수 인덱스 부여

	int j = 0;
	while ((_A + j)->id < 0) j++; //초기 음수 id 제거
	struct student* result = _A + j;
	while (j < 10) {
		if ((_A + j)->id < 0) {
			j++;
			continue;
		}
		if (fp[i](result, _A + j)) {
			result = _A + j;
		}j++;
	}
	return result->id;
}

//--------  이 아래로는 절대 수정하지 마시오 --(문법오류제외)-----------------
int main(void) {

	struct student A[10];

	int id;
	int age;
	float height;
	char cmd;

	int idx = 0;
	while (1) {

		scanf("%d %d %f", &id, &age, &height);
		A[idx].id = id;
		A[idx].age = age;
		A[idx].height = height;
		idx++;
		if (idx == 10) {
			break;
		}
	}
	scanf(" \n %c", &cmd);


	printf("%d", mystery(A, cmd));
	return 0;
}
#endif


// ========== 2번 기본 형태 (1535)=============
#if 0

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct student {
	int id;
	int age;
	float height;
};

int mystery(struct student* _A, char _cmd) {
	int j = 0;
	while ((_A +j)->id < 0) j++;//초기 음수 id 제거
	struct student* result = _A + j;
	j++;

	switch (_cmd) {
	case 'A':
		while (j < 10) {
			if ((_A + j)->id < 0) {
				j++;
				continue;
			}
			if (result->age < (_A + j)->age) {
				result = _A + j;
			}
			j++;
		}
		break;
	case 'a':
		while (j < 10) {
			if ((_A + j)->id < 0) {
				j++;
				continue;
			}
			if (result->age > (_A + j)->age) {
				result = _A + j;
			}
			j++;
		}
		break;
	case 'H':
		while (j < 10) {
			if ((_A + j)->id < 0) {
				j++;
				continue;
			}
			if (result->height < (_A + j)->height) {
				result = _A + j;
			}
			j++;
		}
		break;
	case 'h':
		while (j < 10) {
			if ((_A + j)->id < 0) {
				j++;
				continue;
			}
			if (result->height > (_A + j)->height) {
				result = _A + j;
			}
			j++;
		}
		break;
	}
	return result->id;
}

//--------  이 아래로는 절대 수정하지 마시오 --(문법오류제외)-----------------
int main(void) {

	struct student A[10];

	int id;
	int age;
	float height;
	char cmd;

	int idx = 0;
	while (1) {

		scanf("%d %d %f", &id, &age, &height);
		A[idx].id = id;
		A[idx].age = age;
		A[idx].height = height;
		idx++;
		if (idx == 10) {
			break;
		}
	}
	scanf(" \n %c", &cmd);


	printf("%d", mystery(A, cmd));
	return 0;
}

#endif


// ========== 3번 (1536) ==============
#if 0
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int mystery(char* _str) {

	int record[52] = { 0, };
	for (int i = 0; i < strlen(_str); i++) {
		if (_str[i] >= 'A' && _str[i] <= 'Z') record[_str[i] - 'A']++;
		else record[_str[i] - 'a' + 26]++;
	}

	int sum = 0, key = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 52; j++) {
			if (record[key] < record[j]) key = j;
		}
		if (key < 26) sum += key + 'A';
		else sum += ((key - 26) + 'a');
		record[key] = -1;
	}
	return sum;
}

//--------  이 아래로는 절대 수정하지 마시오 -(문법오류 제외)------------------
int main(void) {

	char str[101];
	scanf("%s", str);

	printf("%d", mystery(str));
	return 0;
}
#endif



// ======== 4번 ===========
#if 0
#define _CRT_SECURE_NO_WARNINGS 
#define SWAP(x,y) { int t; t=x; x=y; y=t;}

#include <stdio.h>

void mystery(int* _a, int* _b) {
	SWAP(*_a, *_b);
}

//--------  이 아래로는 절대 수정하지 마시오 --(문법오류 제외)-----------------
int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);

	mystery(&a, &b);

	printf("%d %d", a, b);

	return 0;
}
#endif


// ======== 5번 포인터 배열 =============

#if 0
#define _CRT_SECURE_NO_WARNINGS 
#define SWAP(x,y) { int t; t=x; x=y; y=t;}
#include <stdio.h>

void mystery(int* a, int* b, int* c, int* d, int* e) {
	int * p[5] = { a,b,c,d,e };
	for (int j = 0; j < 4; j++){
		for (int k = 0; k < 4 - j; k++){
			if (*(p[k])> *(p[k + 1])){
				SWAP(*p[k], *p[k + 1]);
			}
		}
	}
}

//--------  이 아래로는 절대 수정하지 마시오 (문법오류 제외) -------------------
int main(void) {

	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	mystery(&a, &b, &c, &d, &e);

	printf("%d %d %d %d %d", a, b, c, d, e);

	return 0;
}
#endif



