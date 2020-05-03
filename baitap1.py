# Nhập điểm in ra học lực học sinh (giỏi 8-10, khá 6.5-8, trung bình 5-6.5, còn lại yếu)

# grade = float(input("Nhap diem: "))

# if grade > 10 or grade < 0:
#     print("Diem phai tren 0 va duoi 10")
# else:
#     if grade >= 8:
#         print("Gioi")
#     elif grade >= 6.5:
#         print("Kha")
#     elif grade >= 5:
#         print("Trung Binh")
#     else:
#         print("Yeu")

# Nhập vào 1 năm kiểm tra xem đấy có phải năm nhuận không.

# year = int(input("Nhap nam: "))

# if (year % 4) == 0:
#    if (year % 100) == 0:
#        if (year % 400) == 0:
#            print("{0} is a leap year".format(year))
#        else:
#            print("{0} is not a leap year".format(year))
#    else:
#        print("{0} is a leap year".format(year))
# else:
#    print("{0} is not a leap year".format(year))

# Nhập vào 1 tháng in ra số ngày trong tháng (input: 1 -> output: 31)

# month = int(input("Nhap thang: "))

# if month > 12 or month < 1:
#     print("Khong co thang {}".format(month))
# else:
#     if month == 2:
#         print("thang {} co 28 ngay hoac 29 ngay voi nam nhuan".format(month))
#     elif (month % 2 != 0 and month <8) or (month % 2 == 0 and month > 7):
#         print("thang {} co 31 ngay".format(month))
#     else:
#         print("thang {} co 30 ngay".format(month))

# Nhập vào 1 số, kiểm tra xem số đấy có phải số chính phương không.

# number = int(input("Nhap so can kiem tra: "))

# count = 1
# multiply = 0

# while count <= number/2:
#     multiply = count * count
#     if multiply == number:
#         print("Day la so chinh phuong")
#         break
#     elif multiply > number:
#         print("Day khong phai la so chinh phuong")
#         break
#     count += 1

# Cho người dùng nhập vào 3 số, in ra số lớn nhất.

# a = int(input("Nhap so a: "))

# b = int(input("Nhap so b: "))

# c = int(input("Nhap so c: "))

# if a >= b:
#     if a >= c:
#         print("so {} lon nhat".format(a))
#     else:
#         print("so {} lon nhat".format(c))
# elif b >= c:
#     print("so {} lon nhat".format(b))
# else: 
#     print("so {} lon nhat".format(c))

# Nhập vào a, b giải và biện luận tìm nghiệm phương trình ax + b = 0

# print("Phuong trinh ax + b = 0 \n")
# a = 0
# while a == 0:
#     a = int(input("moi nhap a (khac 0): "))

# b = int(input("moi nhap b: "))
# x = ( - b)/a
# print("x = {}".format(x))

# Nhập vào a, b, c giải và biện luận tìm nghiệm phương trình ax^2 + bx + c = 0 => làm rồi lười quá

# 1. input 1 kí tự kiểm tra xem là chữ thường (a-z) hay chữ hoa (A-Z) là số (0-9) hay là kí tự đặc biệt (còn lại)

# length = 0
# while length != 1:
#     x = input("Nhap 1 ky tu:  ")
#     length = len(x)


# order = ord(x)

# if order >= 65 and order <= 90:
#     print("{}: Chu Hoa".format(x))
# elif order >= 97 and order <= 122:
#     print("{}: Chu Thuong".format(x))
# elif order >= 48 and order <= 57:
#     print("{}: Chu So".format(x))
# else:
#     print("{}: Ky Tu".format(x))

# 2. input độ dài 3 cạnh 1 tam giác, kiểm tra độ dài có hợp lệ không? nếu có, kiểm tra xem có phải tam giác đều/cân/vuông không?

# a = int(input("Nhap canh A: "))
# b = int(input("Nhap canh B: "))
# c = int(input("Nhap canh C: "))

# if a + b > c or a + c > b or b + c > a:
#     if a == b and b == c:
#         print("Tam giac deu")
#     elif a == b or b == c or a == c:
#         print("Tam giac can")
#     elif a * a + b * b == c * c or c * c + b * b == a * a or a * a + c * c == b * b:
#         print("Tam giac vuong")
#     else:
#         print("Tam giac binh thuong")
# else:
#     print("Khong phai tam giac")

# 3. input giá điện output giá tiền, biết rằng: 50 số đầu tiên có giá 3.000/1 số, 100 số tiếp theo có giá 4.000/1 số, 
# 100 số tiếp theo 5.000/1 số và từ 250 số trở đi thì giá là 10.000/1 số.

eletric = int(input("Nhap so dien: "))
sum = 0

if eletric > 250:
    sum = 50 * 3000 + 100 * 4000 + 100 * 5000 + (eletric - 250)*10000
elif eletric > 150:
    sum = 50 * 3000 + 100 * 4000 + (eletric - 150)*5000
elif eletric > 50:
    sum = 50 * 3000 + (eletric - 50)*4000
elif eletric > 0 and eletric < 51:
    sum = eletric * 3000
else:
    print("I don't know")

print("Tong tien dien la {}".format(sum))

