#include <iostream>
#include <fstream>
using namespace std;

int main()
{
#if 0
     bool isFileEmpty = true;
  streampos begin,end;
  ifstream file ("RFReaderEventStorageFile.bin", ios::binary);
    //  file.clear();
  // file.seekp(ios::beg);
  //ifstream file( filepath.c_str(), ios::binary | ios::ate);
  file.seekg(0, ios::beg);
  begin = file.tellg();
  file.seekg (0, ios::end);
  end = file.tellg();
  file.close();
  cout << "size is: " << (end-begin) << " bytes.\n";

  if((end-begin) != 0)
  {
    isFileEmpty = false;
  }
#endif

  char arry[];

  
    return 0;
}


