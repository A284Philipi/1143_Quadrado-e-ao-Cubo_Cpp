#include <iostream>

using namespace std;

int main()
{
    int n, cont = 1, quadrado, cubo;
    cin >> n;
    while (cont <= n){
        quadrado = cont * cont;
        cubo = quadrado * cont;
        cout << cont << " " << quadrado << " " << cubo <<endl;
        cont++;
    }
    return 0;
}
