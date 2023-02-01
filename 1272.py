n = int(input())
word = ''
for i in range(n):
    string = input()
    for i, ch in enumerate(string):
        if i == 0 and ch >= 'a' and ch <= 'z':
            word += ch
        if ch >= 'a' and ch <= 'z' and string[i-1] == ' ' and i > 0:
            word += ch
    word = word.rstrip('\n')
    print(word)
    word = ''
