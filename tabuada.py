num = int(input("Digite um valor: "))
print(f"Tabuada do {num}:")
for i in range(1, 11):
    resultado = num* i
    print(f"{num} x {i} = {resultado}")
