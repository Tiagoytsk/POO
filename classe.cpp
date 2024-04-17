#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int ano_atual = 2021;
    class pessoa{
        public:
        char nome[50];
        int idade;
        int ano (int ano_atual){return ano_atual - idade;} // Modified the function to accept only one parameter
    }p1;
    strcpy(p1.nome, "Ana Cruz");p1.idade = 16;
    cout << "nome:" << p1.nome << "\t";
    cout << "idade:" << p1.idade << "\n";
    cout << "ano de nascimento:" << p1.ano(2008) << "\n";
}