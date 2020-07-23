#Enter 1st full name:
#ABC XYZ
#Enter 2nd full name:
#PQR EFG

#Output:
#ABC EFG
#PQR XYZ

str1 = input("Enter 1st full name : ")
str2 = input("Enter 2nd full name : ")

str11, str12 = str1.split(" ")
str21, str22 = str2.split(" ")

print(str11, str21)
print(str12, str22)
