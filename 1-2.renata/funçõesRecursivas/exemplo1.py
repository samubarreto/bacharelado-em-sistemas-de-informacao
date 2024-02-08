#sequência de fibonacci usando função recursiva 1, 1, 2, 3, 5, 8...

# def fib(T):
  

# print(fib(10))

def fib(T):
    # Verifica se T é menor ou igual a 0.
    if T <= 0:
        return 0
    # Verifica se T é igual a 1.
    elif T == 1 or T == 2:
        return 1
    # Caso nenhum dos casos anteriores seja verdadeiro,
    # faz chamadas recursivas para calcular o T T.
    return fib(T - 1) + fib(T - 2)

# Exemplo de uso
print(fib(10))
