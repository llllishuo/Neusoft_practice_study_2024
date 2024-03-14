#include <ios>
#include <iostream>
using namespace std;



void add_value(int v){
  ++v;
  std::cout<< "fun(v): v = "<< v << endl;
}
void add_value_poi(int& v){
  ++v;
  std::cout<< "fun(&v): v = "<< v << endl;
}
void add_value_cite(int* v){
  ++(*v);
  std::cout<< "fun(*v): v = "<< v << endl;
}

int main (int argc, char *argv[]) {
  ios_base::fmtflags fmtflags;
  fmtflags = cout.flags();


  int v;
  v = 100;
  std::cout<< "init: v = "<< v << endl;
  {
    v=101;
    std::cout<< "\{ v = "<< v <<" \}" << endl;
  }
  std::cout<< " - v = "<< v << endl;
  add_value(v);
  std::cout<< " - v = "<< v << endl;
  add_value_poi(v);
  std::cout<< " - v = "<< v << endl;
  add_value_cite(&v);
  std::cout<< " - v = "<< v << endl;

  return 0;
}


