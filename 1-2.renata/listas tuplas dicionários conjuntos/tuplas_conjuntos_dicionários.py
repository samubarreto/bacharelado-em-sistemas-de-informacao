# tupla é inalterável, uma lista de elementos **não mutável**
# estrutura básica de uma tupla:

from random import randint

def maiorMenor(lista):
  return max(lista), min(lista)

L = [randint(1, 20) for _ in range(10)]
print(L)

maior, menor = maiorMenor(L)
print(maior, menor, type(maior))

#####TUPLA
tupla1 = ()
tupla2 = tuple()
tupla3 = 1, 2, 3
print(type(tupla1))

#RETORNO DE UMA FUNÇÃO COM MAIS DE UM VALOR É UMA TUPLA \/
retorno = maiorMenor(L)
print('Tipo do retorno: ', type(retorno))

#####CONJUNTO
conjunto1 = set()
conjunto2 = {1, 2}
print('Tipo conjunto: ', type(conjunto1))

#####DICIONÁRIO
dicionário1 = {'key': 'value, pode ser uma lista aq, tupla, qlr coisa'}
print('Tipo dicionário: ', type(dicionário1))

cores = [('FF0000', 'RED'), ('00FF00', 'GREEN')]
print('Cor:', cores[0][0], cores[0][1])

#####

a, b, *c = input().split() ## o * faz o c ser uma lista e bota todo resto nele
print(a, b, c)
print(type(c))