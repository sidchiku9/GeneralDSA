import tkinter
from tkinter import messagebox
import mysql.connector

db_connection = mysql.connector.connect(host = '127.0.0.1', user = 'root', password = 'Chiku$!d9',auth_plugin='mysql_native_password')

top = tkinter.Tk()

def CustomerDial() :
    Customer = tkinter.Tk()
    Buy = tkinter.Button(Customer, text = "Buy Items", command = BuyItems)
    Give = tkinter.Button(Customer, text = "Give Projects", command = GiveProjects)
    Make = tkinter.Button(Customer, text = "Make Payments", command = MakePayments)
    Buy.pack()
    Give.pack()

def VendorDial() :
    Vendor = tkinter.Tk()
    Take = tkinter.Button(Vendor, text = "Take Projects", command = TakeProjects)
    Request = tkinter.Button(Vendor, text = "Request Payments", command = RequestPayments)
    Take.pack()
    Request.pack()

def BuyItems() :
    print('The buy items thing')
    #has insert function

def GiveProjects() :
    print('The give projects thingy')
    #has insert function

def TakeProjects() :
    print('The take projects thingy')
    #has delete function

def RequestPayments() :
    print('The request payments thingy')
    #has insert function

def MakePayments() :
    print('The make payments functions')

#both will be using the same tables 

def HelloCallBack() :
    C = tkinter.Button(top, text = "Customer", command = CustomerDial)
    V = tkinter.Button(top, text = "Vendor", command = VendorDial)
    C.pack()
    V.pack()

HelloCallBack()

top.mainloop()