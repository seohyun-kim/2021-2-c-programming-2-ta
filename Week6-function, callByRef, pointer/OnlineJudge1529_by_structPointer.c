
//==========  1529 구조체 포인터로 푸는 방법  =========
//----------------------------------------------------
// main함수가 동작할 수 있도록 필요부분을 프로그래밍하세요.
// 예. 필요한 구조체 정의, 전역변수 등.
// 완성 후에는 전체를 복사하여, 붙여넣기로 제출하면 됩니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//  채워넣을 부분
struct person { //구조체 정의
	char name[10];
	unsigned int age;
};
 
void addToInfo(struct person* _parr, struct person _p) {
	*_parr = _p;
	return;
}

void showInfo(int _index, struct person* _parr) {
	for (int i = 0; i < _index; i++)
	{
		printf("%s ---> %d\n", (_parr + i)->name, (_parr + i)->age);
	}
}

int main(void) {

	// 최대 길이 9인 이름과 나이를 n개 (최대 n=10) 입력받아 
	// 구조체에 넣은 후, 구조체 배열에 저장하는 함수 addToInfo()를 호출한다.
	// 이름에 "end"가 입력되면, 
	// showInfo() 함수를 호출하여, 구조체 배열의 값들을 입력순으로 출력한다.
	struct person p;
	char name[10];
	unsigned int age;

	struct person parr[10];
	int index = 0;

	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		scanf("%d", &age);

		strcpy(p.name, name);
		p.age = age;

		addToInfo(&(parr[index]), p);
		index ++;
	}

	// 구조체 배열에 저장된 값들을 입력순으로 출력하는 함수
	// 출력형식은 "name ---> age"
	showInfo(index, parr);
	return 0;
}



// =========== 원래 1529 ======================
//----------------------------------------------------
// main함수가 동작할 수 있도록 필요부분을 프로그래밍하세요.
// 예. 필요한 구조체 정의, 전역변수 등.
// 완성 후에는 전체를 복사하여, 붙여넣기로 제출하면 됩니다.

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//  채워넣을 부분
struct person { //구조체 정의

	char name[10];
	unsigned int age;
};

struct person pArray[10];//전역변수로 구조체 배열 선언

int index = 0;

void addToInfo(struct person _p) {

	strcpy(pArray[index].name, _p.name);
	pArray[index].age = _p.age;
	index++;

	return;
}


void showInfo(void) {
	for (int i = 0; i < index; i++)
	{
		printf("%s ---> %d\n", pArray[i].name, pArray[i].age);
	}
}

//-------------------------------------------------
// 아래로는 어떠한 변경도 하지 마세요.
int main(void) {

	// 최대 길이 9인 이름과 나이를 n개 (최대 n=10) 입력받아 
	// 구조체에 넣은 후, 구조체 배열에 저장하는 함수 addToInfo()를 호출한다.
	// 이름에 "end"가 입력되면, 
	// showInfo() 함수를 호출하여, 구조체 배열의 값들을 입력순으로 출력한다.
	struct person p;
	char name[10];
	unsigned int age;


	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		scanf("%d", &age);
		strcpy(p.name, name);
		p.age = age;
		addToInfo(p);
	}

	// 구조체 배열에 저장된 값들을 입력순으로 출력하는 함수
	// 출력형식은 "name ---> age"
	showInfo();

	return 0;

}
#endif

