#include <iostream>

using namespace std;

void my_array (const int arr[],size_t size);

void my_array ( const int arr[],size_t size)
{
    for (size_t i{0};i<size;++i)
    {
        cout << "Array " << i << " contains." << arr[i] << endl;
    }
}

int main()
{
    size_t x{5};
    int my_arr[] {110,235,345,34,343,34343,54};
    my_array(my_arr,x);
    return 0;
}

// All functons

