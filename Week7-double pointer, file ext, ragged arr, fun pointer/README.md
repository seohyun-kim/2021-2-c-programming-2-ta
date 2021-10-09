# [7주차] 더블포인터, 확장자, ragged arr, fun pointer


### 🔑 key word:   `double pointer`, `file extension`,  `ragge array`, `function pointer`, `function pointer array`  
<br>  

## 더블포인터를 함수 인자로 이용해 주소값을 지정
![image](https://user-images.githubusercontent.com/61939286/136670300-5ad331ed-1905-4068-953f-dc579580706b.png)  
<br>  

## .cpp는 c언어의 기능을 포함  
![image](https://user-images.githubusercontent.com/61939286/136670396-2526820d-9119-4bcb-b6cb-d3034c69cae4.png)  
<br>  

## Array of pointer : 배열 각각의 형태가 포인터타입  
![image](https://user-images.githubusercontent.com/61939286/136670430-92b83d86-4cae-4293-bc61-5392a5025f12.png)
![image](https://user-images.githubusercontent.com/61939286/136670475-955762fd-3a53-459b-b981-20711648a5ac.png)
<br>  

## Ragged 배열: 각 행마다 열의 갯수가 다른 배열 (공간낭비 줄일 수 있음)  
![image](https://user-images.githubusercontent.com/61939286/136671555-0a3c7509-4600-42f0-a2d5-809fe036dc92.png)
<br>  

## 함수포인터 : 그 주소를 따라가면 함수가 있다!  
`반환값 형태` (* pf)(`입력인자1 형태`, `입력인자2 형태`, ...)  ;  

### 함수 이름은 바로 주소 그 자체임!
![image](https://user-images.githubusercontent.com/61939286/136672248-6a404d02-7edb-4802-b5b9-3485bd48f75a.png)  

### 함수포인터로 호출 할 때 그냥 변수명으로 하면됨  
```c
res = pf(4,5);
```
<br>  

## 함수포인터 예제  
![image](https://user-images.githubusercontent.com/61939286/136672385-cd396dff-2ebf-4220-ab77-4100a97bbeec.png)
<br>  

## 함수 포인터 배열  
![image](https://user-images.githubusercontent.com/61939286/136672492-5b321a80-e4aa-4a69-9417-efc26e058c19.png)

