from random import randint

L = []
for _ in range(20):
  L.append(randint(1, 10))
  
x = int(input()); print(L)
print(f'{x} aparece {L.count(x)} vezes na lista.')