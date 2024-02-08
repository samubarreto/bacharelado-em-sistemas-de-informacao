fp = open("numeros.txt","r")
print(fp.readline())
fp.close()

#Lendo linha por linha
fp = open("numeros.txt","r")
for n in fp:
    print(n,end="")
fp.close()

#Lendo linha por linha em uma lista
fp = open('numeros.txt', 'r')
numeros = []
for num in fp:
    num = num.strip()
    numeros.append(num)
    print(numeros)
fp.close()