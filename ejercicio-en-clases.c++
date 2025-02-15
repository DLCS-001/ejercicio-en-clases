#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(nullptr)));  // Inicializar la semilla de aleatoriedad
    int numeroAleatorio = rand() % 100 + 1; // Número aleatorio entre 1 y 100
    int numeroUsuario; // Número ingresado por el usuario
    cout << "¡Adivina el número que estoy pensando entre 1 y 100!" << endl;
    do {
        cout << "Ingresa un número: "; // Solicitar el número del usuario
        cin >> numeroUsuario; // Obtener el número del usuario
        if (numeroUsuario > numeroAleatorio) {
            cout << "El número es menor. Intenta de nuevo." << endl; // Si el número del usuario es menor que el aleatorio, mostrar un mensaje de error
        } else if (numeroUsuario < numeroAleatorio) {
            cout << "El número es mayor. Intenta de nuevo." << endl; // Si el número del usuario es mayor que el aleatorio, mostrar un mensaje de error
        } else {
            cout << "¡Felicidades! Has adivinado el número." << endl; // Si el número del usuario es igual al aleatorio, mostrar un mensaje de felicidad
        }
    } while (numeroUsuario != numeroAleatorio); // Repetir el ciclo hasta que el número del usuario sea igual al aleatorio
    return 0;
}