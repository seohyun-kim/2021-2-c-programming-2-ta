//=============== 1528 =================
//----------------------------------------------------
// main�Լ��� ������ �� �ֵ��� �ʿ�κ��� ���α׷����ϼ���.
// ��. �ʿ��� ����ü ���ǵ�.
// �ϼ� �Ŀ��� ��ü�� �����Ͽ�, �ٿ��ֱ�� �����ϸ� �˴ϴ�.

//  ä������ �κ�

#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person { //����ü ����

	char name[10];
	unsigned int age;
};

//-------------------------------------------------
// �Ʒ��δ� ��� ���浵 ���� ������.
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
// main�Լ��� ������ �� �ֵ��� �ʿ�κ��� ���α׷����ϼ���.
// ��. �ʿ��� ����ü ����, �������� ��.
// �ϼ� �Ŀ��� ��ü�� �����Ͽ�, �ٿ��ֱ�� �����ϸ� �˴ϴ�.

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//  ä������ �κ�
struct person { //����ü ����

	char name[10];
	unsigned int age;
};

struct person pArray[10];//���������� ����ü �迭 ����

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
// �Ʒ��δ� ��� ���浵 ���� ������.
int main(void) {

	// �ִ� ���� 9�� �̸��� ���̸� n�� (�ִ� n=10) �Է¹޾� 
	// ����ü�� ���� ��, ����ü �迭�� �����ϴ� �Լ� addToInfo()�� ȣ���Ѵ�.
	// �̸��� "end"�� �ԷµǸ�, 
	// showInfo() �Լ��� ȣ���Ͽ�, ����ü �迭�� ������ �Է¼����� ����Ѵ�.
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

	// ����ü �迭�� ����� ������ �Է¼����� ����ϴ� �Լ�
	// ��������� "name ---> age"
	showInfo();

	return 0;

}
#endif


#if 0
//======================= 1530 ==================
//----------------------------------------------------
// main�Լ��� ������ �� �ֵ��� �ʿ�κ��� ���α׷����ϼ���.
// ��. �ʿ��� ����ü ����, �������� ��.
// �ϼ� �Ŀ��� ��ü�� �����Ͽ�, �ٿ��ֱ�� �����ϸ� �˴ϴ�.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//  ä������ �κ�
struct person { //����ü ����

	char name[10];
	unsigned int age;
};

struct person pArray[10];//���������� ����ü �迭 ����

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
			for (int k = j; k < index - j - 1; k++)
			{
				if (strcmp(pArray[k].name, pArray[k + 1].name) > 0) //���� ���������� �� ũ��
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
// �Ʒ��δ� ��� ���浵 ���� ������.
int main(void) {

	// �ִ� ���� 9�� �̸��� ���̸� n�� (�ִ� n=10) �Է¹޾� 
	// ����ü�� ���� ��, ����ü �迭�� �����ϴ� �Լ� addToInfo()�� ȣ���Ѵ�.
	// �̸��� "end"�� �ԷµǸ�, 
	// showInfo_ascening_order() �Լ��� ȣ���Ͽ�, ����ü �迭�� ������ ���ĺ��� ������������ ����Ѵ�.
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

	// ����ü �迭�� ����� ������ ���ĺ��� ������������ ����ϴ� �Լ�
	// ��������� "name ---> age"
	showInfo_ascending_order();

	return 0;

}
#endif
