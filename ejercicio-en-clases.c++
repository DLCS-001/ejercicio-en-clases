#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    char jugarOtraVez;
    do {
        srand(static_cast<unsigned int>(time(nullptr)));  // Inicializar la semilla
        int numeroAleatorio = rand() % 100 + 1; // Número aleatorio entre 1 y 100
        int numeroUsuario;
        cout << "¡Bienvenido al juego de adivinar el número!" << endl;
        cout << "He pensado en un número entre 1 y 100. ¡Intenta adivinarlo!" << endl;
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
        cout << "¿Quieres jugar otra vez? (s/n): ";
        cin >> jugarOtraVez;
    } while (jugarOtraVez == 's' || jugarOtraVez == 'S');
    cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
    return 0;
}