#include <iostream>
using namespace std;

int main () {
    float produtos [5] [6];
    int i;
    int j;

    i = 0;
    j = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Digite o Valor para " << i << " " << j << ": ";
            cin >> produtos [i] [j];
            i++;
            j++;
        }
    }
}
    cout << "A Matriz é; " << endl;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cout << produtos [i] [j] << " ";
        }
        cout << endl;
    }

return 0;
