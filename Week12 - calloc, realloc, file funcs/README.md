# [12주차] calloc, realloc, file pointer


### 🔑 key word: `calloc`,  `realloc` , `file stream`, `file pointer`, `fopen`, `fclose`

<br>  

## calloc  
- 동적으로 공간을 할당 후 0으로 초기화  
```c
int *p = 0;
p = (int*)calloc( 5, sizeof(int) );
```
<img src="https://user-images.githubusercontent.com/61939286/142659333-0cb348b2-79f8-41da-ae9e-f93b5ea32faa.png" width="70%" >

- 할당 받지 않은 공간도 주소로 접근해 들여다 볼 수 있음  
<img src="https://user-images.githubusercontent.com/61939286/142659145-e75a2783-5f85-4f5f-bb64-6ed080271217.png" width="70%" >

<br>  

## realloc  
- malloc으로 할당 받은 공간을 재 할당 (확장, 축소)  
```c
int *p = 0;
p = (int*)malloc( sizeof(int) * 5 );
p = realloc( p, sizeof(int) * 7);
```
![image](https://user-images.githubusercontent.com/61939286/142659893-dfea6553-ce99-4831-9e74-a9920eb0676c.png)

<br>  


## 파일 스트림  
<img src="https://user-images.githubusercontent.com/61939286/142660360-43fc442a-f6ea-48cb-8d43-5c4c3f38ca9f.png" width="50%" >  

- 메모장으로 열어서 보이면 text file, 아니면 binary file(이미지, 문서,..)  

<br>  

## 파일 포인터  
- OS안에 있는 파일이 저장되어있는 구조체에 대한 주소를 가지고 있음  
<img src="https://user-images.githubusercontent.com/61939286/142661548-95152635-3cac-4e42-84da-3e96b1b21403.png" width="70%" >
<img src="https://user-images.githubusercontent.com/61939286/142661862-b5a5dc3d-c85e-47bd-b641-7e27516e351d.png" width="70%" >

- 예제 (fopen, fclose, fprintf)  
  <img src="https://user-images.githubusercontent.com/61939286/142665098-0406a1cc-7047-40a4-8fd6-564c91bf49ac.png" width="70%" >

- 예제 (fscanf)
  ![image](https://user-images.githubusercontent.com/61939286/142667290-dd3d47d3-72c9-4ce3-83ae-fa8d4d267189.png)

  

<br>  




