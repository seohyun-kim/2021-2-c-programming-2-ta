# [10주차] 최적화와 volatile, void 포인터, 메인함수 


### 🔑 key word: `optimize`,  `volatile` , `void pointer`, `main argc argv`

<br>  

## 전반적인 동작 과정  
![image](https://user-images.githubusercontent.com/61939286/139913695-641fed97-db95-4355-9c7d-6c3bd20af961.png)

<br>  

## 컴파일러는 최적화를 해버림!  
![image](https://user-images.githubusercontent.com/61939286/139913794-910ec631-b00c-4dde-bdcf-6e005f22075b.png)

- `Debug` 모드는 내가짠 그대로 바이너리 파일로 바꿔줘!
- `Release` 는 컴파일러가 최적화를 하여 속도를 개선함!
- 최적화는 레벨이 있음 (O1, O2,..)  

<br>  

## volatile: 최적화를 하지 않도록 함  
속도저하 될 수 있음..  
![image](https://user-images.githubusercontent.com/61939286/139917524-f6ce3823-c52c-4694-a0b6-ed5e7ce8cc04.png)
 
<br>  

## void pointer: generic pointer   
![image](https://user-images.githubusercontent.com/61939286/139919223-8eaa4be7-aba4-4835-b3d6-41de24f6298c.png)

<br>  

## 배열에서 void pointer
![image](https://user-images.githubusercontent.com/61939286/139919670-d7fd25f8-e855-4613-8333-1a4bf65940db.png)

<br>  

## void pointer 사용 예제  
![image](https://user-images.githubusercontent.com/61939286/139920683-f057a29b-ea06-46a5-aa9b-c09f1cb45c15.png)

<br>  

## Main 함수에 parameter 주기(argc, argv)  
`scanf` 같은 것으로 받지 않아도 메인함수의 인자로 사용자에게 입력값을 받을 수 있음
![image](https://user-images.githubusercontent.com/61939286/139922413-b45010e8-c67d-4ca1-b806-898b74693177.png)
![image](https://user-images.githubusercontent.com/61939286/139922471-46eb06b0-c021-481d-bc24-332842d76cfe.png)

<br>  

## 예제
섭씨온도를 화씨온도로 바꾸기  
![image](https://user-images.githubusercontent.com/61939286/139922923-047fd577-0ad9-4148-b81a-5b7b37bf2555.png)

- 참고: atof
   ![image](https://user-images.githubusercontent.com/61939286/139922679-f50b6784-bd3c-4729-af1d-3aebb14799a6.png)


