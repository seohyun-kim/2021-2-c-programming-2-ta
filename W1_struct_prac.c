#include <stdio.h>
#include <string.h>
#include <math.h>

// ����ü ����
struct book { //�������� 1��
	int id;
	char title[100];
	char author[20];
	//char subject[20];
};

struct account { //�������� 2��
	int number;
	char name[20];
	int balance;
};

struct email { //�������� 3��
	char title[100]; // ����
	char sender[30]; // �߽���
	char receiver[30]; // ������
	char content[500]; //����
	char date[20]; //��¥
	int pri; //�켱����
};

struct pos { // 3���� ������ǥ�� ����ü
	int x;
	int y;
	int z;
};


int main()
{
	// ����ü ������ ���� ����
	struct book a = { 1,"�ٶ��� �Բ� �������", "������ ��ÿ" }; 
	printf("{ %d, %s, %s }\n\n", a.id, a.title, a.author);
	
	
	struct account b = { 1,"ȫ�浿", 100000 };
	printf("{ %d, %s, %d }\n\n", b.number, b.name, b.balance);

	struct account c;
	c.number = 1;
	//c.name = "ȫ�浿"; //�ȵ�
	strcpy(c.name, "ȫ�浿");
	c.balance = 100000;
	printf("{ %d, %s, %d }\n\n", c.number, c.name, c.balance);



	struct email inu = { "�Ⱥθ���", "hsh@hankuk.ac.kr", "chulsoo@hankuk.ac.kr",
		"�ȳ��Ͻʴϱ�? ���� ����������?", "2010/09/01", 1 };
	printf("����: %s\n�߽���: %s\n������: %s\n����: %s\n��¥: %s\n�켱����: %d\n",
		inu.title, inu.sender, inu.receiver, inu.content, inu.date, inu.pri);


	// 1���� ���� �� ����(5_C_����ü��������_��)
	/* 3���� ���� ��ǥ 2���� ������ �� �ִ� ����ü�� �����
	������ ��ǥ�� �־ �� �������� �Ÿ����ϱ�(��Ŭ���� ������)*/
	struct pos p1 = { 1,2,3 };
	struct pos p2 = { 4,5,6 };

	float dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2));
	printf("distance : %f\n", dist);


	return 0;
}