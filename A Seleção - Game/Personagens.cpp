#include <iostream>
#include <string>
#include <vector>

class Personagem {
public:
    Personagem(const std::string& nome, const std::string& descricao)
        : nome_(nome), descricao_(descricao) {}

    std::string getNome() const {
        return nome_;
    }

    std::string getDescricao() const {
        return descricao_;
    }

private:
    std::string nome_;
    std::string descricao_;
};

int main() {
    std::vector<Personagem> personagens;

    personagens.push_back(Personagem("Daniel", "Um poderoso Mago."));
    personagens.push_back(Personagem("Maxon", "Principe de illea, filho do rei e da rainha e marido de America."));
    personagens.push_back(Personagem("America", "Esposa de Maxon, herdeira do trono de illea juntamente com ele."));
    personagens.push_back(Personagem("Luci", "Amiga de America."));
    personagens.push_back(Personagem("Aspen", "Guarda real do castelo."));
    personagens.push_back(Personagem("Princesa Guerreira de Illea", "Lendaria guerreira do país, gentil, bondosa e altruista."));

    // Exemplo de uso: listar os personagens
    std::cout << "Personagens do jogo:" << std::endl;
    for (const auto& personagem : personagens) {
        std::cout << "Nome: " << personagem.getNome() << std::endl;
        std::cout << "Descrição: " << personagem.getDescricao() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
