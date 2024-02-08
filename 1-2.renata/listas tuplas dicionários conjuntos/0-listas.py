# listas tuplas dicionários e conjuntos
# são estruturas de dados

# lista abre com []

listaExemplo = [15, 8, 9, 7, 3, 2, 1]
listaExemplo.append(3)
print(f'''{listaExemplo}
listaExemplo[2] == {listaExemplo[2]}
max(listaExemplo) == {max(listaExemplo)}
min(listaExemplo) == {min(listaExemplo)}
sum(listaExemplo) == {sum(listaExemplo)}
sum(listaExemplo)/len(listaExemplo) == {sum(listaExemplo)/len(listaExemplo)}''')

del listaExemplo[0]
listaExemplo.pop()
listaExemplo.remove(8)

print(f'''{listaExemplo}''')

stringExemplo = 'paralelepipedo'
print('\n·stringExemplo =',stringExemplo)

converterEmLista = list(stringExemplo)
print('\t·converterEmLista =',converterEmLista)

copiarLista1 = converterEmLista.copy()
print('\t\t·copiarLista1 =',copiarLista1)

copiarLista2 = converterEmLista[:]
print('\t\t\t·copiarLista2 =',copiarLista2)

print('\t\t\t\t·Entre o 3 e o 6 índice =', copiarLista2[3:7])

for i, n in enumerate(copiarLista2):
  print(i, n)
  
print()
  
for i, n in enumerate(copiarLista2[3:7]):
  print(i, n)