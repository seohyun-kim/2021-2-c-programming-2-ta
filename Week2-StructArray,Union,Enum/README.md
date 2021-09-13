# [2주차] 구조체 배열, 공용체, 열거형
🔑 key word : `struct array` `union` `enum`  

[2주차 온라인 저지 문제 풀이 zoom 녹화본](https://www.youtube.com/watch?v=zLTK13hvgk0&list=PLb0pgb0RlXErPhqHHaL38hIr7HWcZDRhO&index=2)  


## 구조체 배열   
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student { //구조체 정의
	unsigned int sid; //4 byte
	char name[20]; //20
	float grade; //4
};
void showStudentInfo(struct student _s) { //구조체 출력함수
	printf("%d  : %s  --> %.2f\n", _s.sid, _s.name, _s.grade);
}

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
    return 0;
}
```  

## 구조체 사이즈는 멤버들 크기 합  
![image](https://user-images.githubusercontent.com/61939286/132482778-32e7a7fd-24b2-4f6a-9480-59adf127ce05.png)


## 공용체는 하나만 들어가게 됨  
![image](https://user-images.githubusercontent.com/61939286/132482865-4a2b0569-22c4-4df6-bd79-b072d88c0105.png)

## 공용체 사이즈는 큰 멤버 따라가되 4바이트 단위
![image](https://user-images.githubusercontent.com/61939286/132482934-2b03c0a9-a39b-484c-a86b-fe6c82663622.png)  
멤버로 찍어보면 13 바이트임  

## 공용체를 초기화 할 때는 형태 같도록  
![image](https://user-images.githubusercontent.com/61939286/132483051-f70763f1-d53d-4a3b-b284-7c48655f60ba.png)

## 공용체 변수 정의 (일회용임, 형태 정의 없애고 바로 변수명)  
![image](https://user-images.githubusercontent.com/61939286/132483361-1cf77e00-e44d-459c-b8b6-26b95286cc95.png)  

## 구조체 변수 정의  
![image](https://user-images.githubusercontent.com/61939286/132483429-4efd5543-a775-4043-8d21-60399ebf4d59.png)


## Enum(열거형)은 내부에서 숫자로 대입됨  
![image](https://user-images.githubusercontent.com/61939286/132483488-0bf4e1fd-859e-4c58-b24c-45a9080901d3.png)

## Enum 시작숫자 지정 가능  
![image](https://user-images.githubusercontent.com/61939286/132483562-90fadf46-04e9-46c0-8a73-8a7e496f3edc.png)  

## Enum 내부숫자 비교 가능  
![image](https://user-images.githubusercontent.com/61939286/132483630-2b4a54df-2aba-450c-a85d-7b2b5da1b735.png)

