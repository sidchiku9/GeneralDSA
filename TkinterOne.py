import tkinter
from tkinter import *
import mysql.connector

db_connection = mysql.connector.connect(host = '127.0.0.1', user = 'root', password = 'Chiku$!d9',auth_plugin='mysql_native_password', database = 'Goconstruct')

main = tkinter.Tk()
main.title('Entry Window')

def CustomerDial() :
    Customer = tkinter.Tk()
    Customer.title('Customer Functions')
    NeedsItems = tkinter.Button(Customer, text = "Needs Items", command = NeedItem)
    MakesPayments = tkinter.Button(Customer, text = "Makes Payments", command = MakePayment)
    PlacesOrders = tkinter.Button(Customer, text = "Place Orders", command = PlaceOrder)
    GivesProjects = tkinter.Button(Customer, text = "Give Projects", command = GiveProject)
    NeedsItems.pack(padx=20, pady=20)
    MakesPayments.pack(padx=20, pady=20)
    PlacesOrders.pack(padx=20, pady=20)
    GivesProjects.pack(padx=20, pady=20)

def NeedItem() :
    
    print('Needs items') #insert sql query

def MakePayment() :
    print('Make payment')

def PlaceOrder() :
    print('Place order')

def GiveProject() :
    print('Give project')

def VendorDial() :
    Vendor = tkinter.Tk()
    Vendor.title('Vendor Functions')
    TakesPayment = tkinter.Button(Vendor, text = "Take Payments", command = TakePayments)
    SellsItem = tkinter.Button(Vendor, text = "Sell Items", command = SellsItems)
    CompletesOrder = tkinter.Button(Vendor, text = "Complete Order", command = CompleteOrder)
    TakesProject = tkinter.Button(Vendor, text = "Takes Projects", command = TakesProjects)
    CompletesProject = tkinter.Button(Vendor, text = "Complete Project", command = CompletesProjects)
    TakesPayment.pack(padx=20, pady=20)
    SellsItem.pack(padx=20, pady=20)
    CompletesOrder.pack(padx=20, pady=20)
    TakesProject.pack(padx=20, pady=20)
    CompletesProject.pack(padx=20, pady=20)

def TakePayments() :
    print('Take payments')

def SellsItems() :
    print('Sells items') #select and delete sql queryz

def CompleteOrder() :
    print('Complete order')

def TakesProjects() :
    print('Takes projects')

def CompletesProjects() :
    print('Completes projects')

def HelloCallBack() :
    C = tkinter.Button(main, text = "Customer", command = CustomerDial)
    V = tkinter.Button(main, text = "Vendor", command = VendorDial)
    C.pack(padx=20, pady=20)
    V.pack(padx=20, pady=20)

HelloCallBack()

main.mainloop()

'''def BuyItems() :
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

#both will be using the same tables '''