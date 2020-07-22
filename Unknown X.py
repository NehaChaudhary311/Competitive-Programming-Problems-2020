string = input()

a,b = string.split("+")
b,c = b.split("=")

print(a)
print(b)
print(c)

if a =='X':
    c, b = int(c), int(b)
    print(c-b)
if b == 'X':
    c,a = int(c), int(a)
    print(c-a)
if c == 'X':
    a,b = int(a), int(b)
    print(a+b)
