#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(nullptr)));  // Inicializar la semilla de aleatoriedad
    int numeroAleatorio = rand() % 100 + 1; // Número aleatorio entre 1 y 100
    int numeroUsuario;
    cout << "¡Adivina el número que estoy pensando entre 1 y 100!" << endl;
    
    do {
        cout << "Ingresa un número: ";
        cin >> numeroUsuario;

        if (numeroUsuario > numeroAleatorio) {
            cout << "El número es menor. Intenta de nuevo." << endl;
        } else if (numeroUsuario < numeroAleatorio) {
            cout << "El número es mayor. Intenta de nuevo." << endl;
        } else {
            cout << "¡Felicidades! Has adivinado el número." << endl;
        }
    } while (numeroUsuario != numeroAleatorio);

    return 0;
}
