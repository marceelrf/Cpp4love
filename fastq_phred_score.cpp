#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Function to calculate the Phred quality score for a single read
int calculatePhredScore(const std::string& qualityString) {
    int score = 0;
    for (char c : qualityString) {
        score += static_cast<int>(c) - 33; // Phred quality score offset is 33
    }
    return score;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_fastq_file>" << std::endl;
        return 1;
    }

    const std::string inputFilename = argv[1];
    std::ifstream inputFile(inputFilename);

    if (!inputFile) {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return 1;
    }

    std::vector<std::string> qualityScores;

    std::string line;
    while (std::getline(inputFile, line)) {
        if (line[0] == '+') {
            // Read the quality scores line
            std::getline(inputFile, line);
            qualityScores.push_back(line);
        }
    }

    inputFile.close();

    // Calculate and display the Phred quality scores
    for (const std::string& qualityString : qualityScores) {
        int score = calculatePhredScore(qualityString);
        std::cout << "Phred Quality Score: " << score << std::endl;
    }

    return 0;
}
