#recursividade em uma função é quando ela usa ela mesma, um laço repetitivo com ela mesma, tem que ter um ponto de parada

# 6! = 6.5.4.3.2.1 = 720
# 6! = 6.5!
# 5! = 5.4!
# 4! = 4.3!
# 3! = 3.2!
# 2! = 2.1!

# #função fatorial recursiva
# def fatorial(n):
#   if n==1:
#     return 1
#   return n * fatorial(n-1)

# print(fatorial(6))

# #função soma de uma lista de números
# def listSum(numList):
#   theSum = 0
#   for i in numList:
#     theSum += i
#   return theSum

# print(listSum([1,3,5,7,9]))

#função soma de uma lista de números recursiva
def listSum(numList):
  if len(numList) == 1:
    return numList[0]
  else:
    return numList[0] + listSum(numList[1:])

print(listSum([1,3,5,7,9]))