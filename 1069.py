inp = int(input())
for i in range(inp):
    string = input()
    diamond = 0
    openn = 0
    for j in range(len(string)):
        if string[j] == "<":
            openn +=1
        if string[j] == ">" and openn > 0:
            diamond += 1
            openn -=1
    print(diamond)