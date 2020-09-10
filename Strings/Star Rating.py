'''
input : 0.38
output : half empty empty empty empty

input : 4.5
output : full full full full half
'''
str = "4.38"
str = str.split('.')
res = []
if str[0] == '0' and str[1].startswith('0'):
    res.append("empty")


else:
    for i in range(int(str[0])):
        res.append("full")
    if str[1].startswith('0'):
        res.append("empty")
    else:
        res.append("half")
while len(res) != 5:
    res.append("empty")

print(res)






