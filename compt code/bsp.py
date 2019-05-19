# finding first occurence of elements
from bisect import bisect_left, bisect_right
def binary_search(a, x):
    i = bisect_right(a, x)
    if i != len(a)+1 and a[i-1] == x:
        return (i-1)
    else:
         return -1
a = [1, 2, 4, 4, 5]
x = int(4)
res = binary_search(a, x)
if res == -1:
    print(x, "is absent")
else:
    print("last occurence of ", x, "is at", res)

