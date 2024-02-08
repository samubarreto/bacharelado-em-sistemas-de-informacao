from random import randint

w = [randint(1, 20) for _ in range(10)]
w.sort()
print(w)

def indices_pares(w):
    return list(map(lambda i: w[i], range(1, len(w), 2)))

print(indices_pares(w))
