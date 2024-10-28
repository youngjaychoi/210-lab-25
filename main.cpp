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
void readData(Container &container);
template <typename Container>
void insertMid(Container &container, const string &value);
void insertMid(set<string> &s, const string &value);
template <typename Container>
void deleteMid(Container &container);
void deleteMid(set<string> &s);

int main() {
    vector<string> vector;
    list<string> list;
    set<string> set;

    long long vectorTime, listTime, setTime;

    auto start = high_resolution_clock::now();
    readData(vector);
    auto end = high_resolution_clock::now();
    vectorTime = duration_cast<milliseconds>(end - start).count();

    start = high_resolution_clock::now();
    readData(list);
    end = high_resolution_clock::now();
    listTime = duration_cast<milliseconds>(end - start).count();

    start = high_resolution_clock::now();
    readData(set);
    end = high_resolution_clock::now();
    setTime = duration_cast<milliseconds>(end - start).count();

    cout << "Operation"


    return 0;
}

template <typename Container>
void readData(Container &container) {
    ifstream inFile("codes.txt");
    string line;
    while (getline(inFile, line)) {
        container.insert(container.end(), line);
    }
    file.close();
}

template <typename Container>
void insertMid(Container &container, const string &value) {
    auto it = container.begin();
    advance(it, container.size() / 2);
    container.insert(it, value);
}

void insertMid(set<string> &s, const string &value) {
    s.insert(value);
}

template <typename Container>
void deleteMid(Container &container) {
    auto it = container.begin();
    advance(it, container.size() / 2);
    container.erase(it);
}

void deleteMid(set<string> &s) {
    auto it = s.begin();
    advance(it, s.size() / 2);
    s.erase(it);
}
