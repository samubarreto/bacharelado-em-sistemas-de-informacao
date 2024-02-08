def mdc(x, y):
  if y <= x and x % y == 0:
    return y
  elif x < y:
    return mdc(y, x)
  return mdc(y, x % y)

x = int(input("Digite o primeiro número: "))
y = int(input("Digite o segundo número: "))

resultado = mdc(x, y)
print(f"O MDC de {x} e {y} é {resultado}")
