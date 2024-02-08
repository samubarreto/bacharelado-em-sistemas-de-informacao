def elevar(num, expoente):
  if expoente == 0:
    return 1
  return num * elevar(num, expoente-1)
print(elevar(2, 8))
