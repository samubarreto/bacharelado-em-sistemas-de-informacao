fp = open("numeros.txt","r")
print('Números')
print(fp.read())
print("Mostrando novamente os números")
fp.seek(0)
print(fp.read())
fp.close()