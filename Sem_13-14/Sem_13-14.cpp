#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(0, "");
    string strData;
    ifstream inp("input.txt");
    int n;
    cout << "Какую строку вы хотите получить из файла?" << endl;
    cin >> n;
    inp.seekg(0, ios::beg);
    getline(inp, strData);
    int len = strData.length();
    cout << "Ваша строка: " << endl;
    inp.seekg((n - 1) * (len + 2), ios::beg);
    getline(inp, strData);
    cout << strData;
}

