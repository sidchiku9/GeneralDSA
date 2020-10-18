import mysql.connector

mydb = mysql.connector.connect(
    host = "127.0.0.1",
    user = "root",
    password = "Chiku$!d9",
    database = "Goconstruct"
)

mycursor = mydb.cursor()

execute = [ 
"CREATE TABLE Vendor(Name VARCHAR(50), Phone BIGINT , Email VARCHAR(50), ShopName VARCHAR(50), Address VARCHAR(50), Items VARCHAR(50), PRIMARY KEY(Name, Phone))",
"CREATE TABLE Project(ProjectNumber INT, CustomerName VARCHAR(100), CustomerNumber BIGINT, VendorNumber BIGINT, Item INT, Details VARCHAR(50), PRIMARY KEY(ProjectNumber, CustomerName, CustomerNumber))",
"CREATE TABLE Payment(Name VARCHAR(50), Phone BIGINT, Address VARCHAR(50), Item VARCHAR(50), PRIMARY KEY(Name, Phone))"
]

for i in execute :
    mycursor.execute(i)

mydb.commit()


'''
DONE : 
#customer : Name VARCHAR(100), Age INT, Address VARCHAR(20) PRIMARY KEY, Project VARCHAR(20), Date DATE
#admin : AdminID INT PRIMARY KEY, Password VARCHAR(30), Logs VARCHAR(30)
#item : ItemNumber INT PRIMARY KEY, Quantity INT, Price INT, Order VARCHAR(50)
#order : CustomerName VARCHAR(50), Phone BIGINT PRIMARY KEY, Address VARCHAR(50), Amount INT, Project VARCHAR(50), Item INT)
#vendor : Name VARCHAR(50), Phone BIGINT , Email VARCHAR(50), ShopName VARCHAR(50), 
# Address VARCHAR(50), Items VARCHAR(50), PRIMARY KEY(Name, Phone)
#project : ProjectNumber INT, CustomerName VARCHAR(100), CustomerNumber BIGINT, 
#VendorNumber BIGINT, Item INT, Details VARCHAR(50), PRIMARY KEY(ProjectNumber, CustomerName, CustomerNumber)
#payment : Name VARCHAR(50), Phone BIGINT, Address VARCHAR(50), Item VARCHAR(50), PRIMARY KEY(Name, Phone)

'''