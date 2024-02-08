def éBissexto(ano):
  if ano % 4 == 0 and ano % 100 != 0:
    res = True
  elif ano % 4 == 0 and ano % 100 == 0 and ano % 400 == 0:
    res = True
  else:
    False
  return res

def validarData(dia, mês, ano):
  bissexto = éBissexto(ano)
  res = False
  
  if mês >= 1 and mês <= 12:
    if mês == 2:
        if bissexto and dia >= 1 and dia <= 29:
            res = True
        elif not bissexto and dia >= 1 and dia <= 28:
            res = True
    elif mês in [4, 6, 9, 11]:
        if dia >= 1 and dia <= 30:
            res = True
    else:
        if dia >= 1 and dia <= 31:
            res = True
  return res

def formatarData(dia, mês, ano):
  validarData(dia, mês, ano)
  meses = ['janeiro', 'fevereiro', 'março', 'abril', 'maio', 'junho', 'julho',
           'agosto', 'setembro', 'outubro', 'novembro', 'dezembro']
  res = f'{dia} de {meses[mês-1]} de {ano}'
  return res

print(formatarData(11, 4, 2004))
