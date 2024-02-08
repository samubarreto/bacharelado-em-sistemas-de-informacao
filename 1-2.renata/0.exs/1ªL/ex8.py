from unidecode import *

fraseCodificada = ''
alfabeto = list('ABCDEFGHIJKLMNOPQRSTUVWXYZ')
frase = unidecode(input('Digite uma frase: ')).upper()

for letra in frase:
    if letra == ' ':
        novaLetra = ' '
    else:
        for letraA in alfabeto:
            for i in range(26):
                if letra == alfabeto[i]:
                    try:
                        novaLetra = alfabeto[i+3]
                    except IndexError:
                        novaLetra = alfabeto[i-23]
    fraseCodificada += novaLetra
print(fraseCodificada)

##########################################################

# texto = unidecode(input('Digite um texto: ').upper())
# cripto = ''

# for letra in texto:
#     if letra == ' ':
#         cripto += ' '
#     else:
#         cripto += chr(ord(letra)+3)
# print(cripto)
