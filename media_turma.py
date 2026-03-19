# Leitura de duas notas de prova para 5 alunos e cálculo da média da turma em cada prova

NUM_ALUNOS = 5

notas_prova1 = []
notas_prova2 = []

print("Informe as notas de 5 alunos (0-10).\n")

for i in range(1, NUM_ALUNOS + 1):
    while True:
        try:
            n1 = float(input(f"Aluno {i} - nota da prova 1: "))
            if not (0 <= n1 <= 10):
                raise ValueError
            break
        except ValueError:
            print("Valor inválido. Digite um número entre 0 e 10.")

    while True:
        try:
            n2 = float(input(f"Aluno {i} - nota da prova 2: "))
            if not (0 <= n2 <= 10):
                raise ValueError
            break
        except ValueError:
            print("Valor inválido. Digite um número entre 0 e 10.")

    notas_prova1.append(n1)
    notas_prova2.append(n2)

media_prova1 = sum(notas_prova1) / NUM_ALUNOS
media_prova2 = sum(notas_prova2) / NUM_ALUNOS

print("\nMédia da turma:")
print(f" - Prova 1: {media_prova1:.2f}")
print(f" - Prova 2: {media_prova2:.2f}")
