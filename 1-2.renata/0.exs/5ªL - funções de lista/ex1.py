# from functools import reduce

# def soma_nat(n):
#     return reduce(lambda x, y: x + y, range(1, n + 1))

# print(soma_nat(6))

def soma_nat(n):
    return sum(range(1, n+1))
    
print(soma_nat(6))
