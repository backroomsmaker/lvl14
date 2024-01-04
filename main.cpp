#include <iostream>
#include <string>

// Dichiarazione della funzione per avviare il livello Paradise
void startParadise();

int main() {
    int scelta;
    bool isRunning = true;

    while (isRunning) {
        std::cout << "Benvenuto nel nostro paradiso:\n";
        std::cout << "1. Unisciti a noi.\n";
        std::cout << "2. Colui che ci aiuta.\n";
        std::cout << "3. Non esiste questa opzione.\n";
        std::cout << "Premi 1: ";
        std::cin >> scelta;

        switch(scelta) {
            case 1:
                // Avvia il livello Paradise
                startParadise();
                break;
            case 2:
                // Mostra i crediti del gioco
                std::cout << "Gioco creato da JashinL.\n";
                break;
            case 3:
                // Esce dal gioco
                std::cout << "Uscita dal paradiso...\n";
                isRunning = false;
                break;
            default:
                std::cout << "Scelta non valida. Riprova.\n";
        }
    }
    return 0;
}
