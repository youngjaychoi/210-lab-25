#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
using namespace std::chrono;

template <typename Container>
void readData(Container &container) {
    ifstream inFile("codes.txt");
    string line;
    while (getline(inFile, line)) {
        container.insert(container.end(), line);
    }
    file.close();
}



int main() {
    vector<string> vector;
    list<string> list;
    set<string> set;


    auto start = high_resolution_clock::now()
    auto end = high_resolution_clock::now()
    auto duration = duration_cast<milliseconds>(end - start)
    duration.count() references elapsed milliseconds



    return 0;
}
