#include <stdio.h>

typedef struct {
    float altura;
    float peso;
    int idade;
} Pessoa;

float calcularMCA(Pessoa pessoa) {
    float mca = (pessoa.altura * pessoa.altura * pessoa.peso) / pessoa.idade;
    return mca;
}

int main() {
    int numPessoas;

    printf("Digite o número de pessoas: ");
    scanf("%d", &numPessoas);

    Pessoa pessoas[numPessoas];

    for (int i = 0; i < numPessoas; i++) {
        printf("\nDados da pessoa %d:\n", i + 1);

        printf("Digite a altura (em metros): ");
        scanf("%f", &pessoas[i].altura);

        printf("Digite o peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);
    }

    printf("\nResultados:\n");

    for (int i = 0; i < numPessoas; i++) {
        float mca = calcularMCA(pessoas[i]);

        printf("\nPessoa %d:\n", i + 1);
        printf("Altura: %.2f metros\n", pessoas[i].altura);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("MCA: %.2f\n", mca);
    }

    return 0;
}
