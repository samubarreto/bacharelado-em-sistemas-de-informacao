from functools import reduce
from random import randint

w = [randint(1, 5) for _ in range(5)]
w.sort()
print(w)

def prod_lista(lista):
  return reduce(lambda x, y: x * y, lista)

print(prod_lista(w))
