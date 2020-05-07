# bai 1 
animals = ['elephent', 'ant', 'dog']
animals.append('cat')
print(animals)
animals.insert(1,'dolphin')
print(animals)
animals.remove('ant')
print(animals)
# ////////////////////////////
# bai 2
list1 = ["M", "na", "i", "Tu"]
list2 = ["y", "me", "s", "an"]

for n, x in enumerate(list2):
    list1[n] = list1[n] + x

print(list1)
# ////////////////////////////
# bai 3 - cach for
list_input = [1, 3, 4, 5]
list_output = []

for x in list_input:
    list_output.append(x*x)
print(list_output)
# ////////////////////////////
# bai 3 - cach list comprehension
list_input = [1, 3, 4, 5]

for n, x in enumerate(list_input):
    list_input[n] = x*x
print(list_input)
# ////////////////////////////
# bai 4 - cach for
list_input = ["Mike", "", "Emma", "Kelly", "", "Brad"]

for x in list_input:
    if x == "":
        list_input.remove("")
print(list_input)
# ////////////////////////////
# bai 4 - cach list comprehension
list_input = ["Mike", "", "Emma", "Kelly", "", "Brad"]

for n, x in enumerate(list_input):
    if x == "":
        list_input.pop(n)
print(list_input)
# ////////////////////////////
# bai 5
mix = ["Orange", [10, 20, 30], (5, 15, 25)]
x1 = -1
x2 = 0

for x in mix:
    x1 += 1
    for y in x:
        x2 +=1
        if y == 25:
            print("So 25 nam o vi tri [{}][{}]".format(x1,x2))
            break
    x2 = -1
# ////////////////////////////
# bai 6
tuple1 = (10,10,10,10)
item1 = tuple1[0]
count = 0
for x in tuple1:
    if x != item1:
        count += 1

if count == 0:
    print("Cac phan tu trung nhau")
else:
    print("Cac phan tu khong trung nhau")
# ////////////////////////////
# bai 7
set1 = {10, 20, 30, 40, 50}
set2 = {30, 40, 50, 60, 70}
list1 = []
# cau a 
for x in set1:
    list1.append(x)
for x in set2:
    list1.append(x)
print(list1)
# cau b 
list2 = []
for x in set1:
    if x in set2:
        list2.append(x)

print(list2)
# ////////////////////////////
# bai 8
information = {
"name": "Tuan",
"age":18,
"salary": 8000,
"city": "Ha Noi"
}
information["job"] = "IT"
print(information["salary"])
information.pop("age")
print(information)
# ////////////////////////////
# bai 9
keys = ['Ten', 'Twenty', 'Thirty']
values = [10, 20, 30]
dict1 = {

}
for n, x in enumerate(keys):
    dict1[x] = values[n]

print(dict1)
# ////////////////////////////
# bai 10
num = [1, 2 , 3, 1, 2, 1, 1]
set1 = set(num)
dict1 = {

}
highest = 0
lowest = 0
# cau a + b
for x in set1:
    count = 0
    for y in num:
        if x == y:
            count +=1
            dict1[x] = count
            if count > highest:
                highest = count
            else:
                lowest = count
# cau b 
print(dict1)
for x in dict1:
    if dict1[x] == highest:
        print("So {} xuat hien nhieu nhat: {} lan".format(x,highest))
    elif dict1[x] == lowest:
        print("So {} xuat hien it nhat: {} lan".format(x,lowest))

# cau c  
sum_dict = 0
count_dict = 0
for x in dict1:
    count_dict += 1
    sum_dict += dict1[x]

print("Trung binh la {}".format(sum_dict/count_dict))
