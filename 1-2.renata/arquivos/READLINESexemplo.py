fp = open("numeros.txt","r")
print(fp.readlines())
fp.close()

fp = open("numeros.txt","r")
print(fp.readlines(3))
fp.close()

try:
   with open('numeros.txt', 'r') as arquivo:
       for linha in arquivo.readlines():
           print(linha,end="")
except IOError:
    print('Arquivo não encontrado!')

