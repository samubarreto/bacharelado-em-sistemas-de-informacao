#C:/Users/samub/arquivo-teste.txt

arquivo = input('Digite o diretório do arquivo de texto qualquer -> ')

try:
  arq = open(arquivo, 'r', encoding='utf-8')
  linhas = len(arq.readlines())
  print(f'\n·O arquivo tem {linhas} linhas')

except:
  print(f'\n·Arquivo não encontrado.')
