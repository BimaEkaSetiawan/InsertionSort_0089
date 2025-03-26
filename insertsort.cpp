#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n; // membuat variable inputan n

void input()
{
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array : "; // membuat inputan jumlah element array
        cin >> n; //memanggil variable inputan n

        if (n<= 20)
        {
           break;
        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 Element.\n"; //menampilkan pesan jika data lebih dari 20
        }

    }
    cout << endl;
    cout << "===============" << endl;
    cout << "Masukan Element Array" << endl;
    cout << "---------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data Ke-" << ( i + 1 ) << "; ";
        cin >> arr[i];
    }
    
} 

void insertionSort()
{
    int temp;
    int j, i;

    for ( i = 1; i <= n - 1; i++)
    {
       temp  = arr[i];

       i = i-1;

       while (j >= 0 && arr[j] > temp)
       {
        arr[j + 1] = arr[j];
        j--;
       }
       arr [j+1] = temp;
    }
    
}