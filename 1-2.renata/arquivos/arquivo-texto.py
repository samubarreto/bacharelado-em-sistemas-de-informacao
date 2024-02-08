'''

r -> leitura / read
w -> escrita, apaga o conteúdo existente / write
a -> escrita, preservando o arquivo / append, ponteiro já vai no fim, precisa usar o .seek(0) caso queira ir pro começo
b -> binário
+ -> leitura e escrita

filepointer = open('números.txt', 'w')
filepointer = open('/desktop/números.py', 'w')

(se ainda não existir o arquivo no diretório, ele cria)

'''

#escrevendo no arquivo txt
fp = open('arquivos/exemplo.txt', 'w', encoding='utf-8')
fp.write('exemplo doq pode ser escrito, strings apenas')
fp.close()

#printando td oq tá escrito no arquivo txt
fp = open('arquivos/exemplo.txt', 'r', encoding='utf-8')
print(fp.read())
fp.close()

#printando as 20 primeiras letras escritas no arquivo txt
fp = open('arquivos/nomes.txt', 'r', encoding='utf-8')

for linha in fp:
  if linha[0] == 'S':
    print(linha, end='')

fp.close()
