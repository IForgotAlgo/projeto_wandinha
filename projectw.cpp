#include <iostream>
#include <iomanip>
using namespace std;

/*Estrutura do Produto pode ser editada adicionando mais informações*/
struct produto {
    string nome_produto;
    double preco_do_produto;
    int quantidade_do_produto;
    int indice;
};

int main () {
    int escolha;
    int forma;
    int dinheiro;
    int total;

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
    
    cout << "Bom \t Dia";
    /*Pode ser Adicionado couts para montar as tabelas (ISSO SÓ EXISTE AQUI!!! NA MAQUINA ISSO NÃO EXISTIRIA)*/
    cout << left << setw(20) << produtos[1] [1].nome_produto << setw(20) << produtos[1] [2].nome_produto << setw(20) << produtos[1] [3].nome_produto << 
                    setw(20) << produtos[1] [4].nome_produto << setw(20) << produtos[1] [5].nome_produto << setw(20) << produtos[1] [6].nome_produto << endl;
                
    cout << left << setw(20) << fixed << setprecision(2) << produtos[1] [1].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [2].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [3].preco_do_produto <<
                    setw(20) << fixed << setprecision(2) << produtos[1] [4].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [4].preco_do_produto << setw(20) << fixed << setprecision(2) << produtos[1] [4].preco_do_produto << endl;
    
    cout << left << setw(20) << produtos[1] [1].indice << setw(20) << produtos[1] [2].indice << setw(20) << produtos[1] [3].indice <<
                    setw(20) << produtos[1] [4].indice << setw(20) << produtos[1] [5].indice << setw(20) << produtos[1] [6].indice << endl;
    
    cout << "Escolha um Produto Digitando o Código Abaixo do Valor: ";
    cin >> escolha;

    /*Agora Vem a Parte da Escolha do Nosso Querido Usuário*/
    switch (escolha) {
        case 1:
        cout << "Forma de Pagamento; (1)Pix Ou (2)Dinheiro: ";
        cin >> forma;
        total = total + 5;

        if (forma == 1) {
            cout << "<QR Code>" << endl;
            cout << "\nPagamento Efetivado \nObrigado! :3 \nOlha o Produto CAINDO \n  // " << endl; 

        } else
          cout << "Insira a Nota: (Apenas Notas de 5.00R$; 10.00R$; 20.00R$ e 50.00R$ são Permitidas): " << "\nInsira a Nota >> ";
          cin >> dinheiro;
            if (dinheiro == 5) {
                cout << "Sem Troco! \n Olha O Brownie CAINDO //";
            } else if (dinheiro == 10) {
                dinheiro = dinheiro - 5;
                cout << "Aqui seu troco: " << dinheiro << "R$ \nObrigado pela preferencia \nDINDIN VOLTANO (5 Reais)";
            } else if (dinheiro == 20) {
                dinheiro = dinheiro - 5;
                cout << "Aqui seu troco: " << dinheiro << "R$ \nObrigado pela preferencia \nDINDIN VOLTANO (5 Reais e 10 Reais)";
            } else
                dinheiro = dinheiro - 5;
                cout << "Aqui seu troco: " << dinheiro << "R$ \nObrigado pela preferencia \nDINDIN VOLTANO (20 Reias 2x e 5 Reais)";
        break;
    }


return 0;
}