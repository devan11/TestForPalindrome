
#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, const char * argv[]) {
  string number = argv[1];
  stringstream ss;
  ss << number;
  int x;
  if (!(ss >> x))
    cerr << "Invalid number " << argv[1] << '\n';
    
  string reverse = "";
  for(int i = number.length() -1 ;i > -1; i--) {
    reverse += number.at(i);
  }
  if(number.compare(reverse) == 0) {
    cout<< "This number is a plaindrome" << endl;
  }
    
  else {
    cout << "This number is not a plaindrome" << endl;
  }
    
  return 0;
}
