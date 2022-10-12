#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split(const string str, const char separator){

  int str_size = str.size();
  string tmp_str;
  char tmp_char;
  vector<string> out;
  int start;

  if (str[0] == separator) {
    start = 1;
  }
  else {
    start = 0;
  }
  
  for (int i0 = start; i0 < str_size; ++i0) {
    
    if (str[i0] == separator) {
      out.push_back(tmp_str);
      tmp_str.clear();
    }
    else {
      tmp_str += str[i0];
    }

    if (i0 == str_size-1) {
      out.push_back(tmp_str);
    }
    
  }

  return out;
}
