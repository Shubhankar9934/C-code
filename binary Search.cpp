#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int *A;
    int size;
    int length;

};
void Set_array(class Array arr)
{
    cout<<("Enter the elements of an array:");
    for(int i=0;i<arr.length;i++)
    {
        cin>>arr.A[i];
    }
}
void Display(class Array arr)
{
    cout<<("Elements of an array are:");
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<(" ");
    }
}
int Binary_search(class Array arr)
{
    int key;
    cout<<("\nEnter a key element you want to search in this array:");
    cin>>key;
    int low=0;
    int high=arr.length;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(key==arr.A[mid]){
            cout<<("Search is successful")<<endl;
            return 0;
        }
        else if(key<arr.A[mid])
            high=mid-1;
        else
            low=mid+1;

    }
    cout<<("Search is Unsuccessful");
    return 0;
}

int main()
{
    Array arr;
    cout<<("Enter the size of an array:");
    cin>>arr.size;
    cout<<("Enter the length of an array:");
    cin>>arr.length;
    arr.A=new int[arr.size];
    Set_array(arr);
    Display(arr);
    Binary_search(arr);

}
