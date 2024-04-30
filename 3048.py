n = int(input())
lista = []
aux = 0
for i in range(n):
  valor = input()
  if valor != aux:
    lista.append(valor)
  aux = valor
print(len(lista))