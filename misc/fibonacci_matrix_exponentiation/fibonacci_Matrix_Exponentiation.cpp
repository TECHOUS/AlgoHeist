// Finding nth Fibbonaci Number modulo 10^9+7 in O(Logn)

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
// Initialize a matrix construct
long long m=1e9+7;
struct Matrix{
    long long a[2][2]={{0,0},{0,0}};
    Matrix operator *(const Matrix& other){
        Matrix product;
        rep(i,2)rep(j,2)rep(k,2){
            product.a[i][k]=((product.a[i][k])+(a[i][j]) * (other.a[j][k]))%m;
                   }
        return product;
    }
};
// Function for binary exponentiation of matrices
Matrix binpow(Matrix a, long long b) {
    Matrix res;
    rep(i,2)res.a[i][i]=1;
    while (b > 0) {
        if (b & 1)
            res = res * a ;
        a = a * a ;
        b >>= 1;
    }
    return res;
}
int main(){
    long long  n;
    cin>>n;
    if(n==0){cout<<0<<endl;
    return 0;}
    Matrix transition;
    transition.a[0][0]=1;
    transition.a[0][1]=1;
    transition.a[1][0]=1;
    transition.a[1][1]=0;
    Matrix ans=binpow(transition,n-1);
    cout<<(ans.a[0][0]+m)%m<<endl;

}