def insertReg():
  print(f'\n{"="*60}\n\nInserindo novo contato:')
  name = input('\nNome -> ')
  if name in agenda:
    print(f'\nNome já cadastrado com o celular -> {agenda[name]}')
  else:
    number = input('Celular -> ')
    agenda[name] = number
    print(f'\n{name} registrado com sucesso!')

def searchReg():
  print(f'\n{"="*60}\n\nBuscando na Agenda:')
  name = input('\nNome -> ')
  if name in agenda:
    print(f'Contato {name} encontrado com o número: {agenda.get(name)}.')
  else:
    print(f'Contato {name} não encontrado.')

def showList():
  print(f'\n{"="*60}\n\nSua lista de contatos:')
  for name, number in agenda.items():
    print(f'{name} 📞 {number}')

def quitApp():
  print('\nFechando agenda.\n')
  exit()

if __name__ == '__main__':
  
  agenda = {}
  
  while True:
    userOption = input(f'''\n{'='*60}\n1. Inserir
2. Buscar
3. Listar
4. Sair
Opção -> ''')
    insertReg() if userOption == '1' else searchReg() if userOption == '2' else showList() if userOption == '3' else quitApp() if userOption == '4' else None
