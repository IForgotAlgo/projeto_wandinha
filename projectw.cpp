#include <iostream>
using namespace std;

struct produto {
    string nome_produto;
    float preco_do_produto;
    int quantidade_do_produto;
    char indice;
}

;int main () {
    produto produtos [5] [6];

    for (int i = 1; i < 2; i++) {
        for (int j = 1; j < 2; j++) {
            produtos[i] [j].nome_produto = "Vinicius";
            produtos[i] [j].preco_do_produto = 10;
            produtos[i] [j].quantidade_do_produto = 5;
        }
    }

    cout << produtos;
} 
    
