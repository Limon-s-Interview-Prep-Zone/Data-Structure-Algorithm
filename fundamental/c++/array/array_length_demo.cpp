#include <iostream>
#include <array>

using namespace std;

void arrayLength(){
    int arr[3];
    cout<<" end(arr) - begin(arr) = "<< end(arr) - begin(arr) <<endl;
    cout<<" sizeof(arr)/sizeof(arr[1]) = "<< sizeof(arr)/sizeof(arr[1]) <<endl; // using total size of memory then divide by each element memory space
    cout<<" *(&arr+1) - arr = "<< *(&arr+1) - arr<<endl;

    // to use STL size() method
    array<int, 3> arr1;
    cout << " STL arr1.size:()= " << arr1.size() << endl;

    for(int i=0; i<4; i++){
        cout<<" i = "<< i <<"\t address = "<<&arr[i]<<endl;
    }
    cout<<" arr = "<<arr<<endl;
    cout<<" &arr = " <<&arr<<endl;
    cout<<" begin(arr) = " <<begin(arr)<<endl;
    cout<<" &arr + 1 = " <<&arr+1<<endl;
    cout<<" end(arr) = " <<end(arr)<<endl;
}
int main()
{
    arrayLength();
    return 0;
}