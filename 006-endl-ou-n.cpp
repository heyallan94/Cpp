
/*
Observe como cada uso de std::endl insere uma nova linha no console. 
No final de cada linha, o buffer de saída é limpo, o que significa que a 
saída é exibida imediatamente, sem esperar por outras operações de saída. 
Isso é particularmente útil em situações em que você deseja que a saída seja 
imediatamente visível, em vez de ser armazenada em buffer até que uma nova linha 
seja encontrada.

É importante observar que o uso excessivo de std::endl pode levar a uma 
diminuição do desempenho, pois a limpeza do buffer de saída pode ser um processo 
custoso. Se você apenas precisa de uma nova linha, sem a necessidade de limpar o 
buffer de saída, é mais eficiente usar o caractere de escape \n
*/

#include <iostream>

int main(){
    std::cout << "Hello\n World! ";
    std::cout << "usando n"; //usando \n 
    std::cout << "Pulou\n linha";
    return 0; //De toda maneira a função deve retornar um número inteiro
}