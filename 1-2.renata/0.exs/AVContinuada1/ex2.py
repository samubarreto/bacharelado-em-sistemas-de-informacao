num_palavras = int(input("Quantas palavras você deseja verificar? "))
resultados = []

for _ in range(num_palavras):
    palavra = input("Digite uma palavra em minúsculas: ").strip()

    if palavra == "one":
        resultados.append(1)
    elif palavra == "two":
        resultados.append(2)
    elif palavra == "three":
        resultados.append(3)
    else:

        letras_diferentes_one = 0
        letras_diferentes_two = 0
        letras_diferentes_three = 0
        
        for i in range(min(len(palavra), 3)):  
            if palavra[i] != "one"[i]:
                letras_diferentes_one += 1
    
        for i in range(min(len(palavra), 3)): 
            if palavra[i] != "two"[i]:
                letras_diferentes_two += 1
        
        for i in range(min(len(palavra), 5)):  
            if palavra[i] != "three"[i]:
                letras_diferentes_three += 1
       
        if letras_diferentes_one == 1:
            resultados.append(1)
        elif letras_diferentes_two == 1:
            resultados.append(2)
        elif letras_diferentes_three == 1:
            resultados.append(3)
        else:
            resultados.append(0) 

print("Valores numéricos das palavras:")
for valor in resultados:
    print(valor)
