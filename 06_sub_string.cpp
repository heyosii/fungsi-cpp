#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    // Mengambil substring dari indeks 33 sampai 40
    string sub = s.substr(32, 8);
    cout << sub << endl;
}
