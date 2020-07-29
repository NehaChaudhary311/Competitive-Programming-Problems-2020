'''
Password checking based on the conditions given
-Minimum 8 characters and maximum 15
-The alphabets must be between [a-z]
-At least one alphabet should be of Upper Case [A-Z]
-At least 1 number or digit between [0-9].
-Shouldn't contain spaces
'''

import re 
password = input()
flag = 0
while True:   
    if (len(password)<8 and len(password) > 15): 
        flag = -1
        print("Pwd size is not in the range of size limits")
        break
    elif not re.search("[a-z]", password): 
        flag = -1
        print("Pwd should contain at least one small letter")
        break
    elif not re.search("[A-Z]", password): 
        flag = -1
        print("Pwd should contain at least one capital letter")
        break
    elif not re.search("[0-9]", password): 
        flag = -1
        print("Pwd should contain at least one number")
        break
    #spaces
    elif re.search("\s", password): 
        flag = -1
        print("Pwd shouldn't contain spaces")
        break
    else: 
        flag = 0
        print("Valid Password") 
        break
  
if flag ==-1: 
    print("Invalid Password") 
