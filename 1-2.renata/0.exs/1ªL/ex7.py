from unidecode import *

frase = input('Digite uma frase: ')
pontuaçãoTotal = 0; pontuaçãoVogais = 0; pontuaçãoConsoantes = 0; quantidadeVogais = 0; quantidadeConsoantes = 0

for letra in frase:
    if unidecode(letra).upper() in 'AEIOU':
        pontuaçãoTotal += 5
        pontuaçãoVogais += 5
        quantidadeVogais += 1
        
    elif unidecode(letra).upper() in 'QWRTYPSDFGHJKLÇZXCVBNM':
        pontuaçãoTotal += 10
        pontuaçãoConsoantes += 10
        quantidadeConsoantes += 1
        
print(f'''\nPalavra: '{frase}'\n
      {quantidadeVogais} Vogais -> 5 x {quantidadeVogais} = {pontuaçãoVogais}
      {quantidadeConsoantes} Consoantes -> 10 x {quantidadeConsoantes} = {pontuaçãoConsoantes}
      Código: {pontuaçãoTotal}\n''')