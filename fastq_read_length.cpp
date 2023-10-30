#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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

    std::vector<std::string> sequences;

    std::string line;
    while (std::getline(inputFile, line)) {
        if (line[0] == '@') {
            // Read the sequence line
            std::getline(inputFile, line);
            sequences.push_back(line);
        }
    }

    inputFile.close();

    // Calculate and display the lengths of the reads
    for (const std::string& sequence : sequences) {
        int length = sequence.length();
        std::cout << "Read Length: " << length << std::endl;
    }

    return 0;
}
