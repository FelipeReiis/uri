import math
inp = int(input())
for i in range(inp):
    x,y = list(map(int, input().split()))
    k = (x * 1000) / (y * 1000)
    if(k <= 1):
        print(2)
    else:
        print(math.ceil(k))