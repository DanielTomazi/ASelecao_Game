#include <iostream>
#include <string>
#include <vector>

class Personagem {
public:
    Personagem(const std::string& nome, const std::string& descricao)
        : nome_(nome), descricao_(descricao) {}

    void andar() {
        std::cout << nome_ << " está andando." << std::endl;
    }

    void batalhar(const Personagem& inimigo) {
        std::cout << nome_ << " está batalhando contra " << inimigo.nome_ << "." << std::endl;
    }

    void pegarItem(const std::string& item) {
        inventario_.push_back(item);
        std::cout << nome_ << " pegou o item: " << item << "." << std::endl;
    }

    void explorar() {
        std::cout << nome_ << " está explorando uma nova área." << std::endl;
    }

    void mostrarInventario() {
        std::cout << "Inventário de " << nome_ << ":" << std::endl;
        for (const auto& item : inventario_) {
            std::cout << "- " << item << std::endl;
        }
    }

private:
    std::string nome_;
    std::string descricao_;
    std::vector<std::string> inventario_;
};

int main() {
    Personagem jogador("Daniel", "Um valente guerreiro");
    Personagem inimigo("Dragão", "Um terrível monstro cuspidor de fogo");

    jogador.andar();
    jogador.pegarItem("Espada Mágica");
    jogador.explorar();
    jogador.mostrarInventario();
    
    std::cout << std::endl;
    
    inimigo.andar();
    inimigo.batalhar(jogador);

    return 0;
}
