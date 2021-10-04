#include<iostream>

using namespace std;

int main(){
    int n,m,i,j,cnt(0);
    cin >> n >> m;
    for(i = 0;i<n;++i){
        if(i%2 != 0 && cnt%2!= 0){
            for(int j = 0;j<m-1;++j){
                cout << ".";
            }
            cout << "#";
        }
        else if ( i%2 !=0 && cnt%2 == 0)
        {
            cout << "#";
            for(int j = 0;j<m-1;++j){
                cout << ".";
            }
            
        }
        
        else{
            for(int j = 0;j<m;++j){
            cout << "#";
        }
        cnt++;
        }
        
        cout << "\n";
    }
}