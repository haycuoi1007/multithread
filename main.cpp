#include <iostream>
#include <cstdlib>
#include <thread>
using namespace std;
#define SO_THREAD     4
void *InLoiChao(void *threadid)
{

   cout << "Hello World! Thread ID la " << threadid << endl;
   pthread_exit(NULL);

}
int main ()
{

}
