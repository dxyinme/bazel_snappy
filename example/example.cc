#include "snappy.h"
#include <string>
#include <iostream>
#include <assert.h>
int main() {
  std::string p = "testowfon934ty84tjf238ybc3r82422i0fry9g3gh";
  std::string output;
  snappy::Compress(p.data(), p.size(), &output);
  std::string tmp;
  snappy::Uncompress(output.data(), output.size(), &tmp);
  std::cout << tmp << std::endl << p << std::endl;
  std::cout << "is equal: " << (tmp == p) << "\n";
  return 0;
}