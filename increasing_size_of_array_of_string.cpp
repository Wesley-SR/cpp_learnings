#include <iostream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Teste {
    private:
        static int sonar_count;
        std::vector<std::string> sonar_topic_names;
    public:
        Teste(int count);
};

Teste::Teste(int count){
    this->sonar_count = count;
    for (int i = 0; i < (this->sonar_count); i++){
        this->sonar_topic_names.push_back("Ola");
    }
}

int main()
{
    Teste minha_classe(5);

    std::vector<std::string> A;

    std::cout << "The size is " << A.size() << std::endl;

    for(string s : A) 
    {
        std::cout << s << std::endl;
    }
    bool continuar = true;
    while(continuar) {
        // want to enter more?
        std::cout << "want to enter more?" << std::endl;
        std::string more;
        std::cin >> more;
        A.push_back(more);

        std::cout << "The size is " << A.size() << std::endl;
        for(string s : A)
        {
            std::cout << s << std::endl;
        }

        std::cout << "Continuar (Enter 1 or 0)" << std::endl;
        int resposta;
        std::cin >> resposta;
        if (resposta == 0){ continuar = false; }
    }
    return 0;
}

