#include <stdio.h>

int main(void) {
    const int NUM_ALUNOS = 5;
    float nota1, nota2;
    float soma1 = 0.0f, soma2 = 0.0f;

    printf("Informe as notas de 5 alunos (0-10)\n\n");

    for (int i = 1; i <= NUM_ALUNOS; i++) {
        do {
            printf("Aluno %d - nota da prova 1: ", i);
            if (scanf("%f", &nota1) != 1) {
                nota1 = -1.0f;
                // limpar entrada inválida
                int c;
                while ((c = getchar()) != '\n' && c != EOF) {}
            }
        } while (nota1 < 0.0f || nota1 > 10.0f);

        do {
            printf("Aluno %d - nota da prova 2: ", i);
            if (scanf("%f", &nota2) != 1) {
                nota2 = -1.0f;
                int c;
                while ((c = getchar()) != '\n' && c != EOF) {}
            }
        } while (nota2 < 0.0f || nota2 > 10.0f);

        soma1 += nota1;
        soma2 += nota2;
    }

    printf("\nMédia da turma:\n");
    printf(" - Prova 1: %.2f\n", soma1 / NUM_ALUNOS);
    printf(" - Prova 2: %.2f\n", soma2 / NUM_ALUNOS);

    return 0;
}
