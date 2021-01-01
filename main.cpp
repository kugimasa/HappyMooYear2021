#include <iostream>
#include <fstream>
#include <string>

void HappyMooYear() {
  using namespace std;
  ifstream moo_file("Moo.txt");
  string moo_str;

  if (moo_file.fail()) {
    cerr << "File failed to open." << endl;
  }
  while (getline(moo_file, moo_str)) {
    cout << moo_str << endl;
  }
}

int main() {
  HappyMooYear();
  return 0;
}