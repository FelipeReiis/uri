tipoCha = input()
sugestoes = []
sugestoes = input().split(" ")
count = 0
for i in sugestoes:
  if i == tipoCha:
    count+=1  
print(count)