#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split(const string str);

vector<string> split(const string str, const char separator){

  int str_size = str.size();
  string tmp_str;
  char tmp_char;
  vector<string> out;

  for (int i0 = 0; i0 < str_size; ++i0) {
    
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

int main(int argc, char *argv[])
{

  string full_str = "Here is my full string !";
  vector<string> my_vec;// = {"Here","is","my","full","string","!"};

  cout << "We're here !" << endl;

  // my_vec.push_back("Here");
  // my_vec.push_back("is");
  // my_vec.push_back("my");
  // my_vec.push_back("full");
  // my_vec.push_back("string");
  // my_vec.push_back("!");

  
  // my_vec[0] = "Here";
  // my_vec[1] = "is";
  // my_vec[2] = "my";
  // my_vec[3] = "full";
  // my_vec[4] = "string";
  // my_vec[5] = "!";

  cout << "My string before :" << endl << full_str << endl;

  my_vec = split(full_str,' ');
  
  cout << "My string after :" << endl;
  
  for (int i0 = 0; i0 < 6; ++i0) {
    cout << my_vec[i0] << endl;
  }

  
  return 0;
}
