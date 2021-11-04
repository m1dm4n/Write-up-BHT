# Write up chi tiết #



#    Bài 1  
<img src="https://i.imgur.com/BbzX9bc.png">

Bài này điều đầu tiên đập vào mình là lặp tới 11 =)). Nhưng mọi người hãy lưu ý chỗ **phép nhân tối thiểu** .

### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140017875-5cc6271f-53c1-4ed8-a96c-62939c9beff4.png)
- Thay vì nhân từng x mình sẽ nhân với giá trị của nó tại thời điểm đó (gấp đôi số mũ).
- Đầu tiên mình khởi tạo `S = x * x` mất 1 phép nhân. 
      
 	<img src="https://i.imgur.com/c2Wwk2I.png"> 

- Lúc này số́ mũ là 2. Sau đó cùng phân tích 11 ra bằng phép chia 2:
  - 11 / 2 = 5, r=1
  - 5 / 2  = 2, r=1
- Như vậy để từ 2 tới 11 sẽ tốn 2 phép nhân và 2 phép cộng. Vì đây là số mũ nên +1 <=> S*x 
      
    => mất thêm 4 lần nhân nữa.

  <img src="https://i.imgur.com/Da3Byen.png">     <img src="https://i.imgur.com/Da3Byen.png">
          
                `x^2 * x^2 * x                    x^5 * x^5 * x` 
- Tổng là mất 5 phép nhân thay vì 11 nếu chạy vòng lặp.

### Code:
Bài này thì chỉ có phép toán nên vẽ sao code vậy thôi.
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/1.cpp)
	
	![image](https://user-images.githubusercontent.com/92845822/140240879-27bbc56b-33cd-4ac7-9b05-9efdae1386c9.png)


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
 - Khởi tạo giá trị `t` để gán số dư vào, giá trị `S` để tính tổng của chúng. 
 - Tạo 1 vòng lặp vì mình không biết n có bao nhiêu chữ số.

 	<img src="https://i.imgur.com/BqHSMy0.png">
 
 - Sau mỗi vòng lặp n sẽ giảm 10 lần và dừng ngay khi `n = 0`.
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

	![image](https://user-images.githubusercontent.com/92845822/140241068-bd9b7079-f55c-44ed-b355-e4bb65d1f552.png)





# Bài 3
<img src="https://i.imgur.com/Us7RG5z.png">

Đây là dạng tính tổng của các dãy số.
### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140024837-f5d4bdb1-13fd-4b05-970c-6d25ee3e9837.png)
 - Dãy số thứ `m (m <= n)` bất kì sẽ có dạng tử là `x^m` và mẫu có dạng tổng các số nguyên từ `1->m`, `m+1` thì tử là `(x^m) * x` và mẫu có dạng tổng các số nguyên từ `1->m` cộng `m+1`.
 - Mình sẽ tạo 2 biến để lưu tử `N`, mẫu `C` và `S` để gán `N/C` sau mỗi vòng lặp.
 - Ta set giá trị cho `N` và `C` lần lượt là `N = 1 (x^0)` và `C = 0`.
 - Chạy vòng lặp từ 1 tới `n`.
	<img src="https://i.imgur.com/hj8l86Y.png">
   
 - Xuất S
### Code:
Áp dụng tương tự từ lưu đồ:
- Vì số lần lặp biết trước là `n` nên ta dùng `for`, ngoài ra khi cập nhật biến ta dùng các toán tử gán `+= , *=`.
- 1 lưu ý duy nhất là khi khởi tạo giá trị là int thì khi gán vào S phải ép kiểu để compiler không bỏ phần thập phân.
```cpp
 S += (double)tich / (double)tong;
```

- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/3.cpp)

	![image](https://user-images.githubusercontent.com/92845822/140241212-8b9d32e8-7727-4887-bf15-f74b2a28c3c2.png)



# Bài 4
<img src="https://i.imgur.com/r7iCg94.png">

Bài này tương tự tính tử ở bài 3 nhưng thay vì nhân `x`  ta nhân `-x ^ 2` .

### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140024890-5e56df20-5af0-4d6f-bf4e-dc74153792ce.png)
- Tạo 1 biến `X` để lưu giá trị mới của phần tử thứ `n` sau mỗi vòng lặp và `S` để lưu tổng của chúng.
- Khởi tạo giá trị `X = -x * x` là giá trị của phần tử đầu tiên, chạy vòng lặp từ 1, lấy `S = S + X` và cuối vòng lặp gán giá trị mới cho `X`
	<img src="https://i.imgur.com/TW6tkpw.png">

### Code:
Áp dụng tương tự từ lưu đồ:
- Vì số lần lặp biết trước là `n` nên ta dùng `for`, ngoài ra khi cập nhật biến ta dùng các toán tử gán `+= , *=`.
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/4.cpp)

	![image](https://user-images.githubusercontent.com/92845822/140241266-da7e0c0d-1f58-4775-895b-81091b6b6485.png)



# Bài 5
<img src="https://i.imgur.com/WnLGPVM.png">

Bài này nhìn vào thì sẽ nghĩ ngay tới vòng lặp và dùng căn bậc 2 `sqrt( )`. Sử dụng vòng lặp để căn lồng căn và toán tử `*=` để tính `x^n`.


### Lưu đồ:
 - [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140024971-1651388d-a455-4b86-9293-f004242e0439.png)
 - Tạo 1 biến `T` để lưu giá trị `x^n` sau mỗi vòng lặp.
 - Vì đề cho thấp nhất là `x^1` nên mình khởi tạo `S = sqrt(x)` luôn. Do đó ta chạy vòng lặp với `n = 2`trở đi.
  	![image](https://user-images.githubusercontent.com/92845822/140061326-2048a8e4-92ec-48e6-98a7-4fd2b8ff69b7.png)

 - `S mới = căn của giá trị luỹ thừa mới + S cũ` .
 - Chạy tới `n` rồi xuất `S`.

### Code:
Áp dụng tương tự từ lưu đồ:
- Thêm thư viện **cmath** để sử dụng căn bậc 2.
```cpp
#include <cmath>
```
- Vì số lần lặp biết trước là `n` nên ta dùng `for`.
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/5.cpp)

	![image](https://user-images.githubusercontent.com/92845822/140241338-4642a941-f04e-4269-a4c3-b820a384d95a.png)



# Bài 6

<img src="https://i.imgur.com/zR5NDxl.png">

Bài này thì sẽ rất đơn giản nếu đề không có đoạn **độ chính xác 10^-6**. 
- Các bạn có thể tìm hiểu về độ chính xác [tại đây](https://dinhnghia.vn/so-gan-dung-va-sai-so-lop-10.html) hoặc Google.

Sau khi thông não có thể thấy cách tính tổng tới giá trị `1/n` rồi làm tròn là sai. Vậy thì làm sao

### Lưu đồ:
- Với dạng bài này theo như mình tìm hiểu và được khai sáng ta sẽ cộng cho tới khi xuất hiện phần tử tiếp theo nhỏ hơn độ chính xác đã cho: `0.000001`.
- Đồng nghĩ với việc tại thời điểm đó `1/n < 0.000001`.
- Lúc này `S` sẽ có dạng `S `![equation](https://user-images.githubusercontent.com/92845822/140070604-0b47f9ec-5e18-4910-88af-aa2bfa39629c.png) `0,000001`.
- Vậy kết luận bài này sẽ lặp lại các phép cộng và cho đến khi thoã điều kiện trên thì thôi và ko có input.
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025130-b3e5be2d-5a7d-4cf4-a1bd-5a91b2865af0.png)


### Code:
Bài này mấu chốt nằm ở **độ chính xác 10^-6** nên khi hiểu thì làm rất dễ:
- Bài này không biết trước số vòng lặp nên ta dùng `while` với điều kiện `1/e >= 0.000001` 
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/6.cpp)

	![image](https://user-images.githubusercontent.com/92845822/140241391-61907d59-4da0-4eb7-b2dd-553505242bc0.png)
- Như đã nói bài này ko có input và xuất ra duy nhất 1 kết quả.


# Bài 7
<img src="https://i.imgur.com/FPvFZ5i.png">

Bài này thuộc dạng vòng lặp bình thường sử dụng giá trị cũ để tính giá trị mới

### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025187-3e7258f6-5946-4d7e-b21d-ac4a51e5a1a1.png)
- Khởi tạo `a = -2` giống đề bài, `b = 3`(3 mũ 1) và `c = 7` (7 mũ 1) .
- Chạy vòng lặp khi `n >= 2` 
- Các dạng **m^n** thì sử dụng `*=` để gán giá trị mới,
- `a` mới sẽ sử dụng giá trị hiện tại và áp dụng công thức đề bài để tính và cập nhập giá trị đó vào `a`.

 	![image](https://user-images.githubusercontent.com/92845822/140085332-de80df62-1478-42df-8b67-ecb187def98d.png)

- Chạy hết điều kiện xuất `a`.


### Code:
Áp dụng lưu đồ thôi:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/7.cpp)

	![image](https://user-images.githubusercontent.com/92845822/140241550-4adedb3e-98a5-438e-a23e-83644bebd0e8.png)




# Bài 8
<img src="https://i.imgur.com/kW7PEaA.png">

Bài này bạn nắm được thuộc tính của các loại tam giác thì sẽ dễ nhưng phải cẩn thận các điều kiện và sắp xếp hợp lý để không bị bỏ sót.

### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025309-b1769f4c-4873-4f27-b2e4-8e45e859422b.png)
- Sử dụng bất đẳng thức tam giác để làm điều kiện đó là 3 cạnh của tam giác:
 
 	![image](https://user-images.githubusercontent.com/92845822/140090814-1792f0b3-4f62-4e0d-ad12-41ab9199c0a9.png)

 ***Lưu ý sử dụng dấu and `&&` sẽ cho ra `true` khi các điều kiện đêu đúng hết còn dấu or `||` cho ra `true` khi 1 trong các điều kiện đúng.***
- Sau đó mình sẽ phân ra 3 loại tam giác cơ bản nhất: vuông, nhọn và tù.
- Áp dụng định lý Py-ta-go đảo làm điều kiện cho tam giác vuông. 
- Áp dụng thêm lý thuyết **cạnh đối** và **góc đối** khi đó giả sử `a*a > b*b + c*c` thì góc đối của cạnh `a` sẽ lớn hơn 90 độ => tam giác tù và ngược lại với `a*a < b*b + c*c`.

	![image](https://user-images.githubusercontent.com/92845822/140093832-e6513272-7f08-4a06-9cf4-4475f37dad95.png)

- Bây giờ là buớc để xét tam giác có cân hay không sử dụng or `||` 

	![image](https://user-images.githubusercontent.com/92845822/140095273-ed85e07f-960a-45a3-af8c-95adb6a90b51.png)

- Đặc biệt trong tam giác nhọn có một trường hợp đặc biệt là đều 3 cạnh bằng nha sử dụng  and `&&` để xét nếu không thỏa thì xét có phải là tam giác cân hay không.

	![image](https://user-images.githubusercontent.com/92845822/140095907-0f36b68d-1d52-4d27-b5c9-6f4c5b73902a.png)

- Sau khi xét xong từng nhóm thì sẽ xuất theo các điều kiện đã thoả.

	![image](https://user-images.githubusercontent.com/92845822/140096002-1f62c5a9-305e-4445-b1a2-ca05249d71ff.png)

### Code:
Đối với code mình áp dụng lưu đồ thôi nhưng mình sẽ phân theo 3 hàm `nhon` , `tu`, `vuong` để dễ nhìn và đọc các dòng code hơn:
- Ứng với mỗi loại tam giác cơ bản sẽ có lời gọi hàm tương ứng
```cpp
    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) 
        Vuong(a, b, c);
    else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b) 
        Tu(a, b, c);
    else if (a*a < b*b + c*c || b*b < a*a + c*c || c*c < a*a + b*b)
        Nhon(a, b, c);
```
- Trong hàm thì mình chỉ code các điều kiện đặc biệt như trong lưu đồ và xuất thôi. Vd hàm `vuong`:
```cpp
    void Vuong(double a, double b, double c)
    {
    	  if (a == b || b == c || a == c)
         	cout << "Tam giac vuong can \n";
    	  else
        	cout << "Tam giac vuong \n";
    };
```
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/8.cpp)

	![image](https://user-images.githubusercontent.com/92845822/140241738-a05f6708-1018-4f14-9ef5-2478dfef85b3.png)	
	![image](https://user-images.githubusercontent.com/92845822/140242109-e0b977b6-5375-46dc-906d-0bd35964f95c.png)


- Bắt buộc phải nhập 3 số là 3 cạnh của tam giác nếu không phải thì nhập khi nào phải thì thôi :))


# Bài 9
<img src="https://i.imgur.com/gZG9scA.png">

 > Số chính phương là số bằng bình phương đúng của một số nguyên

Bài này cò nhiều cách nhưng mình sẻ sử dụng vòng lặp để phù hợp với lưu đồ thuật toán

### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025377-06aa6127-2eca-4be9-b138-0499b7a53c7f.png))
- Áp dụng định nghĩa trên, mình sẽ bình phương từng số nguyên bắt đầu từ 0.
- Khởi tạo `i = 0`n `i` tăng 1 sau mỗi vòng lặp.
- Xét điều kiện để vòng lặp chạy là `i * i < n`.
- Chạy hết vòng lặp xảy ra 2 trường hơp: `i * i = n` và `i * i > n`.
- Dĩ nhiên `i * i = n` thì `n` là số chính phương còn lại thì không phải.

### Code:
Code từ lưu đồ trên:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/9.cpp)

	![image](https://user-images.githubusercontent.com/92845822/140242505-415309d7-270a-4ff6-b3e8-ff88531d14fa.png)
	![image](https://user-images.githubusercontent.com/92845822/140242449-c82c4198-eee5-4ee5-90a9-d4e2a36db552.png)



Ngoài ra trong c++ còn có ép kiểu nên bạn có thể làm vậy (gọi `cmath` để dùng `sqrt`):
```cpp
	int temp = sqrt(n);
	if (temp*temp ==n)
          cout << "so chinh phuong \n";
      else
          cout << "khong phai so chinh phuong \n";
```
- Vì đã khai báo với kiểu `int` nên nếu không phải số chính phương thì căn bậc 2 ra sẽ bị chặt mất phần thập phân => nhân lại sẽ không bằng chính nó.


# Bài 10
<img src="https://i.imgur.com/ImHzqkS.png">

  > Một số có dạng `5^m` sẽ là tập hợp của `m` số 5 nhân với nhau (5^2 = 5 * 5, 5^4 = 5 * 5 * 5 * 5).

Như vậy khi ta lặp lại việc `/ 5` cho tới khi còn lại 1 số `5` và không có dư trong quá trình chia thì thoả.
### Lưu đồ:
- [Xem lưu đồ tại đây.](https://user-images.githubusercontent.com/92845822/140025416-9417af7c-b98c-4400-9c15-6907080fd1c4.png)
- Nhập `n` với `n > 0`. Với `n = 1` thì xuất đúng luôn vì đây là 5^0.
- Vòng lặp và điều kiện mình dùng để xét(cuối vòng lặp sẽ gán giá trị `n` mới bằng `n/5`:
 	![image](https://user-images.githubusercontent.com/92845822/140118664-28a20680-4f80-4feb-b600-502ff1fa99f6.png)
- Kết thúc vòng lặp nếu `n = 5` thì xuất đúng còn lại sẽ chia dư thì xuất sai
	![image](https://user-images.githubusercontent.com/92845822/140236037-7aa149d8-7f8f-4a81-9d3b-9c71a432b167.png)

### Code:
Code từ lưu đồ trên:
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/10_1.cpp)
- Đối với `n = 1` thì mình sẽ gán cho cho n = 0 luôn để có thể thỏa mãn các điều kiện xuất `đúng`.
	
	![image](https://user-images.githubusercontent.com/92845822/140242650-0a755007-95db-4161-bfd5-844877830eaf.png)
	![image](https://user-images.githubusercontent.com/92845822/140242743-e8593d5d-2442-43b8-9b5e-d0c478bfb682.png)
	![image](https://user-images.githubusercontent.com/92845822/140243193-7906f3df-0352-4132-9db0-2e5e7c1f98e6.png)

	


Ngoài ra mình còn cách khác tạo hàm `bool` và sử dụng đệ quy để kiểm tra:
```cpp
bool check(int n) 
{
    return n == 1 ? true : (n % 5 != 0 ? false : check(n / 5));
}
```
- ở trên mình lồng 2 lần toán tử 3 ngôi nên có thể hơi khó hiểu. Các bạn có thể hiểu nó tương tự dưới đây:
```cpp
bool check(int n) 
{
    if (n == 1) 
    	return true;
    else if (n%5 != 0) 
    	return false;
    return check(n / 5);
}
```
- Các điều kiện cũng lấy từ lưu đồ nhưng sử dụng đệ quy sẽ gọn hơn và phù hợp với việc duyệt 1 dãy số.
- Hàm sẽ chạy lại tới khi 1 trong 2 điều kiện trên thỏa và trả về `true` hoặc `false`,
- [Xem code tại đây.](https://github.com/Tsouth113/Write-up-BHT/blob/main/Code%20l%C6%B0u%20%C4%91%C3%B4%CC%80%20thu%C3%A2%CC%A3t%20toa%CC%81n/10_2.cpp)
- Kết quả tương tự thôi.

	![image](https://user-images.githubusercontent.com/92845822/140242963-2f851da2-fc25-49e8-a7fd-4f2c533a68f4.png)
	![image](https://user-images.githubusercontent.com/92845822/140243053-16286e3a-fab6-4c1c-98b3-0bae913c155a.png)
	![image](https://user-images.githubusercontent.com/92845822/140243100-b7f2f8ee-3604-43bf-8f82-80078d44f428.png)


