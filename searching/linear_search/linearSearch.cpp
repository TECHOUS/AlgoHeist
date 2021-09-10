#include <iostream>
#include <vector>
using namespace std;
template<class t>
void linearSearch(vector<t> input_array,int key)
{
    register int i=0;
    bool flag = false;
    for(i=0;i<input_array.size();i++)   //iterating the input array
    {
        if(key == input_array[i])    //If the value is found then return true
        {
            flag = true;
            break;
        }
        else                           //if value not found then return false
        {
            flag=false;
        }
    }
    if(flag==false)
    {
        cout << "Element not found"<<endl;
    }
    else if(flag==true)
    {
        cout << "Element found!!!"<<endl;
    }
}

int main()
{
    int array_size; //size of the array
    cout << "Enter the number of elements you want in the array"<<endl;
    cin >> array_size;
    int i=0;
    vector<int> array;
    int num;
    //Taking input for the array
    cout<<"Enter the Elements of the Array"<<endl;
    for(i=0;i<array_size;i++)
    {
        cin >> num;
        array.push_back(num);
    }
    int key; //element to find
    cout << "enter the element to find"<<endl;
    cin >> key;
    //function called for searching
    linearSearch(array,key);
}
