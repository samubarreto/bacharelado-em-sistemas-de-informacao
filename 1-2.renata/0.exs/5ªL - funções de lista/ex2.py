# def quadrado(x):
#     return x ** 2

# def quadrados(n):
#     return list(map(quadrado, range(1, n + 1)))

# print(quadrados(20))

def quadrados(n):
    return list(map(lambda x: x ** 2, range(1, n + 1)))

print(quadrados(20))
