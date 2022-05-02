#include<iostream>
#include<time.h>
using namespace std;

int main(){

    int n, ma, mi;
    cout<<"Random Unique Array of Integer Numbers in Range(Min,Max)"<<endl;
    cout<<"Min[inclusive]: ";
    cin>>mi;
    cout<<"Max[exclusive]: ";
    cin>>ma;
    cout<<"Size of array[Must not be greater than Max]: ";
    cin>>n;
    int arr[n];
    for(int j=0 ;j<n;j++)
    {
        arr[j] = -1;
    }

    srand(time(0));
    int i = 0;
    while(1){
        if(i==n){
            break;
        }

        int random_integer = rand() % (ma - mi) + mi;
        int check = 0;
        for(int j=0 ;j<n;j++)
        {
            if(arr[j] == random_integer)
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            arr[i] = random_integer;
            i++;
        }
    }

    for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
}
