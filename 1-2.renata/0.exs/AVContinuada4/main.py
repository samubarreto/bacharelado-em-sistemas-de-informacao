def contarBotas(n, botas):
    pares = {}
    
    for i in range(n):
        tamanho, pé = botas[i].split()
        
        if tamanho in pares:
            if pé.upper() == 'D':
                pares[tamanho]['D'] += 1
            else:
                pares[tamanho]['E'] += 1
        else:
            pares[tamanho] = {'D': 0, 'E': 0}
            if pé.upper() == 'D':
                pares[tamanho]['D'] = 1
            else:
                pares[tamanho]['E'] = 1

    totalParesPossíveis = 0
    for tamanho in pares:
        totalParesPossíveis += min(pares[tamanho].values())
    return totalParesPossíveis

n = int(input('Digite o número de botas individuais entregues -> '))
botas = [input(f'Digite o número e o lado da bota {i+1} -> ') for i in range(n)]

print(f'\n·O número total de pares de botas possíveis de serem formados é -> {contarBotas(n, botas)}.')
