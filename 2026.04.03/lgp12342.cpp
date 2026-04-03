#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    for(int i = 0;i < n;i++){
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int ans = 0;
    for(int i = 0;i < n;i++){
        cout << A[i] - B[i];
        if(A[i] - B[i] < 0){
            ans++;
        }
    }
    // 12 14 22 31
    // 3 19 27 44

    cout << ans;
    
    return 0;
}