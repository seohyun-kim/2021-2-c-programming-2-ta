#include <stdio.h>

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
	
	return 0;
}