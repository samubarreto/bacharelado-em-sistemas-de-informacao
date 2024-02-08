from random import randint

def fazerSorteio():
  
  for _ in range(100):
    sorteio = randint(1, 6)
    d[sorteio] += 1
    
  for n, qt in d.items():
    print(f'·{n} apareceu {qt} vezes.')
    
  print(f'·O lado sorteado mais vezes foi o {max(d, key=d.get)}')

if __name__ == '__main__':

  d = {1: 0, 2: 0, 3: 0, 4: 0, 5: 0, 6: 0}
  fazerSorteio()
