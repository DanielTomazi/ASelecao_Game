#include <iostream>
#include <string>
#include <vector>

class Inimigo {
public:
    Inimigo(const std::string& nome, const std::string& descricao, int forca)
        : nome_(nome), descricao_(descricao), forca_(forca) {}

    void atacar(const std::string& alvo) {
        std::cout << nome_ << " está atacando " << alvo << " com força " << forca_ << "!" << std::endl;
    }

private:
    std::string nome_;
    std::string descricao_;
    int forca_;
};

int main() {
    std::vector<Inimigo> inimigos;

    inimigos.push_back(Inimigo("Lobo", "Um predador selvagem", 10));
    inimigos.push_back(Inimigo("Membro Rebelde do Sul", "Um rebelde desafiador", 15));
    inimigos.push_back(Inimigo("Bandido", "Um criminoso perigoso", 12));

    std::string alvo = "Jogador";

    for (const auto& inimigo : inimigos) {
        inimigo.atacar(alvo);
    }

    return 0;
}
