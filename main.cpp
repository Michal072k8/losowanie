#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    srand(time(NULL));
    liczba = rand()%99+1;
    cout<<liczba;
    return 0;
}
