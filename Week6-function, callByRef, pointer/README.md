# [6주차] Call By Ref, function, double pointer

### 🔑 key word:   `call by value`, `call by reference`,  `array function`,`struct pointer`, `struct function`, `double pointer`
<br>  

## call by reference (주소를 인자로 넘겨줌)
![image](https://user-images.githubusercontent.com/61939286/135963543-a1ffadb7-b6ab-4bf1-9c30-df8ba6388320.png)
![image](https://user-images.githubusercontent.com/61939286/135963572-344c16c7-bbce-448c-86e2-50927431f432.png)

<br>  

## scanf 함수는 안에 있는 값을 가져와야 하기 때문에 call by ref  

![image](https://user-images.githubusercontent.com/61939286/135974966-69bbd445-4ba7-4fee-aa71-b501f9641748.png)

<br>  

## 배열을 인자로 하는 함수 - 두가지 방법 똑같음  

> 포인터로 받아서 포인터로 쓰거나, 배열로 쓰거나  
![image](https://user-images.githubusercontent.com/61939286/135976950-a26aa8e0-80c4-4a2b-bd20-d0a9024ad098.png)

> 배열로 받아서 포인터로 쓰거나, 배열로 쓰거나  
> ![image](https://user-images.githubusercontent.com/61939286/135977106-6a447446-6300-4093-857e-a9e354b3800c.png)

##### ✔ 배열로 받았으면 배열로 쓰고, 포인터로 받았으면 포인터로 쓰는게 더 좋음
<br>  

## 함수 반환값이 포인터인경우  -- ⚠ 주의 !  
#### ❌ 이렇게 짜면 안돼!
함수 안에서 변수를 만들고 그 주소를 리턴하는 것은 위험함  
![image](https://user-images.githubusercontent.com/61939286/135977956-576da070-a647-4ee2-8d7b-044db9a79c23.png)

<br>   

## 구조체 포인터로 멤버 접근할 때는 `->`
![image](https://user-images.githubusercontent.com/61939286/135982543-c7aa1247-97df-4755-b310-1b31e51ab054.png)  

<br>   

## 구조체를 함수 인자로! (구조체 포인터를 이용해 call by ref)  
![image](https://user-images.githubusercontent.com/61939286/135982775-77b9b5c0-260d-4573-878a-f65d86864eb7.png)
<br>   

## Double Pointer  

![image](https://user-images.githubusercontent.com/61939286/135981323-29bda1a9-3a23-4c54-b70b-08085e661a12.png)
![image](https://user-images.githubusercontent.com/61939286/135981421-73de0a03-9dc4-4c7c-a33e-6a6466930a79.png)

