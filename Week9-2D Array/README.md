# [9주차] 함수 포인터 배열, 2차원 배열과 더블포인터, const 


### 🔑 key word:  `function pointer array` , `2D Array` , `Double Pointer` , `const`
<br>  

## 함수포인터 배열 예제
![image](https://user-images.githubusercontent.com/61939286/139876299-e55a5e4d-add9-4822-986c-7b2f9e17f577.png)

<br>  

## 함수포인터를 인자로 하는 함수
![image](https://user-images.githubusercontent.com/61939286/139885984-ac25d151-ece3-4337-9cf6-4aa9025e5d22.png)

<br>  

## C언어에서 2차원 배열은 행 우선 저장방식: Row-Major  
![image](https://user-images.githubusercontent.com/61939286/139906729-7d7e9131-8b07-4417-9244-e7ae6ef006e8.png)

<br>  

## %p와 %x의 차이  
![image](https://user-images.githubusercontent.com/61939286/139906975-320b2032-30c6-4f77-9824-d36577942174.png)

- 주소를 64bit 으로하는 아키텍처
   ![image](https://user-images.githubusercontent.com/61939286/139907984-ffa85199-5101-4933-a18c-c40343534576.png)

- x86 으로 설정하면 주소가 32bit으로 저장됨
  ![image](https://user-images.githubusercontent.com/61939286/139908403-c65641a9-8ac9-4d90-a237-f1df9b58fa30.png)

<br>  

## 2차원 배열의 주소  
![image](https://user-images.githubusercontent.com/61939286/139908752-cc12395c-de2a-44d8-9b8c-2a5178f4e467.png)

<br>  

## 2차원 배열의 이름에 +를 하면 행 단위로 넘어감(아래 세 값이 같음)   
![image](https://user-images.githubusercontent.com/61939286/139909340-d79da91d-b4ea-4cbc-b241-8b17b860e4e6.png)

<br>  

## 일반 포인터로 2차원 배열 가리키면 4씩 증가됨  
![image](https://user-images.githubusercontent.com/61939286/139909678-86994882-5e92-4bd9-a19b-32aa8d39fd2e.png)

<br>  

## 2차원 배열과 double pointer관계: 더블 포인터를 사용하면 배열의 이름처럼 행 단위로 넘어감    
![image](https://user-images.githubusercontent.com/61939286/139909758-1dbb365f-3d56-447f-adc0-0c41b5e5ca9c.png)

<br>  

## const(상수)는 바꿀 수 없어  
![image](https://user-images.githubusercontent.com/61939286/139910733-0a9d6e92-4886-4d5e-a171-c320281430e7.png)

<br>  

## const와 pointer  
`const int* pa = &a;`는 pa가 가리키고 있는 a의 값을 고정!  
`int* const pa = &a;`는 pa의 값을 고정! 즉, pa는 a만 가리킬 수 있도록 함!  

![image](https://user-images.githubusercontent.com/61939286/139911092-ecbf10fb-461c-4afd-a939-8be1f4eb5b65.png)
![image](https://user-images.githubusercontent.com/61939286/139911279-6764e3e9-bdf1-4599-9164-4fe116589a66.png)



