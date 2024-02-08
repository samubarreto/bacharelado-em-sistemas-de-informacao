def comb(n, k):
    if k == 1:
        return n
    elif k == n:
        return 1

    result = 1
    for i in range(1, k + 1):
        result *= n - i + 1
        result //= i

    return result

n = int(input("Digite o valor de n: "))
k = int(input("Digite o valor de k: "))

resultado = comb(n, k)
print(f"Comb({n}, {k}) = {resultado}")
 