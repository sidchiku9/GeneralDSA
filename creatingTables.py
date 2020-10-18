import mysql.connector

mydb = mysql.connector.connect(
  host="127.0.0.1",
  user="root",
  password="Chiku$!d9"
)

mycursor = mydb.cursor()

mycursor.execute("CREATE DATABASE Goconstruct")