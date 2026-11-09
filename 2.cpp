
#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    array<string, 12> paises = {
        "Argentina", "Bolivia", "Brasil", "Chile",
        "Colombia", "Ecuador", "Guyana", "Paraguay",
        "Peru", "Surinam", "", ""
    };
    paises.at(10) = "Uruguay";
    paises[11] = "Venezuela";

    
    



    cout << "1. Paises que empiezan con C o P:" << endl;

    for (string p : paises) {
        if (p[0] == 'C' || p[0] == 'P') {
            cout << p << endl;
        }
    }

    



    cout << "\n2. Primer pais: " << paises.front() << endl;
    cout << "Ultimo pais: " << paises.back() << endl;

   




    sort(paises.begin(), paises.end());

    cout << "\n3. Paises ordenados:" << endl;

    for (string p : paises) {
        cout << p << endl;
    }

    return 0;
}
