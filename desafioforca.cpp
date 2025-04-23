#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char palavra[30], secreta[30];
    char letra;
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    system("clear");

    // determinar o tamanho do array palavra
    while (palavra[i] != '\0') {
        i++;
        tam++;
    }

    // definir o array secreta por meio de hífens
    for (i = 0; i < 30; i++) {
        secreta[i] = '-';
    }

    // Loop principal - quantidade de chances vs quantidade de acertos
    while ((chances > 0) && (acertos < tam)) {
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        // exibir palavra secreta
        for (i = 0; i < tam; i++) {
            cout << secreta[i];
        }
        cout << "\n\n" << "Digite uma letra: ";
        cin >> letra;

        // verifica se a letra está na palavra secreta
        for (i = 0; i < tam; i++) {
            if (palavra[i] == letra) {
                secreta[i] = letra;
                acerto = true;
                acertos++;
            }
        }
        if (!acerto) {
            chances--;
        }
        acerto = false;
        system("clear");
    }

    if (acertos == tam) {
        cout << "Parabéns! Você acertou!" << "\n" << endl;
    }
    else {
        cout << "Que pena! Você não acertou!" << "\n\n";
        cout << "Palavra secreta: ";
        for (i = 0; i < tam; i++) {
            cout << palavra[i];
        }
        cout << "\n\n" << endl;
    }

    return 0;
}