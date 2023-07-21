#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Character {
    string name;
    string description;
};

void displayOptions(const vector<string>& options) {
    cout << "\nEscolha sua ação:\n";
    for (size_t i = 0; i < options.size(); ++i) {
        cout << i + 1 << ". " << options[i] << endl;
    }
}

int getPlayerChoice() {
    int choice;
    cin >> choice;
    return choice;
}

void wait() {
    cout << "\n... pressione Enter para continuar ...\n";
    cin.ignore();
    cin.get();
}

void playGame() {
    Character princesaGuerreira = { "Princesa Guerreira", "Uma garota doce e inteligente." };
    Character principeWolf = { "Príncipe Wolf", "Um príncipe encantador em busca de uma esposa." };

    cout << "Bem-vindo ao mundo de 'A Seleção'!\n";
    cout << "Você é " << princesaGuerreira.name << ", " << princesaGuerreira.description << ".\n";

    cout << "Você recebeu um convite para participar da seleção de uma nova esposa para o príncipe " << principeWolf.name << "!\n";
    cout << "O que você faz?\n";
    vector<string> options = {
        "Aceitar o convite e participar da seleção.",
        "Recusar o convite e ficar em casa."
    };
    displayOptions(options);
    int choice = getPlayerChoice();

    if (choice == 1) {
        cout << "Você decide aceitar o convite e partir para o palácio real.\n";
        wait();
        cout << "Ao chegar ao palácio, você conhece as outras participantes e começa a interagir com elas.\n";
        wait();

        cout << "Chegou o dia da primeira prova da seleção!\n";
        cout << "Você foi escolhida para um encontro com o príncipe " << principeWolf.name << ".\n";
        cout << "O que você faz?\n";
        options = {
            "Se arrumar com o melhor vestido e ir ao encontro.",
            "Recusar o encontro e evitar a competição."
        };
        displayOptions(options);
        choice = getPlayerChoice();

        if (choice == 1) {
            cout << "Você se arruma lindamente e vai ao encontro com o príncipe.\n";
            wait();
        } else {
            cout << "Você decide recusar o encontro e seguir sua própria jornada.\n";
            wait();
        }

        cout << "Outro evento importante acontece no palácio...\n";
        wait();

        cout << "Chegou o momento de tomar uma decisão crucial na seleção.\n";
        cout << "O que você faz?\n";
        options = {
            "Ficar ao lado do príncipe " << principeWolf.name << " e continuar na competição.",
            "Decidir que a seleção não é para você e ir embora."
        };
        displayOptions(options);
        choice = getPlayerChoice();

        if (choice == 1) {
            cout << "Você escolhe ficar ao lado do príncipe e continuar lutando pela coroa.\n";
            wait();
        } else {
            cout << "Você decide que a seleção não é para você e vai embora.\n";
            wait();
        }

        cout << "Chegou o momento da grande final da seleção!\n";
        wait();

        cout << "Após muitas reviravoltas, chegou o dia da decisão final.\n";
        cout << "Quem o príncipe " << principeWolf.name << " escolherá como sua futura esposa?\n";
        wait();

        cout << "\n*** FIM DO JOGO ***\n";
    } else {
        cout << "Você decide recusar o convite e continuar sua vida normalmente.\n";
    }
}

int main() {
    playGame();
    return 0;
}
