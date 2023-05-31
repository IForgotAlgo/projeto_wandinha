#include <iostream>
#include <iomanip>
using namespace std;



double Vem_Troco(double dinheiro, double valor) {
    return dinheiro - valor;
}

/*Estrutura do Produto pode ser editada adicionando mais informações*/
struct produto {
    string nome_produto;
    double preco_do_produto;
    int quantidade_do_produto;
    int indice;
};

int main () {
    int escolha;
    int qtdEscolha;
    int senha;
    double valor_total;
    double dinheiro;
    double troco;
    char escolha_forma_pagamento;

    /*Assim como o Array pode ser igualmente editado e adicionado mais produtos apenas copiando e colando!*/
    produto produtos [5] [6];

    produtos[1] [1].nome_produto = "Brownie";
    produtos[1] [1].preco_do_produto = 5.00;
    produtos[1] [1].quantidade_do_produto = 10;
    produtos[1] [1].indice = 1;

    produtos[1] [2].nome_produto = "CroaSans";
    produtos[1] [2].preco_do_produto = 10.00;
    produtos[1] [2].quantidade_do_produto = 5;
    produtos[1] [2].indice = 2;

    produtos[1] [3].nome_produto = "Banana Congelada";
    produtos[1] [3].preco_do_produto = 5.00;
    produtos[1] [3].quantidade_do_produto = 10;
    produtos[1] [3].indice = 3;

    produtos[1] [4].nome_produto = "Flor Comestivel";
    produtos[1] [4].preco_do_produto = 5.00;
    produtos[1] [4].quantidade_do_produto = 5;
    produtos[1] [4].indice = 4;

    produtos[1] [5].nome_produto = "Cafe";
    produtos[1] [5].preco_do_produto = 5.00;
    produtos[1] [5].quantidade_do_produto = 10;
    produtos[1] [5].indice = 5;

    produtos[1] [6].nome_produto = "Nescau";
    produtos[1] [6].preco_do_produto = 10.00;
    produtos[1] [6].quantidade_do_produto = 10;
    produtos[1] [6].indice = 6;
    

    /*Pode ser Adicionado couts para montar as tabelas (ISSO SÓ EXISTE AQUI!!! NA MAQUINA ISSO NÃO EXISTIRIA)*/
    cout << left << setw(20) << produtos[1] [1].nome_produto << setw(20) << produtos[1] [2].nome_produto << setw(20) << produtos[1] [3].nome_produto << 
                    setw(20) << produtos[1] [4].nome_produto << setw(20) << produtos[1] [5].nome_produto << setw(20) << produtos[1] [6].nome_produto << endl;
                
    cout << left << setw(20) << fixed << setprecision(2) << produtos[1] [1].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [2].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [3].preco_do_produto <<
                    setw(20) << fixed << setprecision(2) << produtos[1] [4].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [4].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [4].preco_do_produto << endl;
    
    cout << left << setw(20) << produtos[1] [1].indice << setw(20) << produtos[1] [2].indice << setw(20) << produtos[1] [3].indice <<
                    setw(20) << produtos[1] [4].indice << setw(20) << produtos[1] [5].indice << setw(20) << produtos[1] [6].indice << endl;
    
        do {
        cout << "Escolha um Produto Digitando o Código Abaixo do Valor: ";
        cin >> escolha;
        
        if (escolha != 159753 & (escolha <= 0 or escolha > 6)){
            cout << "Produto Invalido. Tente Novamente\n";
        }
        } while (escolha != 159753 & (escolha <= 0 or escolha > 6));

    /* Transformar isso acima como função /\ */;

    if (escolha == 159753) {
        cout << "Digite a Senha para entrar no: ";
        cin >> senha;
        if (senha == 98634648) {
            /*Puxar função ADMIN (Inserir 1 Chama função respectiva e assim continuamente)*/
            /*Se tiver 3 erros o Sistema: Usar Do While com o Contador pra verificar a senha
            caso seja erro 3 vezes voltar ao Modo User*/
        }
    }

    cout << "Informe a Quantidade:  ";
    cin >> qtdEscolha;

    valor_total =  produtos[1][escolha].preco_do_produto * qtdEscolha;
    cout << "O total a pagar é: R$" << valor_total;

    /*Colocar Forma de Pagamento!*/
    cout << "\nQual a Forma de Pagamento? \n'A') Dindin\n'B') Cartão Crédito ou Débito\n'C') Pix ";
    cin >> escolha_forma_pagamento;

    if (escolha_forma_pagamento == 'B') {
        cout << "\nInsira ou Aproxime o Cartão \nCrédito ou Débito?\nPagamento Efetuado\n" << qtdEscolha << " Produto(s) Caindo" << "\nObrigado";
    } else if (escolha_forma_pagamento == 'C'){
        cout << "\n<QR Code> \nPagamento Efetuado\n" << qtdEscolha << " Produto(s) Caindo" << "\nObrigado :3";
    } else {

        do {
            cout << "Insira o Dinheiro na Maquina: (Notas Compativeis: R$5,00 e R$10,00 e R$20,00 e R$50,00): ";
            cin >> dinheiro;
            troco = Vem_Troco(dinheiro, valor_total);

            if (troco < 0) {
                cout << "Opa Faltou DinDin\nRetornando Nota Inserida, Tente Novamente com o Valor Correto ou Maior.\n";
            }
        } while (troco < 0);
        /* Transformar isso acima como função /\ */;

        if (troco != 0) {
        cout << "Aqui seu troco: " << troco << "\n" << qtdEscolha << " Produto(s) Caindo" << "\nObrigado :3";
        }

        cout << qtdEscolha << " Produto(s) Caindo" << "\nObrigado :3";
    }




return 0;
}