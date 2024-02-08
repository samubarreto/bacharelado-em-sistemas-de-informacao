def media_digitos(n):
    digitos = [int(d) for d in str(n)]
    return sum(digitos) / len(digitos)

entry = int(input())
print(media_digitos(entry))
