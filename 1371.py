while True:
    N = int(input())    
    if N == 0:
        break    
    portas = []
    count = 1    
    while(count**2 <= N ):
        portas.append(count**2)
        count+= 1    
    for i in range(len(portas)):
        if i < len(portas) - 1:
            print(f"{portas[i]}", end=' ')
        else:
            print(f"{portas[i]}")