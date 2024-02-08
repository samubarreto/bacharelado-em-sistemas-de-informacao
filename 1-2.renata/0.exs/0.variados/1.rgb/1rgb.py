listaDeTuplas = []

def iniciar(opção):
  if opção == 1:
    inserirCor()
  elif opção == 2:
    fazerConsulta()
  else:
    exibirListagem()

def inserirCor():
  print('='*50)
  nomeCor = input('\nInsira o nome da cor: ')
  codeCor = input('Insira o código da cor: ')
  listaDeTuplas.append((nomeCor, codeCor))
  print(f'\nCor {nomeCor} adicionada.')

def fazerConsulta():
  print('='*50)
  nomeCor = input('\nQual cor você quer consultar? ')
  código = None
  
  for tupla in listaDeTuplas:
    if nomeCor == tupla[0]:
      código = tupla[1]
      break
    
  if código == None:
    print(f'\nCor {nomeCor} não cadastrada.\n')
  else:
    print(f'\nA cor {nomeCor} tem o código {código}.\n')

def exibirListagem():
  print(f'''{'='*50}
Cores: {listaDeTuplas}''')

while True:
  opção = input((f'''{'='*50}
  1. Inserção
  2. Consulta
  3. Listagem
  R: '''))
  if opção not in ('1', '2', '3'):
    print('\nOpção inválida, tente novamente')
  else:
    iniciar(int(opção))
