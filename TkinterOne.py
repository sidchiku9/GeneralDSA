import tkinter
from tkinter import messagebox
import mysql.connector

db_connection = mysql.connector.connect(host = '127.0.0.1', user = 'root', password = 'Chiku$!d9',auth_plugin='mysql_native_password')

top = tkinter.Tk()

def CustomerDial() :
    Customer = tkinter.Tk()
    NeedsItems = tkinter.Button(Customer, text = "Needs Items", command = NeedItem)
    MakesPayments = tkinter.Button(Customer, text = "Makes Payments", command = MakePayment)
    PlacesOrders = tkinter.Button(Customer, text = "Place Orders", command = PlaceOrder)
    GivesProjects = tkinter.Button(Customer, text = "Give Projects", command = GiveProject)
    NeedsItems.pack()
    MakesPayments.pack()
    PlacesOrders.pack()
    GivesProjects.pack()

def NeedItem() :
    print('Needs items')

def MakePayment() :
    print('Make payment')

def PlaceOrder() :
    print('Place order')

def GiveProject() :
    print('Give project')

def VendorDial() :
    Vendor = tkinter.Tk()
    TakesPayment = tkinter.Button(Vendor, text = "Take Payments", command = TakePayments)
    SellsItem = tkinter.Button(Vendor, text = "Sell Items", command = SellsItems)
    CompletesOrder = tkinter.Button(Vendor, text = "Complete Order", command = CompleteOrder)
    TakesProject = tkinter.Button(Vendor, text = "Takes Projects", command = TakesProjects)
    CompletesProject = tkinter.Button(Vendor, text = "Complete Project", command = CompletesProjects)
    TakesPayment.pack()
    SellsItem.pack()
    CompletesOrder.pack()
    TakesProject.pack()
    CompletesProject.pack()

def TakePayments() :
    print('Take payments')

def SellsItems() :
    print('Sells items')

def CompleteOrder() :
    print('Complete order')

def TakesProjects() :
    print('Takes projects')

def CompletesProjects() :
    print('Completes projects')

def HelloCallBack() :
    C = tkinter.Button(top, text = "Customer", command = CustomerDial)
    V = tkinter.Button(top, text = "Vendor", command = VendorDial)
    C.pack()
    V.pack()

HelloCallBack()

top.mainloop()

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