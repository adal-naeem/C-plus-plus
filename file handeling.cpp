#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream write("test.txt");
  write<<"sdfghsdfghdsfghjsdfghj"<<endl;
  
  
  string st;
  ifstream read("tt.txt");
  getline(read,st);
  cout<<st;
  
  
}
