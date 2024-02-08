def potênciação(base, expoente):
  res = 1
  for _ in range(expoente):
      res *= base
  return res

print(potênciação(2, 5))