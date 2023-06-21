/* Dados do Estudande
Nome: Victor Hugo Aparecido Pires 
RA:   2840482313041
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int correcao (int escolha, int valorA, int valorB) {

    if (escolha < valorA or escolha > valorB) {
        cout << "Insira um Valor Entre " << valorA << " e " << valorB << "\n";
        cin >> escolha;
        correcao(escolha, valorA, valorB);
    }
    return escolha;
}

int modo_admin() {
    int escolha_modo_admin;
    cout << "\nBem Vindo ao Modo Administrador da WandinhaMachine! ";
    cout << "\nO que deseja fazer? ";

    cout << "\n'1') Faturamentos \n'2') Ver Inventario Produtos contendo suas Quantidades em Un \n'3') Repor Produtos\n";
    cin >> escolha_modo_admin;

    return escolha_modo_admin;
}

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
    int escolha_modo_admin;
    int qtd;
    int voltando;
    int produto_repondo;
    int total_vendido = 0;
    int reposicao = 0;
    double total_ira_faturar = 0;
    double valor_total;
    double dinheiro;
    double troco;
    char escolha_forma_pagamento;

    /*Assim como o Array pode ser igualmente editado e adicionado mais produtos apenas copiando e colando!*/
    produto produtos [5] [7];

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
    
    for (int i = 1; i < 6; i++) {
        total_ira_faturar = total_ira_faturar + (produtos[1][i].preco_do_produto * produtos[1][i].quantidade_do_produto);
    }

    /*Pode ser Adicionado couts para montar as tabelas (ISSO SÓ EXISTE AQUI!!! NA MAQUINA ISSO NÃO EXISTIRIA)*/
    cout << left << setw(20) << produtos[1] [1].nome_produto << setw(20) << produtos[1] [2].nome_produto << setw(20) << produtos[1] [3].nome_produto << 
                    setw(20) << produtos[1] [4].nome_produto << setw(20) << produtos[1] [5].nome_produto << setw(20) << produtos[1] [6].nome_produto << endl;
                
    cout << left << setw(20) << fixed << setprecision(2) << produtos[1] [1].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [2].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [3].preco_do_produto <<
                    setw(20) << fixed << setprecision(2) << produtos[1] [4].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [5].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [6].preco_do_produto << endl;
    
    cout << left << setw(20) << produtos[1] [1].indice << setw(20) << produtos[1] [2].indice << setw(20) << produtos[1] [3].indice <<
                    setw(20) << produtos[1] [4].indice << setw(20) << produtos[1] [5].indice << setw(20) << produtos[1] [6].indice << endl;
    
    
    cout << "Escolha um Produto Digitando o Codigo Abaixo do Valor: ";
    cin >> escolha;

    if (escolha == 159753) {
        cout << "Entrando no Menu Secreto";

        do{
        escolha_modo_admin = modo_admin();
        
            if (escolha_modo_admin == 1) {
                cout << "\nO Total Faturado eh: " << total_vendido;
                cout << "\nO Total que a Maquina Wandinha pode Faturar Ainda eh: R$" << total_ira_faturar << "\n"; 
                system ("pause");

            } else if (escolha_modo_admin == 2) {
                cout << "\nO Total de Quantidade de Produtos eh: ";

                for (int i = 1; i < 7; i++) {
                    cout << "\n" << produtos[1] [i].nome_produto;
                    cout << "\n" << produtos[1] [i].quantidade_do_produto << " Un\n";
                }
                system ("pause");

            } else {
                do {
                    cout << "\nDeseja Repor Qual Produto (Digite o Codigo)? ";
                    cin >> produto_repondo;
                    produto_repondo = correcao(produto_repondo, 1, 6);

                    cout << "\nProduto Escolhido: " << produtos[1] [produto_repondo].nome_produto << "\nQuantos Produtos deseja adicionar? ";
                    cin >> reposicao;
                    reposicao = correcao(reposicao, 1, 10);

                    produtos[1] [produto_repondo].quantidade_do_produto = reposicao + produtos[1] [produto_repondo].quantidade_do_produto;

                    cout << "\nO Produto " << produtos[1] [produto_repondo].nome_produto << " Foi reposto " << reposicao << "Un";
                    cout << "\nQuantidade Anterior: " << produtos[1] [produto_repondo].quantidade_do_produto - reposicao << "\nQuantidade Atual " << produtos[1] [produto_repondo].quantidade_do_produto;
                    cout << "\nDeseja Repor outro Produto? \n1) Sim \n2) Nao";
                    cin >> escolha;
                    escolha = correcao(escolha, 1, 2);

                } while (escolha == 1);
            system ("pause");
            }
        
        cout << "Deseja Retornar Ao Menu? \n1) Sim \n2) Nao";
        cin >> voltando;
        voltando = correcao(voltando, 1, 2);

        } while (voltando == 1);
        system("pause");
        exit (0);
    }

    cout << "Informe a Quantidade:  ";
    cin >> qtdEscolha;
    qtdEscolha = correcao(qtdEscolha, 1, 10);

    produtos[1][escolha].quantidade_do_produto = produtos[1][escolha].quantidade_do_produto - qtdEscolha;

    valor_total =  produtos[1][escolha].preco_do_produto * qtdEscolha;
    cout << "O total a pagar eh: R$" << valor_total;

    /*Forma de Pagamento!*/
    cout << "\nQual a Forma de Pagamento? \n'A') Dindin\n'B') Cartao Credito ou Debito\n'C') Pix ";
    cin >> escolha_forma_pagamento;

    /* Por Case*/
    if (escolha_forma_pagamento == 'B') {
        cout << "\nInsira ou Aproxime o Cartao \nCredito ou Debito?\nPagamento Efetuado\n" << qtdEscolha << " Produto(s) Caindo" << "\nObrigado :3\n";
        total_vendido = (total_vendido + valor_total) + total_vendido;
        produtos[1] [escolha].quantidade_do_produto = produtos[1] [escolha].quantidade_do_produto - qtdEscolha;
    } else if (escolha_forma_pagamento == 'C'){
        cout << "\n<QR Code> \nPagamento Efetuado\n" << qtdEscolha << " Produto(s) Caindo" << "\nObrigado :3\n";
        total_vendido = (total_vendido + valor_total) + total_vendido;
    } else {

        do {
            cout << "Insira o Dinheiro na Maquina: (Notas Compativeis: R$5,00 e R$10,00 e R$20,00 e R$50,00 e R$100,00): ";
            cin >> dinheiro;
            
            cout << "\nQuantas Cedulas?: ";
            cin >> qtd;
            
            dinheiro = (qtd * dinheiro);

            troco = Vem_Troco(dinheiro, valor_total);

            if (troco < 0) {
                cout << "Opa Faltou DinDin\nRetornando Nota Inserida, Tente Novamente com o Valor Correto ou Maior.\n";
            }
        } while (troco < 0);
        total_vendido = (total_vendido + valor_total) + total_vendido;

        if (troco != 0) {
            cout << "Aqui seu troco: " << troco << "\n" << qtdEscolha << " Produto(s) Caindo" << "\nObrigado :3\n";
            system ("pause");
            exit (0);
        }

        cout << qtdEscolha << " Produto(s) Caindo" << "\nObrigado :3\n";
    }

system("pause");
return 0;
}