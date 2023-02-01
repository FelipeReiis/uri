inp = int(input())
fechado = []
aberto = []
for i in range(1, inp + 1):
  fechado.append(i)
  j = i + 1
  while j <= i:
    if fechado[j] % i == 0:
      aberto.append(fechado.pop(fechado[j]))
    j+=1

