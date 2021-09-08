// 2021-09-07
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student { //����ü ����
	unsigned int sid; //4 byte
	char name[20]; //20
	float grade; //4
};
void showStudentInfo(struct student _s) { //����ü �Լ�
	printf("%d  : %s  --> %.2f\n", _s.sid, _s.name, _s.grade);
}

union info { // ����ü: ���� �ϳ��� ��(������� ū��)
	unsigned int sid;
	char name[13]; 
};//16byte (4����)

union { 
	unsigned int sid;
	char name[13];
} x;

enum colors { RED, GREEN, BLUE}; // 0,1,2

int main()
{
	////////////// ����ü �迭 ////////////////
	struct student st_db[3] = { //����ü �ʱ�ȭ
		{1,"kim",3.8},
		{2,"lee",3.9},
		{3,"park",4.0}
	};
	
	printf("%d\n", sizeof(st_db)/sizeof(struct student));//����ü �迭�� ���� (84/28)

	for (int i = 0; i < 3; i++) { //����ü ���
		showStudentInfo(st_db[i]);
	}


	///////////// ����ü ///////////////////
	union info a;
	a.sid = 12345;
	printf("%d\n", a.sid);

	strcpy(a.name, "park");
	printf("%s\n", a.name);
	printf("%d\n", sizeof(a));//16byte
	printf("%d\n", sizeof(a.name)); //13byte
	


	/// //////////����ü �迭 //////////////
	union info uArr[3] = {
		{111},{222},{333}
	}; //����ü�迭 ���� �ÿ��� �� ������


	///////////// ������ ///////////////

	enum colors c;
	c = RED;
	printf("%d", c);
	return 0;
}