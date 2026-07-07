#include "Base.hpp"
#include "Letters.hpp"
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(NULL));

    std::cout << "--- Génération et Identification ---\n";
    for (int i = 0; i < 5; ++i) {
        Base* instance = generate();
        
        std::cout << "Test avec Pointeur : ";
        identify(instance);
        
        std::cout << "Test avec Référence: ";
        identify(*instance);
        
        std::cout << "---------------------\n";
        delete instance;
    }

    return 0;
}
