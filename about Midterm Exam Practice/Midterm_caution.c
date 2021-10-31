#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 구조체와 typedef (4가지 구분)
// 1
#if 0
struct person { 

	char name[10];
	unsigned int age;
};

int main() {

	struct person p1 = { "kim", 20 };

}
#endif


// 2
#if 0
struct person {

	char name[10];
	unsigned int age;
};
typedef struct person PS;

int main() {

	PS p1 = { "kim", 20 };
}
#endif


// 3
#if 0
typedef struct {

	char name[10];
	unsigned int age;
} PS;

int main() {

	PS p1 = { "kim", 20 };
}
#endif


// 4
#if 0
struct {

	char name[10];
	unsigned int age;
} p1;

int main() {
	strcpy(p1.name, "kim");
	p1.age = 20;

	printf("%s", p1.name);
}
#endif



//더블 포인터와 텍스트 영역
#if 0
char str1[10] = "aaaaa";
char str2[10] = "bcdef";
char str3[10] = "ccccc";

void set_pc(char** k) {
	*k = str2;
}

int main()
{
	char* pc = NULL;
	set_pc(&pc);


	printf("pc를 X로 찍으면: %X\n", pc);
	printf("str2를 X로 찍으면: %X\n", str2);

	printf("pc를 s로 찍으면: %s\n", pc);
	printf("str2를 s로 찍으면: %s\n", str2);

	printf("*pc를 c로 찍으면: %c\n", *pc);
	printf("str2[0]를 c로 찍으면: %c\n", str2[0]);

	return 0;
}
#endif



//변수와 입출력 형태
#if 0
int main()
{
	//10진수로 10이라는 값은, 16진수로 A임, 2진수로는 1010임


	// a,b,c, 변수는 모두 같은 값을 담고 있음. 단지 입력값을 어떻게 주느냐의 차이일 뿐
	// 어차피 모두 내부에서는 2진 형태인 0000 0000 | 0000 0000 | 0000 0000  | 0000 1010 이렇게 담겨있음

	int a = 10; //int 타입의 변수 a에 10진수로 10을 넣어라
	int b = 0xA; //int 타입의 변수 b에 16진수로 A을 넣어라
	int c = 0b1010; //int 타입의 변수 c에 2진수로 1010을 넣어라

	printf("a= %d\nb= %d\nc= %d\n\n", a, b, c); //셋다 %d(10진수)로 출력하면 10
	printf("a= %X\nb= %X\nc= %X\n\n", a, b, c); //셋다 %X(16진수)로 출력하면 A

	printf("a를 10진수로= %d\na를 16진수로= %X\n", a, a); //모두 a의 값을 넣어주는데 출력 형태만 다르게

	return 0;
}
#endif