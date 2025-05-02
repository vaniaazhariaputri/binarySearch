#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{ // Prosedur input
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array:";
        cin >> nPanjang;
        if (nPanjang <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }

    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << "=";
        cin >> element[i];
    }
}


void binarySearch()
{
    cout << "Masukkan element yang ingin dicari =";
    cin >> x;                   // step 1
    int low = 0;                // step 2
    int high = nPanjang - 1;    // step 3
    int mid = (low + high) / 2; // step 4
    do
    {
        int mid = (low + high) / 2; // step 4
        if (element[mid] == x)
        {                                                  // step 5
            cout << "Ditemukan pada index" << mid << endl; // step 5a
            return;                                        // step 5b
        }
        if (x < element[mid])
        {                   // step 6
            high = mid - 1; // step 6a
        }
        if (x > element[mid])
        {                  // step 7
            low = mid + 1; // step 7a
        }
        if (low <= high)
        {
        }

    } while (low <= high); // step 8
    if (low > high)
    {
        cout << x << "Tidak ditemukan" << endl; // step 9
    }
}

int main()
{
    
}