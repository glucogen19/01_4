#include <cstdio>
#include <iostream>
using namespace std;
class TBook {
    public:
        string Name;
        string Author;
      int Count;
	void data(string n, string a, int c) {
	Name = n;
	Author = a;
    Count = c;
	}
};

int main() {
    TBook tbook;
	tbook.Name = "Treasure Island";
    tbook.Author = "Robert Louis Stevenson";
    tbook.Count = 1;
    cout << "Name:" << tbook.Name << endl;
    cout << "Author:" << tbook.Author << endl;
    cout << "Count:" << tbook.Count << endl;
    return 0;
}

