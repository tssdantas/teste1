#include <vector>
#include <iostream>

class teste
{
private:
    /* data */
public:
    std::vector<double> meuvetor;
    std::vector<std::vector<double>> minhamatriz;
    int minhavariavelinteira;
    teste(/* args */);
};

teste::teste(/* args */)
{
    minhavariavelinteira = 2;
}

int main () 
{
    std::cout << " Oi. O pograma inciou ..." <<  std::endl;
    std::cout << " segunda linha" <<  std::endl;
    teste instanciadeclasse;

    // i++
    // i = i + 1; 
    // i += 1;

    //std::vector<std::vector<double>> minhamatriz;

    //dimensionando matriz
    instanciadeclasse.minhamatriz.resize(5);
    for (int i = 0; i < 5; i++ )
    {
        instanciadeclasse.minhamatriz[i].resize(7);
    }

    //jogar valores e printar
    std::cout << "matriz : "  << std::endl;
    for (unsigned int i = 0; i < instanciadeclasse.minhamatriz.size(); i++ )
    {
        for (unsigned int j = 0; j < instanciadeclasse.minhamatriz[i].size(); j++ )
        {
            instanciadeclasse.minhamatriz[i][j] = i + j;
            std::cout << instanciadeclasse.minhamatriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "minhavariavelinteira = " << instanciadeclasse.minhavariavelinteira << std::endl;

}