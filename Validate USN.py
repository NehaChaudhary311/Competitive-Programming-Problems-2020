#Validate the USN
#Input : 1NT17CS114
#1st character should start from 1
#next 2 char(2,3) should be NT
#next 2 char(4,5)->digit should be (0-9)(0-9)
#next 2 char (6,7) ->(CS/IS/EC/EE)
#Last 3 (8,9,10)->digit(0-9)(0-9)(0-9)

import re
txt = input()
ident = r"1NT[0-9][0-9][CS,IS,ECE, EEE][0-9][0-9][0-9]"
if(re.search(ident, txt)):  
    print("Valid USN")  
          
else:  
    print("Invalid USN")
