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

