conteudo = ['a\n','b\n','c\n','d\n']
print(conteudo)
arquivo = open('texto.txt', 'w')
arquivo.writelines(conteudo)