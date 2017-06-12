//#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//using namespace std;

int main()
{
#if 0
    void *data;
    int a = 10;

    data = &a;

    cout<<"static_cast"<<*(static_cast<int*>(data))<<endl;
    cout<<"reinterpret_cast"<<*(reinterpret_cast<int*>(data))<<endl;
    cout<<"reinterpret_cast"<<(reinterpret_cast<intptr_t>(data))<<endl;
#endif
    int uniqueId = rand();
    printf("uniqueId : %d\n",uniqueId);
    uniqueId = uniqueId % 100 + 1;
    printf("uniqueId : %d\n",uniqueId);
    return 0;
}
