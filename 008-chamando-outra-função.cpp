/*
Se você quiser chamar outra função no código
você deve declarar ela caso a função main() venha antes
*/
#include <iostream>

int second(); //Se não dizer pro código que no futuro terá essa função, ele dá erro.

int main(){ // main é sempre a primeira função a ser chamada
    std::cout << "Hello \n";
    second(); //chamando a segunda função, normalmente
    return 0;
}

int second(){
    std::cout << "World!";
}