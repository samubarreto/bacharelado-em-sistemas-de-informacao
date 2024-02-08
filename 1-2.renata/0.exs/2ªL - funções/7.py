def éBissexto(ano):
  if ano % 4 == 0 and ano % 100 != 0:
    res = True
  elif ano % 4 == 0 and ano % 100 == 0 and ano % 400 == 0:
    res = True
  else:
    not res
  return res

def validarData(dia, mês, ano):
  bissexto = éBissexto(ano)
  res = 'Data inválida.'
  
  if mês >= 1 and mês <= 12:
    if mês == 2:
        if bissexto and dia >= 1 and dia <= 29:
            res = 'Data válida.'
        elif not bissexto and dia >= 1 and dia <= 28:
            res = 'Data válida.'
    elif mês in [4, 6, 9, 11]:
        if dia >= 1 and dia <= 30:
            res = 'Data válida.'
    else:
        if dia >= 1 and dia <= 31:
            res = 'Data válida.'
  return res

print(validarData(11, 4, 2004))
