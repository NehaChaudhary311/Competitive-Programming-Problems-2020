#Input : 3, 6, 0, 8, 0, 1 ( you will be given unsorted array)
#Output : 3, 6, 8 , 1, 0, 0 (Shift the zero to the end)

arr = list(map(int, input().split()))
arr1 = list()
count_of_zeroes = 0;
for i in arr:
    if i != 0:
        arr1.append(i)
    else:
        count_of_zeroes += 1
for i in range(count_of_zeroes):
    arr1.append(0)

print(arr1)
