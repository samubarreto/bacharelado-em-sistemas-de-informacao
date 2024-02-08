#receber número de linhas no máximo 26 e letras maiusculas ou minusculas, saída: uma pirâmide de alfabeto, preenchendo os espaços vazios com .
import string

entry = input()
númeroDeLinhas, capital = entry.split()
númeroDeLinhas = int(númeroDeLinhas)
cont = 1; nPontos = 25
    
if capital == 'minusculas':
  for i in range(int(númeroDeLinhas+1)):
    print('. '*nPontos, end='')
    nPontos -= 1
    for j in range(cont):
      print(f'{string.ascii_lowercase[j]}', end=' ')
    cont += 1
    print()
  cont = 0
  
elif capital == 'maiusculas':
  for i in range(int(númeroDeLinhas+1)):
    print('. '*nPontos, end='')
    nPontos -= 1
    for j in range(cont):
      print(f'{string.ascii_uppercase[j]}', end=' ')
    cont += 1
    print()
  cont = 0
