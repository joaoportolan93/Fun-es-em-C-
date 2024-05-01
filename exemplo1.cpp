#include <iostream> 
///declare uma função
int calcularAreaQuadrada(int lado){ 
    return lado * lado; 
}
int main(){
   int lado = 2132123;
    //chamada da função (call)
   int area = calcularAreaQuadrada(lado);
    printf("A área do quadrado é: %d\n", area);
    return 0;

    int lado2 = 23241234;
    int area2 = calcularAreaQuadrada(lado2);
    printf("A área é: %d\n", area2);
    return 0;
}