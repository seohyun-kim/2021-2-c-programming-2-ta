#include <stdio.h>
#include <string.h>
#include <math.h>

// 구조체 정의
struct book { //연습문제 1번
	int id;
	char title[100];
	char author[20];
	//char subject[20];
};

struct account { //연습문제 2번
	int number;
	char name[20];
	int balance;
};

struct email { //연습문제 3번
	char title[100]; // 제목
	char sender[30]; // 발신자
	char receiver[30]; // 수신자
	char content[500]; //내용
	char date[20]; //날짜
	int pri; //우선순위
};

struct pos { // 3차원 공간좌표계 구조체
	int x;
	int y;
	int z;
};


int main()
{
	// 구조체 변수에 값을 대입
	struct book a = { 1,"바람과 함께 사라지다", "마가렛 미첼" }; 
	printf("{ %d, %s, %s }\n\n", a.id, a.title, a.author);
	
	
	struct account b = { 1,"홍길동", 100000 };
	printf("{ %d, %s, %d }\n\n", b.number, b.name, b.balance);

	struct account c;
	c.number = 1;
	//c.name = "홍길동"; //안됨
	strcpy(c.name, "홍길동");
	c.balance = 100000;
	printf("{ %d, %s, %d }\n\n", c.number, c.name, c.balance);



	struct email inu = { "안부메일", "hsh@hankuk.ac.kr", "chulsoo@hankuk.ac.kr",
		"안녕하십니까? 별일 없으신지요?", "2010/09/01", 1 };
	printf("제목: %s\n발신자: %s\n수신자: %s\n내용: %s\n날짜: %s\n우선순위: %d\n",
		inu.title, inu.sender, inu.receiver, inu.content, inu.date, inu.pri);


	// 1주차 수업 중 퀴즈(5_C_구조체변수대입_비교)
	/* 3차원 상의 좌표 2개를 저장할 수 있는 구조체를 만들고
	두점의 좌표를 넣어서 두 점사이의 거리구하기(유클리드 기하학)*/
	struct pos p1 = { 1,2,3 };
	struct pos p2 = { 4,5,6 };

	float dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2));
	printf("distance : %f\n", dist);


	return 0;
}