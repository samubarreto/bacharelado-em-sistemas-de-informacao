import math

def calcularDelta(a, b, c):
    return b**2 - 4*a*c

def calcular_raizes(a, b, c):
    delta = calcularDelta(a, b, c)
    
    if a == 0:
        print("Não é equação de segundo grau")
    elif delta < 0:
        print("Não existe raiz")
    elif delta == 0:
        raiz = -b / (2*a)
        print(f"Raiz única: {raiz}")
    else:
        raiz1 = (-b + math.sqrt(delta)) / (2*a)
        raiz2 = (-b - math.sqrt(delta)) / (2*a)
        print(f"Raiz 1: {raiz1}\nRaiz 2: {raiz2}")

# Solicita os coeficientes a, b e c do usuário
a = float(input("Digite o coeficiente a: "))
b = float(input("Digite o coeficiente b: "))
c = float(input("Digite o coeficiente c: "))

calcular_raizes(a, b, c)
