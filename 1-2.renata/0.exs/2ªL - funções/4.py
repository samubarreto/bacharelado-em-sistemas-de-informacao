def detectarPrimo(num):
  c = 0
  if num == 1:
    res = f'{num} não é primo'
    return res
  for i in range(1, num+1):
    if num % i == 0:
      res = f'{num} é primo'
      c += 1
      if c > 2:
        res = f'{num} não é primo'
    else:
      res = f'{num} não é primo'
  return res

print(detectarPrimo(97))