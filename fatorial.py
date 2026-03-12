num = int(input("Digite um valor: "))
fat = 1
for i in range(num, 0, -1):
  fat *= i
print("O fatorial de: ",num," é ",fat)
