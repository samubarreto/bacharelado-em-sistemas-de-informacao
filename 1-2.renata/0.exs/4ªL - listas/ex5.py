led = {1 : 2,
       2 : 5,
       3 : 5,
       4 : 4,
       5 : 5,
       6 : 6,
       7 : 3,
       8 : 7,
       9 : 6,
       0 : 6}

casos = int(input())

for caso in range(casos):
  num = input()
  soma = 0
  for digit in num:
    soma += led.get(int(digit))
  print(f'{soma} leds')