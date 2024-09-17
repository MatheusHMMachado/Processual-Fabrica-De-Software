#include <stdio.h>
#include <stdlib.h>


int main() {
    // Variáveis
    float totalCompra;
    float desconto;
    float totalComDesconto;

    while(1){
    // Solicita o valor da compra ao usuário
    printf("\nDigite o valor total da compra: R$ ");
    scanf("%f", &totalCompra);

    // Calcula o desconto baseado na tabela fornecida
    if (totalCompra > 100.00) {
        desconto = 0.10; // 10% de desconto
    } else if (totalCompra > 50.00) {
        desconto = 0.05; // 5% de desconto
    } else {
        desconto = 0.00; // Sem desconto
    }

    // Calcula o total com desconto
    totalComDesconto = totalCompra - (totalCompra * desconto);

    // Exibe o resultado
    printf("Valor total da compra: R$ %.2f\n", totalCompra);
    printf("Desconto aplicado: %.0f%%\n", desconto * 100);
    printf("Valor total com desconto: R$ %.2f\n", totalComDesconto);
    
    system("pause");
    }
    return 0;
}
