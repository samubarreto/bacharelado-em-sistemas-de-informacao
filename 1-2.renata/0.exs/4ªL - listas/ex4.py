from random import randint

L = []
for _ in range(20):
  L.append(randint(1, 20))

#L.sort() organiza em ordem crescente
L.sort()
print(L)

num = int(input())

while num in L:
  L.remove(num)
print(L)