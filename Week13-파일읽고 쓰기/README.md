# [13주차] 파일 읽고 쓰기


### 🔑 key word: `fgets`, `feof`, `fputc`, `CR-LF`, `fputs`
<br>  

## fgets (파일 읽기- 문자열)  
- OS 안의 파일 구조체가 파일 어디까지 읽었는지 기억함  
  <img src="https://user-images.githubusercontent.com/61939286/143732408-0cf4be11-ba42-465a-83ce-e62bf6dd0dcb.png" width=70%/>  
  
- fget의 반환값  
  ![image](https://user-images.githubusercontent.com/61939286/143732554-ee3c2adb-1dc9-4fb6-ad11-916ae018cb2c.png)  

- while문을 통해 파일 전체 읽기  
  <img src="https://user-images.githubusercontent.com/61939286/143732531-6a3d4f0a-4f81-4bdd-9f4b-be4dc76ccf3d.png" width=70%/>  

<br>  

## feof (파일의 끝인지 확인)  
  <img src="https://user-images.githubusercontent.com/61939286/143732566-0217ef8c-842b-4265-a026-e9c5f0b9ba4c.png" width=70%/>  

- 예시   
  ![image](https://user-images.githubusercontent.com/61939286/143732580-3260401a-f172-426e-95b8-a8be7528534e.png)  

<br>  

## fputc (파일 쓰기- 캐릭터 단위)   
- 캐릭터 단위로 읽고 쓰는 함수  
  <img src="https://user-images.githubusercontent.com/61939286/143732597-8318d8ac-a028-45e9-8ca5-2646565757bf.png" width=70%/>  

- 예시  
  ![image](https://user-images.githubusercontent.com/61939286/143732669-c3977618-f84e-4fbf-a2ac-34ef21e21b91.png)

<br>  

## CR-LF (Carriage Return-Line Feed)--윈도우  
- CR : 현재 커서를 줄 올림 없이 가장 앞으로 옮기는 동작
- LF : 커서는 그 자리에 그대로 둔 상황에서 종이만 한 줄 올려 줄을 바꾸는 동작  

   <img src="https://user-images.githubusercontent.com/61939286/143732790-0c330503-1a94-44fc-90f1-66e77cb28540.png" width=50%/>  

<br>  

## 파일 복사  
- 파일에서 한글자 읽어오기  
   <img src="https://user-images.githubusercontent.com/61939286/143732887-c93cb1f8-a762-4410-836a-2bf9be262a29.png" width=50%/> 

- 파일 전체 한 글자씩 읽기  
   <img src="https://user-images.githubusercontent.com/61939286/143732927-66d60735-e9da-4f01-881f-47d781908305.png" width=70%/> 

- 파일 복사  
    <img src="https://user-images.githubusercontent.com/61939286/143733049-9059dac0-5801-43fa-a883-425228894daf.png" width=70%/> 


<br>  

## fputs(문자열 단위로 쓰기)  
- strcpy로 문자열 복사  
- w모드로 열면 덮어씀(기존내용 없어짐)  
    <img src="https://user-images.githubusercontent.com/61939286/143733167-758f11bd-98c8-415e-90e4-90c2a40e816d.png" width=70%/> 

- a모드로 열면 뒤에 이어서 써짐(append)  
    <img src="https://user-images.githubusercontent.com/61939286/143733261-53586d1d-f98d-4ffa-a14d-661238f849b0.png" width=70%/> 

![image](https://user-images.githubusercontent.com/61939286/143733285-1b0e7f18-98de-4fca-b043-53c95eed212b.png)



