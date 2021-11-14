# [11주차] 폰노이만 구조, 정적 동적 메모리, malloc


### 🔑 key word: `memmory allocation`,  `static, dynamic memory` , `malloc`

<br>  

## 폰 노이만 구조  
<img src="https://user-images.githubusercontent.com/61939286/141688375-fdf9afb6-84ea-4393-9cb4-1b5475d8ddb9.png" width="70%" >

## 메모리 구조  
- CPU 빠르고 메모리 느려서 캐시로 보완
- HDD에 두고 돌리면 느려서 SSD 나옴  

![image](https://user-images.githubusercontent.com/61939286/141689102-f910e51b-16e9-4e30-a11d-e59d2bcf044b.png)  


## 정적 메모리 (Static Memory)  
<img src="https://user-images.githubusercontent.com/61939286/141689283-a987c864-ddb8-449e-ad38-7e77b96932cf.png" width="70%" >

## 동적 메모리 (Dynamic Memory)
- 필요할 때마다 메모리를 할당
  - malloc 은 메모리를 할당하고 시작 **주소**를 리턴 => 포인터 필요  
  - malloc 은 void* 형태로 반한 되기 때문에 **캐스팅**이 필요
  - 할당 받은 공간은 모두 **연속 된 공간**(마치 array처럼 사용 가능)  
  ```c
  int* p = (int*)malloc(sizeof(int));
  ```
  ![image](https://user-images.githubusercontent.com/61939286/141689698-581d2e7b-088f-406a-8a2b-39da89d5f8d4.png)

- 할당 해제 (free)  
  - free 안하면 Memory Leak(누수) 발생
  ```c
  free(p);
  ```
  ![image](https://user-images.githubusercontent.com/61939286/141689969-cd87c746-dd4e-4c02-8e77-88f08f456be5.png)  
  
- malloc 주의사항  
  - 예전에는 free안하면 PC의 모든 메모리에 영향이 있었지만, 요즘은 OS들이 프로그램별로 나누어 관리함  
    <img src="https://user-images.githubusercontent.com/61939286/141691260-9beaf492-f996-46e0-aed1-e8b2c99b1cbc.png" width="70%" >  
  
  - 🚨 free없이 다른 영역(5000번지)을 할당하면 이전의 영역(3000번지)을 반환할 수 없어 할당 불가
    ```c
    int* p = (int*)malloc(sizeof(int));
    p = (int*)malloc(10);
    ```
     <img src="https://user-images.githubusercontent.com/61939286/141691450-c0d7103b-31c9-43a6-90fc-1ae4da4544a0.png" width="70%" >  

   - 🚨 dangling pointer: 아직 쓰고 있는데 할당을 해제해 버리는 것  
     ![image](https://user-images.githubusercontent.com/61939286/141691528-047540f0-32f7-449c-b7a7-9546ff402248.png)  
     

## malloc 으로 구조체 배열 동적 할당  
<img src="https://user-images.githubusercontent.com/61939286/141691761-5b96529d-8ce0-45b3-a4c5-cc3677c9c5b9.png" width="50%" >  


## 동적 메모리를 할당하여 ragged array 
![image](https://user-images.githubusercontent.com/61939286/141691912-9f5ac495-96fa-4563-9ba9-a3358a193fe6.png)

