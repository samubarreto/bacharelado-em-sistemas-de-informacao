f = open('teste.txt', 'w+')
f.write('abcdef0123456789')
f.seek(5)     # Vai para o sexto byte do arquivo
print(f.read(4))
print(f.tell())