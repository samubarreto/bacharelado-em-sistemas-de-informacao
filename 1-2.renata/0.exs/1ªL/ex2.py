from unidecode import *
frase = input('Frase: ')
vogais = 0

for letra in frase:
    if unidecode(letra).upper() in 'AEIOU':
        vogais += 1
    
print(f'A frase tem {vogais} vogais.')
