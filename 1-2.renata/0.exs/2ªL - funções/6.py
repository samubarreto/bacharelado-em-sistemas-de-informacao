from random import randint

L = []
for i in range(10):
  C = []
  for j in range(10):
    C.append(randint(10, 99))
  L.append(C)
  
L2 = []
for i in range(10):
    C2 = []
    for fila in L:
        C2.append(fila[i])
    L2.append(C2)
  
for i in range(10):
  print(L[i])
  
def maiorElementoColuna(num):
  return max(L2[num])

def menorElementoLinha(num):
  return min(L[num])

print(maiorElementoColuna(6))
print(menorElementoLinha(3))

