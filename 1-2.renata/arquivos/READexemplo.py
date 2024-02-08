fp = open("nomes.txt","r")
print("Todo o arquivo: ")
print(fp.read())
fp.close()

fp = open("nomes.txt","r")
print("Parte do arquivo")
print(fp.read(3))
fp.close()
