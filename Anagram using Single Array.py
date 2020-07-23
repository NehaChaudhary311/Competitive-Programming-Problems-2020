#Anangrams
#input : 
#FIrst String : Aman
#Second String : nmaa
#Output : A/NA - frequency of each character in first string should be same with the frequency in secodn strign

#Using only a single array
import itertools

str1 = input("First string :")
str2 = input("Second string :")
if len(str1) != len(str2): 
    print("Not an anagram")
flag = 0

#initialising an array of 256 size to store the unicode of each character
count = [0] * 256

#Ord returns the unicode code point value of str[i]
for (i, j) in itertools.zip_longest(str1,str2): 
    count[ord(i)]+= 1
    count[ord(j)]-=1
    
for x in count:
    if x != 0:
        flag = -1
        break
    else:
        pass;

if flag == -1:
    print("Not an anagram")
else:
    print("Anagram")
