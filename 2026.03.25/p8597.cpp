#include <iostream>
#include <string>

using namespace std;

int main(){
    string start, end;
    cin >> start >> end;

    int ans = 0;
    
    for(int i = 0;i < start.size();i++){
        if(start[i] != end[i]){
            ans++;
            if(start[i] == '*'){                
                start[i] = 'o';
            }else{
                start[i] = '*';
            }

            if(i + 1 < start.size()){
                if(start[i + 1] == '*'){
                    start[i + 1] = 'o';
                }else{
                    start[i + 1] = '*';
                }
            }
        }
    }

    cout << ans;

    return  0;
}