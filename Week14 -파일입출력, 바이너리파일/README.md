# [14주차] 파일입출력, 바이너리 파일  


### 🔑 key word: `fgets`, `fprintf`, `fscanf`, `fflush`, `fread`, `fseek`  
<br>  

## fgets (파일 읽기- 문자열)  
- 라인바이 라인으로 읽음 (한번에 읽으려면 바이너리로)  
  <img src="https://user-images.githubusercontent.com/61939286/143734303-741a9e7a-a235-4914-9848-b4c836b041b8.png" width=70%/>

<br>  

## fprintf
- 숫자를 텍스트로 기록하기 편한 함수  
![image](https://user-images.githubusercontent.com/61939286/143734427-1f1f97c4-f8e1-4a32-b945-75f6816dc806.png)

- 예시(텍스트 형태로 파일에 출력)  
   <img src="https://user-images.githubusercontent.com/61939286/143734500-78fa487e-7715-47f4-a97c-1eb238f511e2.png" width=70%/>

<br>  

## fscanf  
- 파일을 다 읽으면 반환값으로 EOF(-1)  
- long float == double (fscanf에서)  
   <img src="https://user-images.githubusercontent.com/61939286/143734657-59f03702-c538-4641-9e50-0065266311e3.png" width=70%/>
   
- fscanf에 줄바꿈 있으나 없으나 동일  
   ![image](https://user-images.githubusercontent.com/61939286/143734726-47bb81d8-2e7c-4b5e-8c59-039f6fe0d65c.png)


<br>  

## 바이너리 파일로 쓰기  
   <img src="https://user-images.githubusercontent.com/61939286/143734848-e868ffcd-d49a-4617-b1ec-fd861230bed3.png" width=70%/>

- 154가 저장되는 방식  
  <img src="https://user-images.githubusercontent.com/61939286/143734869-183ba1bc-0269-4c22-98ee-428b0170a3d0.png" width=50%/>

<br>  

## fflush : 임시 버퍼 내용을 저장장치로 실제 저장  
- 프로그램 속도 느려지니까 종료 직전에만 사용  
  ![image](https://user-images.githubusercontent.com/61939286/143734928-078e9ff2-db15-4beb-bbdf-0ae425f0ade2.png)
  ![image](https://user-images.githubusercontent.com/61939286/143734970-dea9ab25-8d87-45ed-a68b-e95e74c097a1.png)

- 임시 버퍼 안쓰고 싶을 때 (근데 사용하는게 속도측면에서 좋음)
  ```c
  setbuf(fp, NULL);
  ```
<br>  

## fread (파일에서 읽어오기)   
![image](https://user-images.githubusercontent.com/61939286/143735052-934c4d7f-09f7-4f89-bf22-9a926b39e26a.png)

- fread의 반환 값: 잘 읽었으면 1, 아니면 0
![image](https://user-images.githubusercontent.com/61939286/143735122-d199bde6-89f0-4471-aca6-f833e3024f6f.png)
![image](https://user-images.githubusercontent.com/61939286/143735137-d45a6371-e43a-406f-aa09-f51c2edfe9db.png)
  
<br>  

## bin file, struct 이용한 예제: 학생정보 저장  
- 구조체 정의  
  ![image](https://user-images.githubusercontent.com/61939286/143735322-07ac42fc-1f78-4b3d-8789-cca919e989b3.png)

- 파일에 쓰기  
  ![image](https://user-images.githubusercontent.com/61939286/143735307-b61c623f-f481-476a-8103-ec9eb25c4618.png)

- 파일에서 읽어오기(첫번째 학생의 데이터)    
  ![image](https://user-images.githubusercontent.com/61939286/143735376-a62ed68a-070d-4214-9f14-b6df9e26a405.png)

- 모든 학생의 데이터 읽어오기  
  ![image](https://user-images.githubusercontent.com/61939286/143735387-bc0af67d-6b3f-44cd-8eb8-85c90fb4e177.png)
  ![image](https://user-images.githubusercontent.com/61939286/143735396-581663ad-c116-4bc3-9c0d-946267b2c0d8.png)

<br>  

## fseek (random access)  
- 파일 포인터를 이용해 원하는 곳의 위치를 읽을 수 있음  
  ![image](https://user-images.githubusercontent.com/61939286/143735461-3da40e13-68df-4c0c-83ae-c390a09af522.png)

- 기준 종류  
![image](https://user-images.githubusercontent.com/61939286/143735494-3ae5dfae-e47b-4c9e-939d-95e4a23f016e.png)

- 예시  
  ```c
  fseek(fp, sizeof(int), SEEK_SET);
  ```
  ![image](https://user-images.githubusercontent.com/61939286/143735536-da59131e-c39b-439a-ba75-63f55ff90f89.png)

- 가장 마지막 학생만 읽어오기  
  ![image](https://user-images.githubusercontent.com/61939286/143735571-369d6a27-0901-4adc-9fac-398908a40e5c.png)

- 전체 학생 데이터 읽어오기  
  ![image](https://user-images.githubusercontent.com/61939286/143735617-e4912ab7-d26b-4d50-a08c-482585118972.png)
  ![image](https://user-images.githubusercontent.com/61939286/143735620-d31ad583-71b9-4d4b-a273-ecd3105ce85b.png)

<br>  




