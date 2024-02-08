arq1 = input('Diretório do arquivo 1 -> ')
arq2 = input('Diretório do arquivo 2 -> ')

with open(arq1, 'r', encoding='utf-8') as arquivo1, open(arq2, 'r', encoding='utf-8') as arquivo2, open('C:/Users/samub/OneDrive/Área de Trabalho/code/4.facul/renata/0.exs/7ªL - arquivo texto/arqs/arq3.txt', 'w', encoding='utf-8') as arquivo3:

  conteudo_arquivo1 = arquivo1.read()
  arquivo3.write(conteudo_arquivo1)
  
  arquivo3.write('\n')
  
  conteudo_arquivo2 = arquivo2.read()
  arquivo3.write(conteudo_arquivo2)

print('Arquivo 3 foi criado com sucesso.')
