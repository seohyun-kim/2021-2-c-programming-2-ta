#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ����ü�� typedef (4���� ����)
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



//���� �����Ϳ� �ؽ�Ʈ ����
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


	printf("pc�� X�� ������: %X\n", pc);
	printf("str2�� X�� ������: %X\n", str2);

	printf("pc�� s�� ������: %s\n", pc);
	printf("str2�� s�� ������: %s\n", str2);

	printf("*pc�� c�� ������: %c\n", *pc);
	printf("str2[0]�� c�� ������: %c\n", str2[0]);

	return 0;
}
#endif



//������ ����� ����
#if 0
int main()
{
	//10������ 10�̶�� ����, 16������ A��, 2�����δ� 1010��


	// a,b,c, ������ ��� ���� ���� ��� ����. ���� �Է°��� ��� �ִ����� ������ ��
	// ������ ��� ���ο����� 2�� ������ 0000 0000 | 0000 0000 | 0000 0000  | 0000 1010 �̷��� �������

	int a = 10; //int Ÿ���� ���� a�� 10������ 10�� �־��
	int b = 0xA; //int Ÿ���� ���� b�� 16������ A�� �־��
	int c = 0b1010; //int Ÿ���� ���� c�� 2������ 1010�� �־��

	printf("a= %d\nb= %d\nc= %d\n\n", a, b, c); //�´� %d(10����)�� ����ϸ� 10
	printf("a= %X\nb= %X\nc= %X\n\n", a, b, c); //�´� %X(16����)�� ����ϸ� A

	printf("a�� 10������= %d\na�� 16������= %X\n", a, a); //��� a�� ���� �־��ִµ� ��� ���¸� �ٸ���

	return 0;
}
#endif