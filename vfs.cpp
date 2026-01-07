#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> files;

void createFile(const string& name) {
    files.push_back(name);
    cout << "File created: " << name << endl;
}

void listFiles() {
    if (files.empty()) {
        cout << "No files\n";
        return;
    }
    for (const auto& f : files)
        cout << f << endl;
}

void deleteFile(const string& name) {
    for (auto it = files.begin(); it != files.end(); ++it) {
        if (*it == name) {
            files.erase(it);
            cout << "File deleted: " << name << endl;
            return;
        }
    }
    cout << "File not found\n";
}

int main() {
    createFile("file1.txt");
    createFile("file2.txt");
    listFiles();
    deleteFile("file1.txt");
    listFiles();
    return 0;
}
