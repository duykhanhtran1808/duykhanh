CREATE TABLE danhsachmathang ( 
ProductID int PRIMARY KEY,
tenhang varchar(255),
motahang varchar(255),
donvi varchar(255),
gia float,
);

CREATE TABLE khachhang (
CIFNo int PRIMARY KEY,
nguoidathang varchar(255) ,
diachi text,
dienthoai int,
);

CREATE TABLE donhang (
masodonhang int IDENTITY(1,1) PRIMARY KEY,
ProductID int FOREIGN KEY REFERENCES danhsachmathang(ProductID),motahang varchar(255),
tenhang varchar(255),
soluong int,
donvi varchar(255),
gia float,
thanhtien float,
CIFNo int FOREIGN KEY REFERENCES khachhang(CIFNo),
nguoidathang varchar(255) ,
diachi text,
dienthoai int,
ngaydathang date,
);

INSERT INTO danhsachmathang(ProductID, tenhang, motahang, donvi, gia)
VALUES
('1', 'May tinh ', 'Máy nh?p m?i','Chi?c', '1000'),
('2','?i?n Tho?i Nokia', '?i?n tho?i ?ang hot','Chi?c', '200'),
('3','Máy In Samsung ', 'Máy in ?ang ?','Chi?c', '100');

SELECT ProductID, tenhang, motahang, donvi, gia
FROM danhsachmathang;

INSERT INTO khachhang (CIFNo,nguoidathang,diachi,dienthoai)
VALUES 
('1', 'Nguyen Thi Ngoc', '12 Tran Nhan Tong', '090346588'),
('2', 'Nguyen Thi B', '13 Tran Nhan Tong', '090346589'),
('3', 'Nguyen Thi C', '14 Tran Nhan Tong', '090346591'),
('4', 'Nguyen Thi D', '15 Tran Nhan Tong', '090346595'),
('5', 'Nguyen Thi E', '16 Tran Nhan Tong', '090346598');

INSERT INTO donhang(CIFNo,nguoidathang,diachi,dienthoai, ProductID, tenhang, motahang, donvi, gia, soluong)
OUTPUT inserted.masodonhang
VALUES
('1', 'Nguyen Thi Ngoc', '12 Tran Nhan Tong', '090346588','1', 'May tinh ', 'Máy nh?p m?i','Chi?c', '1000', '5');
INSERT INTO donhang(CIFNo,nguoidathang,diachi,dienthoai, ProductID, tenhang, motahang, donvi, gia, soluong)
OUTPUT inserted.masodonhang
VALUES
('2', 'Nguyen Thi B', '13 Tran Nhan Tong', '090346589', '2','?i?n Tho?i Nokia', '?i?n tho?i ?ang hot','Chi?c', '200', '6');
INSERT INTO donhang(CIFNo,nguoidathang,diachi,dienthoai, ProductID, tenhang, motahang, donvi, gia, soluong)
OUTPUT inserted.masodonhang
VALUES
('3', 'Nguyen Thi C', '14 Tran Nhan Tong', '090346591', '3','Máy In Samsung ', 'Máy in ?ang ?','Chi?c', '100', '10');
INSERT INTO donhang(CIFNo,nguoidathang,diachi,dienthoai, ProductID, tenhang, motahang, donvi, gia, soluong)
OUTPUT inserted.masodonhang
VALUES
('4', 'Nguyen Thi D', '15 Tran Nhan Tong', '090346595', '3','Máy In Samsung ', 'Máy in ?ang ?','Chi?c', '100', '10');
INSERT INTO donhang(CIFNo,nguoidathang,diachi,dienthoai, ProductID, tenhang, motahang, donvi, gia, soluong)
OUTPUT inserted.masodonhang
VALUES
('5', 'Nguyen Thi E', '16 Tran Nhan Tong', '090346598', '3','Máy In Samsung ', 'Máy in ?ang ?','Chi?c', '100', '10');

SELECT CIFNo,nguoidathang,diachi,dienthoai, ProductID, tenhang, motahang, donvi, gia, soluong, soluong * gia AS thanhtien
FROM donhang;

SELECT CIFNo, nguoidathang,diachi,dienthoai
FROM donhang;

SELECT ProductID, tenhang, motahang, donvi, gia
FROM donhang;

SELECT CIFNo, nguoidathang,diachi,dienthoai
FROM donhang
ORDER BY
    nguoidathang ASC;

SELECT ProductID, tenhang, motahang, donvi, gia
FROM donhang
ORDER BY
    gia DESC;

SELECT CIFNo,nguoidathang,diachi,dienthoai, ProductID, tenhang, motahang, donvi, gia, soluong, soluong * gia AS thanhtien
FROM donhang
WHERE
nguoidathang = 'Nguyen Thi Ngoc';

SELECT COUNT (nguoidathang)
FROM donhang;

SELECT COUNT (tenhang)
FROM danhsachmathang;












