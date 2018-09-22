#include <iostream>
#include <vector>
using namespace std;
template<class t>
void linearsearch(vector<t> input,int find)
{
    register int i=0;
    int flag = 0;
    for(i=0;i<input.size();i++)
    {
        if(find == input[i])
        {
            flag =1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout << "Element not found"<<endl;
    }
    else if(flag==1)
    {
        cout << "Element found!!!"<<endl;
    }
}

int main()
{
    int n; //size of the array
    cout << "Enter the number of elements you want in the array"<<endl;
    cin >> n;
    int i=0;
    vector<int> arr;
    int num;
    for(i=0;i<n;i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    int f; //element to find
    cout << "enter the element to found"<<endl;
    cin >> f;
    linearsearch(arr,f);
}
