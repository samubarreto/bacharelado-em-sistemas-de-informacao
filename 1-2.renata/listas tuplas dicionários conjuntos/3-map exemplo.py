from functools import reduce
from operator import add

# map(função, iterável)
# map(oq fazer, alguma lista ou string)

lista = ['1', '3', '243']
print(lista)
lista = list(map(int, lista)) # n devolve uma lista, por isso do list()
print(lista)

# filter(condição, alguma lista ou string)
# lambda (recebe): (devolve)

valores = [-1, -34, 45, 345, 45, 2, -6]
print(list(filter(lambda x: x > 0, valores)))

def add():
  pass

def pares(x):
  return x % 2 == 0

A = ['1', '2', '3', '4']
B = list(map(int, A))
print(A)
print(B)
C = list(filter(pares, B))
C = list(filter(lambda x: x % 2 == 0, B))
print(C)

soma = reduce(add, B)
print('Soma: ', soma)
