#peguei a regra prática pro cálculo de verificação do CPF desse site: https://www.somatematica.com.br/faq/cpf.php

while True:
    cpf = input('Digite seu CPF, apenas os números: ')
    if cpf.isdigit() and len(cpf) == 11:
        break
    else:
        print('''
=======================================================
ERRO. CPF inválido, digite apenas os 11 dígitos do CPF.
=======================================================''')
        
válido = False

#checando o primeiro dígito verificador
n = 10; soma = 0
for i in range(9):
    soma += int(cpf[i]) * n
    n -= 1

if soma % 11 == 0 or soma % 11 == 1:
    if int(cpf[9]) == 0:
        válido = True
    else:
        válido = False
elif 10 >= soma % 11 >= 2:
    if int(cpf[9]) == 11 - soma % 11:
        válido = True
    else:
        válido = False
else:
    válido = False
    
#checando o segundo dígito verificador
n = 11; soma = 0
for i in range(10):
    soma += int(cpf[i]) * n
    n -= 1

if soma % 11 == 0 or soma % 11 == 1:
    if int(cpf[10]) == 0:
        válido = True
    else:
        válido = False
elif 10 >= soma % 11 >= 2:
    if int(cpf[10]) == 11 - soma % 11:
        válido = True
    else:
        válido = False
else:
    válido = False

if válido:
    print('''
=======================================================
                      CPF VÁLIDO.
=======================================================''')
else:
    print('''
=======================================================
                     CPF INVÁLIDO.
=======================================================''')