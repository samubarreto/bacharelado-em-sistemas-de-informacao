palavra = input('Digite alguma palavra: ')

if palavra == palavra[::-1]:
    print(f'{palavra} é palíndromo.')
else:
    print(f'{palavra} não é palíndromo.')
