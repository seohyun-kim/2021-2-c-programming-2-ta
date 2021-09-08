// 2021-09-07
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student { //구조체 정의
	unsigned int sid; //4 byte
	char name[20]; //20
	float grade; //4
};
void showStudentInfo(struct student _s) { //구조체 함수
	printf("%d  : %s  --> %.2f\n", _s.sid, _s.name, _s.grade);
}

union info { // 공용체: 둘중 하나만 들어감(사이즈는 큰거)
	unsigned int sid;
	char name[13]; 
};//16byte (4단위)

union { 
	unsigned int sid;
	char name[13];
} x;

enum colors { RED, GREEN, BLUE}; // 0,1,2

int main()
{
	////////////// 구조체 배열 ////////////////
	struct student st_db[3] = { //구조체 초기화
		{1,"kim",3.8},
		{2,"lee",3.9},
		{3,"park",4.0}
	};
	
	printf("%d\n", sizeof(st_db)/sizeof(struct student));//구조체 배열의 갯수 (84/28)

	for (int i = 0; i < 3; i++) { //구조체 출력
		showStudentInfo(st_db[i]);
	}


	///////////// 공용체 ///////////////////
	union info a;
	a.sid = 12345;
	printf("%d\n", a.sid);

	strcpy(a.name, "park");
	printf("%s\n", a.name);
	printf("%d\n", sizeof(a));//16byte
	printf("%d\n", sizeof(a.name)); //13byte
	


	/// //////////공용체 배열 //////////////
	union info uArr[3] = {
		{111},{222},{333}
	}; //공용체배열 선언 시에는 한 종류로


	///////////// 열거형 ///////////////

	enum colors c;
	c = RED;
	printf("%d", c);
	return 0;
}