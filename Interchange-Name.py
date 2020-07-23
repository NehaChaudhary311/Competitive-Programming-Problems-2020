#Enter 1st full name:
#ABC XYZ
#Enter 2nd full name:
#PQR EFG

#Output:
#ABC XYZ
#PQR EFG

str1 = input("Enter 1st full name : ")
str2 = input("Enter 2nd full name : ")

str11, str12 = str1.split(" ")
str21, str22 = str2.split(" ")

print(str11, str21)
print(str12, str22)


#Another method
 str1 = input("Enter 1st full name : ).split()
 str2 = input("ENter 2nd full name : ).split()
 print(a[0], b[0])
 print(b[1], a[1])
 
