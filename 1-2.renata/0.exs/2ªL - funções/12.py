def validarEntrada(entrada):
  while True:
    try:
      entrada = int(entrada)
      if entrada % 2 == 1:
        return entrada
      else:
        entrada = input('\nEntrada inválida. Tente novamente: ')
    except:
      entrada = input('\nEntrada inválida. Tente novamente: ')
      
def fatorarDuplo(entrada):
  res = 1
  for i in range(1, entrada+1, +2):
    res *= i
  return res

entrada = input('Insira um número inteiro ímpar: ')

entrada = validarEntrada(entrada)
print(f'{entrada}!! = {fatorarDuplo(entrada)}')
