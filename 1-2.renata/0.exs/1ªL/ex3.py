string = input('String: ')
c1 = input('Caractere 1: ')
c2 = input('Caractere 2: ')

replaces = string.count(c1)
string.replace(c1,c2)
        
print(f"O caractere 1 ('{c1}') foi substituido pelo caractere 2 ('{c2}') {replaces} vezes")
