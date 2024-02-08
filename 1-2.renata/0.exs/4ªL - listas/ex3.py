from random import randint

L = []
for _ in range(20):
  L.append(randint(1, 50))

print(f'''{L}
maior: {max(L)}
menor: {min(L)}
média: {sum(L)/len(L)}''')