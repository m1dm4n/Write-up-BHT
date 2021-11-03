# Write up chi tiết #



#    Bài 1  
<img src="https://i.imgur.com/BbzX9bc.png">

Bài này điều đầu tiên đập vào mình là lặp tới 11 =)). Nhưng mọi người hãy lưu ý chỗ **phép nhân tối thiểu** .

### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140017875-5cc6271f-53c1-4ed8-a96c-62939c9beff4.png)
- Thay vì nhân từng x mình sẽ nhân với giá trị của nó tại thời điểm đó (gấp đôi số mũ).
- Đầu tiên mình khởi tạo S = x * x mất 1 phép nhân. 
      
  <img src="https://i.imgur.com/c2Wwk2I.png"> 

- Lúc này số́ mũ là 2. Sau đó cùng phân tích 11 ra bằng phép chia 2:
  - 11 / 2 = 5, r=1
  - 5 / 2  = 2, r=1
- Như vậy để từ 2 tới 11 sẽ tốn 2 phép nhân và 2 phép cộng. Vì đây là số mũ nên +1 <=> S*x 
      
    => mất thêm 4 lần nhân nữa.

  <img src="https://i.imgur.com/Da3Byen.png">     <img src="https://i.imgur.com/Da3Byen.png">
          
                x^2 * x^2 * x                    x^5 * x^5 * x 
- Tổng là mất 5 phép nhân thay vì 11 nếu chạy vòng lặp.

### Code:
Bài này thì chỉ có phép toán nên vẽ sao code vậy thôi.
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/1.cpp)


# Bài 2
<img src="https://i.imgur.com/SY9LJtX.png">

Ta có thể lấy 1 số bất kì để phân tích:
 - 5376 = 5 * 10^3 + 3 * 10^2 + 7 * 10^1 + 6 * 10^0 

=> Kết quả: 5 + 3 + 7 + 6 = 21

### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140019082-7906518d-0a83-4b83-a184-4d33c4274091.png)
 - Như đã phân tích ở trên để lấy các phần tử ra thì mình sẽ cắt từ phải sang trái:
   - 5376 = 5370 + 6 = 537*10 + 6
   - 537 = 53*10 + 7
   - 53 = 5*10 + 3
   - 5 = 0*10 + 5
 - Kết hợp giữa phép chia và phép chia lấy dư cho 10 sẽ cho kết quả cần tìm.
 - Khởi tạo giá trị **t** để gán số dư vào, giá trị **S** để tính tổng của chúng. 
 - Tạo 1 vòng lặp vì mình không biết n có bao nhiêu chữ số.

 <img src="https://i.imgur.com/BqHSMy0.png">
 
 - Sau mỗi vòng lặp n sẽ giảm 10 lần và dừng ngay khi n = 0.
 - Xuất S.

### Code:

Code thì mình cũng áp dụng công thức trên nhưng sẽ sử dụng đệ quy thay vì while:

```cpp
int Sumofn(int n)
{
    if (n == 0) return 0;
    return n % 10 + Sumofn(n / 10);
}
```
- Lấy số dư và tiếp tục chạy hàm với `n = n/10`.
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/2.cpp)





# Bài 3
<img src="https://i.imgur.com/Us7RG5z.png">

Đây là dạng tính tổng của các dãy số.
### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140024837-f5d4bdb1-13fd-4b05-970c-6d25ee3e9837.png)
 - Dãy số thứ **m (m <= n)** bất kì sẽ có dạng tử là **x^m** và mẫu có dạng tổng các số nguyên từ **1->m**, **m+1** thì tử là **(x^m) * x** và mẫu có dạng tổng các số nguyên từ **1->m** cộng **m+1**.
 - Mình sẽ tạo 2 biến để lưu tử **N**, mẫu **C** và **S** để gán **N/C** sau mỗi vòng lặp.
 - Ta set giá trị cho **N** và **C** lần lượt là **N = 1 (x^0)** và **C = 0**.
 - Chạy vòng lặp từ 1 tới **n**.

   <img src="https://i.imgur.com/hj8l86Y.png">
   
 - Xuất S
### Code:
Áp dụng tương tự từ lưu đồ:
- Vì số lần lặp biết trước là **n** nên ta dùng **for**, ngoài ra khi cập nhật biến ta dùng các toán tử gán **+= , *=**.
- 1 lưu ý duy nhất là khi khởi tạo giá trị là int thì khi gán vào S phải ép kiểu để compiler không bỏ phần thập phân.
```cpp
 S += (double)tich / (double)tong;
```

- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/3.cpp)



# Bài 4
<img src="https://i.imgur.com/r7iCg94.png">

Bài này tương tự tính tử ở bài 3 nhưng thay vì nhân **x**  ta nhân **-x ^ 2** .

### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140024890-5e56df20-5af0-4d6f-bf4e-dc74153792ce.png)
- Tạo 1 biến **X** để lưu giá trị mới của phần tử thứ **n** sau mỗi vòng lặp và **S** để lưu tổng của chúng.
- Khởi tạo giá trị **X = -x * x** là giá trị của phần tử đầu tiên, chạy vòng lặp từ 1, lấy **S = S + X** và cuối vòng lặp gán giá trị mới cho **X**
<img src="https://i.imgur.com/TW6tkpw.png">

### Code:
Áp dụng tương tự từ lưu đồ:
- Vì số lần lặp biết trước là **n** nên ta dùng **for**, ngoài ra khi cập nhật biến ta dùng các toán tử gán **+= , *=**.
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/4.cpp)




# Bài 5
<img src="https://i.imgur.com/WnLGPVM.png">

Bài này nhìn vào thì sẽ nghĩ ngay tới vòng lặp và dùng căn bậc 2 **sqrt( )**. Sử dụng vòng lặp để căn lồng căn và toán tử ***=** để tính x mũ n.


### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140024971-1651388d-a455-4b86-9293-f004242e0439.png)
 - Tạo 1 biến **T** để lưu giá trị **x^n** sau mỗi vòng lặp.
 - Vì đề cho thấp nhất là x^1 nên mình khởi tạo **S = sqrt(x)** luôn. Do đó ta chạy vòng lặp với **n = 2** trở đi.
  ![image](https://user-images.githubusercontent.com/92845822/140061326-2048a8e4-92ec-48e6-98a7-4fd2b8ff69b7.png)

 - **S** mới = căn của **giá trị luỹ thừa mới + S cũ** .
 - Chạy tới **n** rồi xuất **S**.

### Code:

- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/5.cpp)




# Bài 6
<img src="https://i.imgur.com/zR5NDxl.png">

### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025130-b3e5be2d-5a7d-4cf4-a1bd-5a91b2865af0.png)


### Code:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/6.cpp)





# Bài 7
<img src="https://i.imgur.com/FPvFZ5i.png">

### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025187-3e7258f6-5946-4d7e-b21d-ac4a51e5a1a1.png)

### Code:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/7.cpp)





# Bài 8
<img src="https://i.imgur.com/kW7PEaA.png">

### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025309-b1769f4c-4873-4f27-b2e4-8e45e859422b.png)

### Code:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/8.cpp)




# Bài 9
<img src="https://i.imgur.com/gZG9scA.png">

### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025377-06aa6127-2eca-4be9-b138-0499b7a53c7f.png))

### Code:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/9.cpp)




# Bài 10
<img src="https://i.imgur.com/ImHzqkS.png">

### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025416-9417af7c-b98c-4400-9c15-6907080fd1c4.png)

### Code:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/10.cpp)
- 


