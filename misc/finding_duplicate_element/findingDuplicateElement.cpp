 //finding single duplicate element in an array/vector with time complexity: O(n) in worst case and space complexity: O(1)
 
 #include <iostream>
 #include<vector>
 using namespace std;
 
 int findDuplicate(vector<int>& nums) {
        int t = nums[0];
        int h = nums[0];

        do {
            t = nums[t];
            h = nums[nums[h]];
        } while (t != h);

        t = nums[0];
        while (t != h) {
            t = nums[t];
            h = nums[h];
        }

        return h;
    }

int main(){
	vector<int> v;
	int x;
	for(int i=0;i<10;i++){
		cin>>x;
		v.push_back(x);
	}
	cout<<findDuplicate(v);

}