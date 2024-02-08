import os
if os.path.exists("numeros.txt"):
  os.remove("numeros.txt")
else:
  print("O arquivo não existe!")