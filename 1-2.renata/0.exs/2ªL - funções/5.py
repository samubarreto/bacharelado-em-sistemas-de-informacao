def imprimirPrimos(início, fim):
  listaPrimos = []
  for num in range(início, fim+1):
    c = 0
    if num == 1:
      pass
    else:
      for i in range(1, num+1):
        if num % i == 0:
          c += 1
      if c == 2:
        listaPrimos.append(num)
  return listaPrimos
      
print(imprimirPrimos(1, 97))