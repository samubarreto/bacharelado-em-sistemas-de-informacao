agenda = {'Ana': '9999',
          'Beatriz': '9898',
          'Daniel': '99994',
          'Samuel': '99797'}

print(f'Agenda: {agenda}\n')
print(f'Agenda keys: {agenda.keys()}\n')
print(f'Agenda values: {agenda.values()}\n')
print(f'Agenda items: {agenda.items()}\n')

print(f'Só as keys usando dictionary comprehension: {[key for key in agenda]}\n')
print(f'Só os valores usando dictionary comprehension: {[values for values in agenda.values()]}\n')
print(f'Só os registros usando dictionary comprehension: {[registro for registro in agenda.items()]}\n')

#inserir novo registro passando a chave primária e o/os valor/es
agenda['Samuca'] = '989898'
print(f'Registro "Samuca" inserido: {agenda.items()}\n')

'''
Faça um programa em Python que entre com uma palavra e
imprima a quantidade de cada letra na palavra:
'''

palavra = input('Informe uma palavra: ')
d = {}

for letra in palavra:
  d[letra] = d.get(letra, 0) + 1
  
  # if letra in d:
  #   d[letra] += 1
  # else:
  #   d[letra] = 1
    
print(*d.items())