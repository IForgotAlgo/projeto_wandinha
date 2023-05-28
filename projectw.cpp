#include <iostream>
using namespace std;

int main () {
    float produtos [5] [6];
    int i;
    int j;

    i = 0;
    j = 0;
    
    for (int i = 1; i < 2; i++) {
        for (int j = 1; j < 2; j++) {
            cout << "Nome do Produto: " << i << j << "\n Preço: \n Quantidade: ";
            cin >> produtos [i] [j];
        }
    }

    cout << produtos [1] [1];
}
    
