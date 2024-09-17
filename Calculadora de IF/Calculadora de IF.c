#include <stdio.h>
#include <stdlib.h>

// Função para calcular o imposto com base na faixa de renda
double calcular_imposto(double renda) {
    double imposto = 0.0;

    if (renda <= 1000.0) {
        // Isento de imposto
        imposto = 0.0;
    } else if (renda <= 5000.0) {
        // 10% para a faixa entre 1000,01 e 5000
        imposto = (renda - 1000.0) * 0.10;
    } else {
        // 10% para a faixa até 5000 e 20% para o que exceder
        imposto = (5000.0 - 1000.0) * 0.10 + (renda - 5000.0) * 0.20;
    }

    return imposto;
}

int main() {
    double renda;

    while(1){
    // Solicitar a renda do usuário
    printf("\nDigite a sua renda: R$ ");
    scanf("%lf", &renda);

    // Calcular o imposto
    double imposto = calcular_imposto(renda);

    // Exibir o resultado
    printf("O imposto devido e: R$ %.2lf\n", imposto);

    system("pause");
    }
    return 0;
}