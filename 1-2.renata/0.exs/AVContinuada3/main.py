#inputs
n = int(input())
listaDeCandidatos = [str(input()) for _ in range(n)]
listaDeQuantidadeDeVotos = [int(input()) for _ in range(n+2)]

#processamento de dados
quantidadeDeVotos = sum(listaDeQuantidadeDeVotos)
votosVálidos = quantidadeDeVotos - sum(listaDeQuantidadeDeVotos[n:n+2])

#primeiro lugar
votosDoVencedor = max(listaDeQuantidadeDeVotos[0:n])
posiçãoDoVencedor = listaDeQuantidadeDeVotos[0:n].index(max(listaDeQuantidadeDeVotos[0:n]))
candidatoEmPrimeiroLugar = listaDeCandidatos[posiçãoDoVencedor]

#segundo lugar
listaDeQuantidadeDeVotos.pop(posiçãoDoVencedor)
posiçãoDoSegundoLugar = listaDeQuantidadeDeVotos[0:n].index(max(listaDeQuantidadeDeVotos[0:n]))
candidatoEmSegundoLugar = listaDeCandidatos[posiçãoDoSegundoLugar]

#exibindo resultados
if votosVálidos/2 >= votosDoVencedor:
  print(f'''\nHaverá segundo turno entre:
{candidatoEmPrimeiroLugar}
{candidatoEmSegundoLugar}
Total de votos: {quantidadeDeVotos};
Votos válidos: {votosVálidos}.''')
else:
  print(f'''\n{candidatoEmPrimeiroLugar} foi o vencedor da eleição;
Total de votos: {quantidadeDeVotos};
Votos válidos: {votosVálidos}.''')
