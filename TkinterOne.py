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
    global tItem, tQuantity, tOT 

    myCursor.execute("SELECT * FROM Item")
    my_wo = tkinter.Tk()
    my_wo.title("Available Items")
    my_wo.geometry("400x250")
    i=0 
    for Item in myCursor: 
        for j in range(len(Item)):
            e = Entry(my_wo, width=10, fg='blue') 
            e.grid(row=i, column=j) 
            e.insert(END, Item[j])
        i=i+1

    my_w = tkinter.Tk()
    my_w.geometry("400x400")
    my_w.title("Buy Items")
    l0 = tkinter.Label(my_w,  text='Needs Items',font=('Helvetica', 16), width=30,anchor="c" )
    l0.grid(row=1,column=1,columnspan=4)

    l1 = tkinter.Label(my_w,  text='Item Number : ', width=10,anchor="c" )  
    l1.grid(row=3,column=1)
    tItem = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tItem.grid(row=3,column=2) 
    
    l2 = tkinter.Label(my_w,  text='Quantity : ', width=10,anchor="c" )  
    l2.grid(row=4,column=1)
    tQuantity = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tQuantity.grid(row=4,column=2) 

    l3 = tkinter.Label(my_w,  text='Order : ', width=10,anchor="c" )  
    l3.grid(row=5,column=1)
    tOT = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tOT.grid(row=5,column=2) 

    b1 = tkinter.Button(my_w,  text='Buy', width=10, command=lambda: delete_data_item())  
    b1.grid(row=7,column=2) 

def delete_data_item() :
    my_name = tItem.get("1.0",END) 
    query="DELETE FROM `Item` WHERE ItemNumber = %s"
    myCursor.execute(query,(my_name,))
    db_connection.commit()
    tItem.delete('1.0',END)
    tQuantity.delete('1.0',END) 
    tOT.delete('1.0',END)
    print("Query executed")

def MakePayment() :
    global tNamePay, tPhonePay, tAddressPay, tItemPay

    myCursor.execute("SELECT * FROM Payment")
    my_wo = tkinter.Tk()
    my_wo.title("Requested payments ")
    my_wo.geometry("400x250")
    i=0 
    for Item in myCursor: 
        for j in range(len(Item)):
            e = Entry(my_wo, width=10, fg='blue') 
            e.grid(row=i, column=j) 
            e.insert(END, Item[j])
        i=i+1

    my_w = tkinter.Tk()
    my_w.geometry("400x400")
    my_w.title("Pay")
    l0 = tkinter.Label(my_w,  text='Make Payment',font=('Helvetica', 16), width=30,anchor="c" )
    l0.grid(row=1,column=1,columnspan=4)

    l1 = tkinter.Label(my_w,  text='Name : ', width=10,anchor="c" )  
    l1.grid(row=3,column=1)
    tNamePay = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tNamePay.grid(row=3,column=2) 
    
    l2 = tkinter.Label(my_w,  text='Phone : ', width=10,anchor="c" )  
    l2.grid(row=4,column=1)
    tPhonePay = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tPhonePay.grid(row=4,column=2) 

    l3 = tkinter.Label(my_w,  text='Address : ', width=10,anchor="c" )  
    l3.grid(row=5,column=1)
    tAddressPay = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tAddressPay.grid(row=5,column=2) 

    l3 = tkinter.Label(my_w,  text='Item : ', width=10,anchor="c" )  
    l3.grid(row=5,column=1)
    tItemPay = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tItemPay.grid(row=5,column=2) 

    b1 = tkinter.Button(my_w,  text='Pay', width=10, command=lambda: pay())  
    b1.grid(row=7,column=2)
    print('Make payment')

def pay() :
    my_name = tNamePay.get("1.0",END) 
    my_phone = tPhonePay.get("1.0",END)

    query="DELETE FROM `Payment` WHERE Name = %s AND Phone = %s"
    myCursor.execute(query,(my_name, my_phone,))
    db_connection.commit()
    tNamePay.delete('1.0',END)
    tPhonePay.delete('1.0',END) 
    tAddressPay.delete('1.0',END)
    tItemPay.delete('1.0',END)
    print("Query executed")

def PlaceOrder() :
    print('Place order')

def GiveProject() :
    global tGiveProj, tGiveName, tGiveNum, tGiveVend, tGiveItem, tGiveDetails

    my_w = tkinter.Tk()
    my_w.geometry("400x400")
    my_w.title("Give Project")
    l0 = tkinter.Label(my_w,  text='Give Project',font=('Helvetica', 16), width=30,anchor="c" )
    l0.grid(row=1,column=1,columnspan=4)

    l1 = tkinter.Label(my_w,  text='Project Number : ', width=10,anchor="c" )  
    l1.grid(row=3,column=1)
    tGiveProj = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tGiveProj.grid(row=3,column=2) 
    
    l2 = tkinter.Label(my_w,  text='Customer Name : ', width=10,anchor="c" )  
    l2.grid(row=4,column=1)
    tGiveName = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tGiveName.grid(row=4,column=2) 

    l3 = tkinter.Label(my_w,  text='Customer Number : ', width=10,anchor="c" )  
    l3.grid(row=5,column=1)
    tGiveNum = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tGiveNum.grid(row=5,column=2) 

    l4 = tkinter.Label(my_w,  text='Vendor Number : ', width=10,anchor="c" )  
    l4.grid(row=6,column=1)
    tGiveVend = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tGiveVend.grid(row=6,column=2) 

    l3 = tkinter.Label(my_w,  text='Item : ', width=10,anchor="c" )  
    l3.grid(row=7,column=1)
    tGiveItem = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tGiveItem.grid(row=5,column=2) 

    l4 = tkinter.Label(my_w,  text='Details : ', width=10,anchor="c" )  
    l4.grid(row=8,column=1)
    tGiveDetails = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tGiveDetails.grid(row=6,column=2) 

    b1 = tkinter.Button(my_w,  text='Give Project', width=10, command=lambda: giveTheProject())  
    b1.grid(row=10,column=2) 

    print('Give project')

def giveTheProject() :
    my_name = tGiveProj.get("1.0",END) 
    my_class = tGiveName.get("1.0",END)  
    my_mark = tGiveNum.get("1.0",END)
    my_gender = tGiveVend.get("1.0",END)
    my_item = tGiveItem.get("1.0",END)
    my_details = tGiveDetails.get("1.0",END)
    query="INSERT INTO  `Project` (`ProjectNumber` ,`CustomerName` ,`CustomerNumber` ,`VendorNumber`, `Item`, `Details`) VALUES (%s,%s,%s,%s,%s,%s)"
    my_data=(my_name,my_class,my_mark,my_gender, my_item, my_details)
    myCursor.execute(query,my_data)
    db_connection.commit()
    tGiveProj.delete('1.0',END)
    tGiveName.delete('1.0',END) 
    tGiveNum.delete('1.0',END)
    tGiveVend.delete('1.0',END)
    tGiveItem.delete('1.0',END)
    tGiveDetails.delete('1.0',END)
    print("Query executed")

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
    global tNameReq, tPhoneReq, tAddressReq, tItemReq

    my_w = tkinter.Tk()
    my_w.geometry("400x400")
    my_w.title("Request Payment")
    l0 = tkinter.Label(my_w,  text='Request Payments',font=('Helvetica', 16), width=30,anchor="c" )
    l0.grid(row=1,column=1,columnspan=4)

    l1 = tkinter.Label(my_w,  text='Customer Name : ', width=10,anchor="c" )  
    l1.grid(row=3,column=1)
    tNameReq = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tNameReq.grid(row=3,column=2) 
    
    l2 = tkinter.Label(my_w,  text='Customer Phone: ', width=10,anchor="c" )  
    l2.grid(row=4,column=1)
    tPhoneReq = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tPhoneReq.grid(row=4,column=2) 

    l3 = tkinter.Label(my_w,  text='Customer Address : ', width=10,anchor="c" )  
    l3.grid(row=5,column=1)
    tAddressReq = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tAddressReq.grid(row=5,column=2) 

    l4 = tkinter.Label(my_w,  text='Ordered Item : ', width=10,anchor="c" )  
    l4.grid(row=6,column=1)
    tItemReq = tkinter.Text(my_w,  height=1, width=10,bg='white') 
    tItemReq.grid(row=6,column=2) 

    b1 = tkinter.Button(my_w,  text='Put the item on sale', width=10, command=lambda: requestPayment())  
    b1.grid(row=7,column=2)

def requestPayment() :
    my_name = tNameReq.get("1.0",END) 
    my_class = tPhoneReq.get("1.0",END)  
    my_mark = tAddressReq.get("1.0",END)
    my_gender = tItemReq.get("1.0",END)
    query="INSERT INTO  `Payment` (`Name` ,`Phone` ,`Address` ,`Item`) VALUES (%s,%s,%s,%s)"
    my_data=(my_name,my_class,my_mark,my_gender)
    myCursor.execute(query,my_data)
    db_connection.commit()
    tNameReq.delete('1.0',END)
    tPhoneReq.delete('1.0',END) 
    tAddressReq.delete('1.0',END)
    tItemReq.delete('1.0',END)
    print("Query executed")

def SellsItems() :
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

    b1 = tkinter.Button(my_w,  text='Put the item on sale', width=10, command=lambda: add_data_item())  
    b1.grid(row=7,column=2) 

def add_data_item() :
    my_name = t1.get("1.0",END) 
    my_class = t2.get("1.0",END)  
    my_mark = t3.get("1.0",END)
    my_gender = t4.get("1.0",END)
    query="INSERT INTO  `Item` (`ItemNumber` ,`Quantity` ,`Price` ,`OrderItem`) VALUES(%s,%s,%s,%s)"
    my_data=(my_name,my_class,my_mark,my_gender)
    myCursor.execute(query,my_data)
    db_connection.commit()
    t1.delete('1.0',END)
    t2.delete('1.0',END) 
    t3.delete('1.0',END)
    t4.delete('1.0',END)
    print("Query executed")

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
