#include<iostream>
#include "time.h"
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int uid1 = rand() % 1000 + 1;
    int uid2 = rand() % 1000 + 1;
    cout<<"uid1 "<<uid1<<"\n"<<"uid2"<<uid2<<endl;
    return 0;
}
