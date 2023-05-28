#include <iostream>
using namespace std;

struct produto {
    string nome_produto;
    float preco_do_produto;
    int quantidade_do_produto;
    char indice;
};

int main () {

    produto produtos [5] [6];

    produtos[1] [1].nome_produto = "Vinicius";
    produtos[1] [1].preco_do_produto = 10.00;
    produtos[1] [1].quantidade_do_produto = 5;
    
    cout << "Nome do Produto:" << produtos[1] [1].nome_produto << "\n Preço: " << produtos[1] [1].preco_do_produto << 
    " R$" << "\n Quantidade: " << produtos[1] [1].quantidade_do_produto;
}

    
