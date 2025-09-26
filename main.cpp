#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand(time(0));
    int N, i, j, t;

    cout << "Qual'è il numero di cifre?" << endl;

    cin >> N;

    vector <int> R(N);

    i=0;

    while(i<N)
    {
        R[i] = rand() & (N*10);

        i=i+1;
    }

    bool scambio;

    scambio=true;

    i=0;

    while(i<N-1 && scambio)
    {
        scambio=false;

        j=0;

        while(j<=(N-2)-i)
        {
            if(R[j]>R[j+1])
            {
                t=R[j];
                R[j]=R[j+1];
                R[j+1]=t;
                scambio=true;
            }
            j=j+1
        }
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout << R[i] << endl;

        i=i+1;
    }
    
}


