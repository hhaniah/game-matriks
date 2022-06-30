#include <iostream>
using namespace std;

int main()
{
    int matriks [10][10];
    int baris, kolom, i, j;

    cout<<"masukkan jumlah baris = ";
    cin>>baris;

    cout<<"masukkan jumlah kolom = ";
    cin>>kolom;

        for (i=1; i<=baris; i++)
        {
            for (j=1; j<=kolom; j++)
            {
                cout<<"masukkan baris ke "<<i<<"kolom ke "<<j<<" : ";
                cin>>matriks[i][j];
            }
            cout<<"\n";
        }
        cout<<"menampilkan matriks : "<<endl;
            for (i = 1; i<=baris; i++)
            {
                for (j=1;j<=kolom; j++)
                {
                    cout<<matriks[i][j];
                    cout<<"\t";
                }
            }
}
