#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int a;
    bool found=false;

    cout << "Search element: ";
    cin >> a;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == a)
        {
            found=true;
            cout << "Found " << a << " at location " << i << endl;
            break;
        }
        else{
            continue;
        }
    }
    
    if(found==false){
        cout<<"Not found";
    }

    return 0;
}

