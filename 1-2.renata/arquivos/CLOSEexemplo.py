f = open("numeros.txt", "w")
f.close()

try:
   f = open("numeros.txt", "w")
finally:
   f.close()

try:
    with open("numeros.txt", "w") as f:
        print("Arquivo numeros.txt criado")
except IOError:
    print("Arquivo não criado!")
