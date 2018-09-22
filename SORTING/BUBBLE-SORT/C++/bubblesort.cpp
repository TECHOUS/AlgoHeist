#include <iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int>);
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    vector<int> arr; //vector used like array
    int i=0;
    int num; //number for dynamic array
    cout << "Enter the elements of the array" << endl;
    for(i=0;i<n;i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    bubblesort(arr);
}
void bubblesort(vector<int> array)
{
    cout << "BUBBLE SORTED ARRAY: ";
    //doing bubblesort for doing ascending order
    for(int i=array.size()-1;i>0;i--) //loop for decreasing array size
    {
        for(int j=0;j<i;j++) //loop for 
        {
            if(array[j] > array[j+1])
            {
                //swapp
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    //output the array
    for(int i=0;i<array.size();i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}