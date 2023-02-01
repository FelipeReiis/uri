while True:
    n = int(input())
    void = ' '
    if n == 0:
        break
    words = []
    for word in range(n):
        words.append(input())
    biggest = len(max(words, key=len))
    for i, word in enumerate(words):
        while len(words[i]) != biggest:
            words[i] = ' ' + words[i]
        print(words[i])

