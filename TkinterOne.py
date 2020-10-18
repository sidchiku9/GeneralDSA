import tkinter
from tkinter import *
import mysql.connector

db_connection = mysql.connector.connect(host = '127.0.0.1', user = 'root', password = 'Chiku$!d9',auth_plugin='mysql_native_password', database = 'Goconstruct')
myCursor = db_connection.cursor()

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
    myCursor.execute("SELECT * FROM Item")

    

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

def SellsItem() :
    global t1, t2, t3, t4

    my_w = tkinter.Tk()
    my_w.geometry("400x400")
    my_w.title("Needs Items")
    l0 = tkinter.Label(my_w,  text='Needs Items',font=('Helvetica', 16), width=30,anchor="c" )
    l0.grid(row=1,column=1,columnspan=4)

    l1 = tkinter.Label(my_w,  text='Item Number : ', width=10,anchor="c" )  
    l1.grid(row=3,column=1)
    t1 = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    t1.grid(row=3,column=2) 
    
    l2 = tkinter.Label(my_w,  text='Quantity : ', width=10,anchor="c" )  
    l2.grid(row=4,column=1)
    t2 = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    t2.grid(row=4,column=2) 

    l3 = tkinter.Label(my_w,  text='Price : ', width=10,anchor="c" )  
    l3.grid(row=5,column=1)
    t3 = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    t3.grid(row=5,column=2) 

    l4 = tkinter.Label(my_w,  text='Order : ', width=10,anchor="c" )  
    l4.grid(row=6,column=1)
    t4 = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    t4.grid(row=6,column=2) 

    b1 = tkinter.Button(my_w,  text='Add Record', width=10, command=lambda: add_data())  
    b1.grid(row=7,column=2) 

def add_data() :
    my_name = t1.get("1.0",END) 
    my_class = t2.get("1.0",END)  
    my_mark = t3.get("1.0",END)
    my_gender = t4.get("1.0",END)
    query="INSERT INTO  `Item` (`ItemNumber` ,`Quantity` ,`Price` ,`OrderItem`) VALUES(%s,%s,%s,%s)"
    my_data=(my_name,my_class,my_mark,my_gender)
    myCursor.execute(query,my_data)
    db_connection.commit()
    t1.delete('1.0',END)
    t2.delete('1.0',END)  # reset the text entry box
    t3.delete('1.0',END)
    t4.delete('1.0',END)
    print("Query inserted")

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