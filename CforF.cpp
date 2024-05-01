#include <iostream>
double celsiusParaFahrenheit (double celsius) {
    return (celsius * 9 / 5) + 32;
}
int main(){
    double temperaturaCelsius = 1233123.0;
    //Chamada da função e Impressão 
    printf("%.2f graus Celsius é equivalente a %.2f graus Fahrenheit\n", temperaturaCelsius, celsiusParaFahrenheit(temperaturaCelsius));
    return 0;
}