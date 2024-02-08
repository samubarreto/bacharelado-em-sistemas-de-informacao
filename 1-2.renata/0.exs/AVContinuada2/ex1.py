def fatorial(num):
  res = 1
  for i in range(2, num + 1):
      res *= i
  return res

def ACMtoDec(acm):
  decimal = 0
  num = len(acm)

  for i in range(num):
      dígito = int(acm[i])
      decimal += dígito * fatorial(num - i)
  return decimal

while True:
  num = input('Número ACM: ')
  if num != 0:
    print(ACMtoDec(num))
  break
