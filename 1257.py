inp = int(input())
for i in range(inp):
    inp1 = int(input())
    tot = 0
    for j in range(inp1):
        inp2 = input()
        for k, l in enumerate(inp2):
            tot += j + k + (ord(l) - 65 )
    print(tot)