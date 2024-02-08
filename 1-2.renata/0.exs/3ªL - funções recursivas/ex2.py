from random import randint

lista = []

for _ in range(10):
  lista.append(randint(0, 9))

def estáContido(vetor, valor, índice):
  if índice == len(vetor):
    return valor, 'tá n'
  if vetor[índice] == valor:
    return valor, 'tá s'
  return estáContido(vetor, valor, índice+1)

print(estáContido(lista, 5, 0))
print(lista)
