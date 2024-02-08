arq = open('0.exs/0.variados/arquivos/atletas.txt', 'a', encoding='utf-8')
n = int(input('Insira a quantidade de atletas -> '))

for i in range(n):
  nome = input(f'\nNome do atleta {i+1} -> ')
  altura = float(input(f'Altura do atleta {i+1} -> '))
  peso = float(input(f'Peso do atleta {i+1} -> '))
  imc = peso/(altura**2)
  
  arq.write(f'{nome};{altura};{peso};{imc:.2f}\n')
