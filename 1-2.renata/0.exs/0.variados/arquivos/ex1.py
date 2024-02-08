arq = open('0.exs/0.variados/arquivos/notas.txt', 'a', encoding='utf-8')
n = int(input('Insira a quantidade de alunos -> '))

for i in range(n):
  nome = input(f'\nNome do aluno {i+1} -> ')
  nota1 = float(input(f'Nota 1 -> '))
  nota2 = float(input(f'Nota 2 -> '))
  
  arq.write(f'{nome};{nota1};{nota2}\n')
