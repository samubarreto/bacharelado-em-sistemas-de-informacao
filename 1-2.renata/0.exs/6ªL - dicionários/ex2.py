from time import sleep

def traduzir(lang):
  
  if str(lang) == 'tradBR':
    palavra = input(f'''\n{"="*60}\n
Português para inglês

Palavra -> ''')
  else:
    palavra = input(f'''\n{"="*60}\n
Inglês para Português

Palavra -> ''')
    
  if palavra in lang:
    print(f'{palavra} = {lang.get(palavra)}')
    sleep(1)
  else:
    print(f'Palavra {palavra} não encontrada.')
    sleep(1)

def quit():
  print(f'\n{"="*60}')
  print('\nFechando o Tradutor.\n')
  print(f'{"="*60}')
  exit()

if __name__ == '__main__':
  while True:
    tradBR = {'arroz': 'rice', 'feijão': 'bean', 'alho': 'garlic', 'macarrão': 'pasta', 'carne': 'meat', 'peixe': 'fish', 'frango': 'chicken', 'batata': 'potato', 'cenoura': 'carrot', 'tomate': 'tomato', 'abacaxi': 'pineapple', 'banana': 'banana', 'morango': 'strawberry', 'uva': 'grape', 'melancia': 'watermelon', 'pão': 'bread', 'queijo': 'cheese', 'ovos': 'eggs', 'leite': 'milk', 'manteiga': 'butter', 'açúcar': 'sugar', 'sal': 'salt', 'pimenta': 'pepper', 'cebola': 'onion', 'salsicha': 'sausage', 'azeite': 'olive oil', 'vinagre': 'vinegar', 'mostarda': 'mustard'} 

    tradEN = {'rice': 'arroz', 'bean': 'feijão', 'garlic': 'alho', 'pasta': 'macarrão', 'meat': 'carne', 'fish': 'peixe', 'chicken': 'frango', 'potato': 'batata', 'carrot': 'cenoura', 'tomato': 'tomate', 'pineapple': 'abacaxi', 'banana': 'banana', 'strawberry': 'morango', 'grape': 'uva', 'watermelon': 'melancia', 'bread': 'pão', 'cheese': 'queijo', 'eggs': 'ovos', 'milk': 'leite', 'butter': 'manteiga', 'sugar': 'açúcar', 'salt': 'sal', 'pepper': 'pimenta', 'onion': 'cebola', 'sausage': 'salsicha', 'olive oil': 'azeite', 'vinegar': 'vinagre', 'mustard': 'mostarda'}

    op = input(f'''\n{"="*60}\n\nEscolha uma opção:
1. Português para Inglês
2. Inglês para Português
3. Sair
Opção -> ''')
    
    traduzir(tradBR) if op == '1' else traduzir(tradEN) if op == '2' else quit() if op =='3' else None
  