#include <iostream>
//declaração da função 
bool ehPar(int num) {
    return num % 2 == 0;
}
 bool ehImpar(int num2){
        return num2 % 2 == 0;
    }
int main(){
    int numero = 12214;
    // Chamada da função e impressão do resultado 
    printf("%d é %s\n", numero, ehPar(numero) ? "par" : "ímpar");

    int numero2 = 1231232;
    printf("%d é %s\n", numero2, ehImpar(numero2) ? "impar" : "par");
    return 0;
}