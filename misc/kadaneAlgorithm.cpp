# include <iostream>
# include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int currSum = 0;
    int maxSum = a[0];
    for(int i = 0; i < n; i++){
        currSum += a[i];
        maxSum = max(maxSum,currSum);
        if (currSum < 0){
            currSum = 0;
        }
    }

    cout<<maxSum<<" ";

    return 0;
}
