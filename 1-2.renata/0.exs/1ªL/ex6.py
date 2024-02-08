palavra = input('Digite uma palavra: ')
letra = len(palavra) // 2

if len(palavra) % 2 == 0:
    print(palavra[letra-1], palavra[letra])
else:
    print(palavra[letra])
