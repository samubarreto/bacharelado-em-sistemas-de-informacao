from random import randint

L1 = []
for _ in range(10):
  L1.append(randint(1, 50))
  
L2 = []
for _ in range(10):
  L2.append(randint(1, 50))
  
L3 = []
for i in range(0, 10, 2):
  L3.append(L1[i])
  L3.append(L2[i+1])
    
print(L1); print(L2); print(L3)