#include <iostream>
#include <cstring>
using namespace std;

/*int main(){
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
}*/

main(){
    class aluno{
    public:
        char nome[50];
        int numero;
        char cadeira[50];
        float nota1;
        float nota2;
    }p1;
    cout << "Introduza o nome do aluno: ";
    gets(p1.nome);
    cout << "Introduza o numero do aluno: ";
    cin >> p1.numero;
    cout << "Introduza a cadeira do aluno: ";
    gets(p1.cadeira);
    cout << "Introduza a nota 1 do aluno: ";
    cin >> p1.nota1;
    cout << "Introduza a nota 2 do aluno: ";
    cin >> p1.nota2;
    cout << "Nome: " << p1.nome << "\n";
    cout << "Numero: " << p1.numero << "\n";
    cout << "Cadeira: " << p1.cadeira << "\n";
    cout << "Nota 1: " << p1.nota1 << "\n";
    cout << "Nota 2: " << p1.nota2 << "\n";
    cout << "Media: " << (p1.nota1 + p1.nota2) / 2 << "\n";
}