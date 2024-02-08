def fatorar(num):
  res = 1
  for i in range(num, 0, -1):
    res *= i
  return res

def somarAlgarismos(num):
  somatória = 0
  while num > 0:
    somatória += num % 10
    num //= 10
  return somatória

num = int(input())
print(f'{num}! = {fatorar(num)} e soma dos dígitos = {somarAlgarismos(fatorar(num))}')