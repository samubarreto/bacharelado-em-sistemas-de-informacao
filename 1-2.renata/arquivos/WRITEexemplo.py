fp = open("numeros.txt","w")
for num in range(1,10):
    fp.write(f"{num}\n")
fp.close()


arq = open("nomes.txt","w")
arq.write("Renata\n")
arq.write("Beatriz\n")
arq.write("Marcelo\n")
arq.write("Paulo\n")
arq.close()

arq = open("nomes.txt","r+")
arq.write("Jose dos Santos\n")
arq.close()

