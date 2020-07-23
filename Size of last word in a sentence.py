#Input : My name is not Aman
#Output : 4 (Size of Aman is 4)

str1 = input().split()
x = len(str1)
print(len(str1[x-1]))

#Another method
print(len(input().split()[-1]))
