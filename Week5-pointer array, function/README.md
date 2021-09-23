# [5주차] 포인터 배열, 

### 🔑 key word: `pointer`,  `pointer operation`, `function`   
<br>  

## C언어의 배열은 연속된 메모리에 할당  
![image](https://user-images.githubusercontent.com/61939286/134564060-fdeb7223-7f3a-46b8-9471-9cd23a8b080c.png)  

<br>  
  
## 포인터와 배열의 관계  
> 배열의 이름이 시작주소  
> 주소(pa)에 연산을 해 주면 다음 주소를 가리킴  
> 포인터를 이용해 주소로 접근하여 배열의 값   

![image](https://user-images.githubusercontent.com/61939286/134564791-5e08acbc-7d16-4c42-a4b0-13bcaac4a909.png)  


<br>  
  
## 포인터 증감연산자와 dereferencing(간접참조)  

### 1.
![image](https://user-images.githubusercontent.com/61939286/134565901-4db5ef68-b215-4ea0-854b-7e63d7855998.png)  

```c
v=*pa++; 와

v=*pa;
pa=pa+1; 는 같음
```
✔ 둘다 v의 값은 변하지 않아! v에 대입 이후 ++임  

### 2. 
![image](https://user-images.githubusercontent.com/61939286/134566541-0da519f1-3e15-4bf9-b861-f83f2ba46bf0.png)  

```c
v=(*pa)++;와

v=*pa;
*pa = *pa+1;은 같음
```
✔ *pa의 값인 1에 1을 더해 2가 되고 배열 값도 변함  (대입 후 증가라 v의 값은 불변)

### 3. 
![image](https://user-images.githubusercontent.com/61939286/134567019-7e770603-73dd-4d0c-b1ab-e1a8356bd1ab.png)  

```c
v=*++pa;와

pa=pa+1;
v=*pa;은 같음
```
✔ pa 주소에 1이 증가되고 (실제주소는 +4), 그 이후 *pa를 v에 대입 (V값도 변화됨)  


### 4. 
![image](https://user-images.githubusercontent.com/61939286/134567493-bd2c9fe6-501d-4bb4-9769-531a88edc8a8.png)


```c
v=++*pa;와

*pa=*pa+1;
v=*pa;은 같음
```
✔ *pa 값인 1에 1이 더해 2가 되고, 그 값을 v에 대입  

<br>  


# 함수 Review   

## 함수의 parameter(매개변수)와 argument(인자)  
![image](https://user-images.githubusercontent.com/61939286/134567987-2824bce6-7eb8-4643-8130-3130cb6fae80.png)  

<br>  

## 함수의 declaration(선언)과 definition(정의)  
![image](https://user-images.githubusercontent.com/61939286/134568340-ba9605c1-7fd2-45d3-bfe5-f5249d0e61c2.png)  

<br>  

## call by value 함수는 값이 변화되지 않아 - pointer가 아닌 모든 호출은 call by value  
![image](https://user-images.githubusercontent.com/61939286/134568658-45f8e927-1d34-448c-8f0f-ecbe35cc34f7.png)  


