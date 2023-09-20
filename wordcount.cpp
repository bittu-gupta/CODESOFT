#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWordsInFile(const string &filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Unable to open file '" << filename << "'" << endl;
        return -1;
    }

    string line;
    int wordCount = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;

    cout << "Enter the file name: ";
    cin >> filename;

    int wordCount = countWordsInFile(filename);

    if (wordCount != -){
        cout << "Word count in file '" << filename << "': " << wordCount << endl;
    }

    return 0;
}
