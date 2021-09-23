# [4주차] 포인터 타입, 연산  

### 🔑 key word: `pointer`, `pointer type`, `pointer calculation`, `little endian`  
<br>  


## 직접참조 (그냥 a로 찍어봄)   
![image](https://user-images.githubusercontent.com/61939286/134558765-27aa76d5-0012-433d-b833-057bdb792384.png)  

- %08X 하면 16진수 8자리로 찍는데 그거보다 작으면 앞에 0붙여서 출력  

<br>  

## 간접참조 (포인터 이용)  
![image](https://user-images.githubusercontent.com/61939286/134559220-b80cc53f-fdc3-4e2e-a5e4-11b1e43e99b6.png)

<br>  

## 메모리의 숫자 저장 방식: 리틀엔디안(인텔계열), 빅 엔디안(모토롤라)    
> 국제 표준은 Big Endian임 ( == Network Byte Order )  

![image](https://user-images.githubusercontent.com/61939286/134560292-75af3601-a332-413f-93bb-ba6b64534036.png)

<br>  

## int 형 변수를 char* 로 접근 : 포인터 타입의 크기(1byte)만큼 가져옴 
![image](https://user-images.githubusercontent.com/61939286/134560632-250fd6f0-65a7-4449-b8aa-017a6cd81f68.png)  
```
출력: 0000000d
```  
<br>  

## int 형 변수를 short* 로 접근 : 2byte만큼 가져와 읽고 출력은 순서맞게  
![image](https://user-images.githubusercontent.com/61939286/134561029-a5b07f56-c5cc-48cc-b737-85e9be5f2dfc.png)
```
출력: 00000c0d
```  
<br>  

## +1의 의미는 그다음 int (포인터 타입에 따라감)    
![image](https://user-images.githubusercontent.com/61939286/134561752-5950aac9-821f-4aca-9934-527dfac7712f.png)  

<br>  

## 타입에 따른 포인터 덧셈 연산  
![image](https://user-images.githubusercontent.com/61939286/134562085-3b241753-bf61-4e64-a92c-89f8f6ead9ad.png)  

<br>  

## 포인터 증감연산자(++, --) : 그냥 1더하고 뺀 것 주소 연산과 같음  
![image](https://user-images.githubusercontent.com/61939286/134562304-9e4f2278-e33c-4c80-81b5-f63fd0342c4b.png)  

<br>  

## 포인터가 가리키는 값의 연산 : 그냥 산술 연산  
![image](https://user-images.githubusercontent.com/61939286/134563074-f4eefd14-c8bf-4c85-b09c-2ca2b39a992e.png)  

![image](https://user-images.githubusercontent.com/61939286/134562874-26dacdf1-8337-4dcd-ae61-e082dff23fac.png)

