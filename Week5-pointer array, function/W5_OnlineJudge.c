

// ========== 1531 5���� ���� 1 ==========

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	char* pa=NULL;

	//�����ؼ� ����ϴ� ���

	int result = 0;
	char* pResult = NULL;


	pa = &a;
	scanf("%d", &a);

	pResult = &result;


	for (int i = 0; i <4; i++)
	{
		*(pResult + i) = *(pa + (3-i));
	}

	printf("%d", result);


	return;
}
#endif




// ========== 1532 5���� ���� 2 ==========

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 3

int main()
{
	int arr[MAX];
	char* parr = NULL;
	int cnt = 0;

	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}

	parr = arr;

	//printf("%08X\n", &arr[0]);
	//printf("%08X\n",*parr );
	//printf("%d\n", sizeof(int));
	
	for (int j = 0; j < sizeof(int)*MAX; j++)
	{
		//printf("*(parr + %d) = %c\n", j,*(parr + j));

		if ((*(parr + j) >= 'A' && *(parr + j) <= 'Z') || (*(parr + j) >= 'a' && *(parr + j) <= 'z'))
		{
			cnt++;
		}
	}
	
	printf("%d", cnt);

	return;
}
#endif




// ========== 1533 5���� ���� 3 ==========

#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 3

int main()
{
	int arr[MAX];
	char* parr = NULL;
	int cnt = 0;

	parr = arr;

	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < sizeof(int) * MAX; j++)
	{
		if (*(parr + j) == 'b')
		{
			if (*(parr + j+1) == 'y')
			{
				if (*(parr + j+2) == 'e')
				{
					cnt++;
				}
			}
		}
	}

	printf("%d", cnt);

	return;
}
#endif
