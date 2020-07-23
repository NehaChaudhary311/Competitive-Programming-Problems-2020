#Anangrams
#input : 
#FIrst String : Aman
#Second String : nmaa
#Output : A/NA - frequency of each character in first string should be same with the frequency in secodn strign

str1 = input("First string :")
str2 = input("Second string :")
count1 = [0] * 256
count2 = [0] * 256
#Ord returns the unicode code point value of str[i]
for i in str1: 
    count1[ord(i)]+= 1
  
for i in str2: 
    count2[ord(i)]+= 1

if len(str1) != len(str2): 
        print("Not an anagrma")
  
# Compare count arrays 
for i in range(26): 
    if count1[i] != count2[i]: 
        print("Not an anagram")
  
print("Anagram")

