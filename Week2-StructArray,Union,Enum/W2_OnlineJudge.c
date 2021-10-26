//=============== 1528 =================
//----------------------------------------------------
// main함수가 동작할 수 있도록 필요부분을 프로그래밍하세요.
// 예. 필요한 구조체 정의등.
// 완성 후에는 전체를 복사하여, 붙여넣기로 제출하면 됩니다.

//  채워넣을 부분

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person { //구조체 정의

	char name[10];
	unsigned int age;
};

//-------------------------------------------------
// 아래로는 어떠한 변경도 하지 마세요.
int main(void) {

	struct person p;
	unsigned int age;

	char name[10];
	scanf("%s", name);

	strcpy(p.name, name);
	scanf("%d", &age);

	p.age = age;

	printf("%s ---> %d\n", p.name, p.age);

	return 0;
}
#endif 

//=================== 1529 ======================
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
	//pArray[index].name = _p.name;
	pArray[index].age = _p.age;
	index++;

	return;
}
//0 1 2 3

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


#if 0
//======================= 1530 ==================
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

struct person pArray[10];//전역변수로 구조체 배열 선언

int index = 0;

void addToInfo(struct person _p) {

	strcpy(pArray[index].name, _p.name);
	pArray[index].age = _p.age;
	index++;

	return;
}

void showInfo_ascending_order(void) {

		char tmp_name[10];
		unsigned int tmp_age;

		for (int j = 0; j < index - 1; j++)
		{
			for (int k = 0; k < index - j - 1; k++)
			{
				if (strcmp(pArray[k].name, pArray[k + 1].name) > 0) //앞이 사전순으로 더 크면
				{
					strcpy(tmp_name, pArray[k].name);
					strcpy(pArray[k].name, pArray[k + 1].name);
					strcpy(pArray[k + 1].name, tmp_name);

				}
			}

		}

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
	// showInfo_ascening_order() 함수를 호출하여, 구조체 배열의 값들을 알파벳의 오름차순으로 출력한다.
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

	// 구조체 배열에 저장된 값들을 알파벳의 오름차순으로 출력하는 함수
	// 출력형식은 "name ---> age"
	showInfo_ascending_order();

	return 0;

}
#endif
