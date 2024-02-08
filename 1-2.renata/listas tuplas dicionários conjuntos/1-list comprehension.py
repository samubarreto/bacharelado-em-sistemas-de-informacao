from random import randint

# lista de 0 até 5
L = [i for i in range(5)]
print(L)

# lista de 5 valores aleatórios de 0 até 9
L = [randint(0,9) for i in range(5)]
print(L)

# pegando números em forma de string, botando numa lista enquanto converte pra inteiro e mostra a somatórias dos valores
ex = input('Valores separados por espaço: ').split()
ex = [int(i) for i in ex]
print(sum(ex))

# matriz 5x5 com números aleatórios de 0 até 9 usando list comprehension
matriz = [[randint(0, 9) for _ in range(5)] for _ in range(5)]
for _ in range(5):
  print(*matriz[_])