#include <iostream>
#include <vector>
#include <random>

int main() {
    std::vector<int> input = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,5,2,5,5,4,5,3,5,4,3,7,3,3,2,5,2,2,6}; // Seu vetor de números inteiros

    // Calcula a média dos números no vetor input
    double sum = 0;
    for (int num : input) {
        sum += num;
    }
    double mean = sum / input.size();

    // Gerador de números aleatórios
    std::default_random_engine generator;

    // Distribuição de Poisson com lambda baseado na média
    std::poisson_distribution<int> poisson(mean);

    for (int i = 0; i < input.size(); i++) {
        int x = input[i];
        double probability = exp(-mean) * pow(mean, x) / tgamma(x + 1);
        std::cout << "P(X=" << x << ") = " << probability << std::endl;
    }

    return 0;
}
