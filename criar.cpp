#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = filesystem;

void criarTreino(const string& pasta, char ultimoArquivo) {
    fs::create_directories(pasta);

    for (char letra = 'a'; letra <= ultimoArquivo; letra++) {
        string arquivo = pasta + "/" + letra + ".cpp";

        ofstream file(arquivo);

        if (file.is_open()) {
            cout << "Criado: " << arquivo << '\n';
            file.close();
        }
    }
}

int main() {

    criarTreino("Treino-1", 'l');
    criarTreino("Treino-2", 'p');
    criarTreino("Treino-3", 'r');

    cout << "\nArquivos criados com sucesso!\n";

    return 0;
}