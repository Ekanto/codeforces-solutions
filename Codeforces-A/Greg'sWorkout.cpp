    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main(){
        int n,i,chest = 0,biceps = 0,back = 0;
        cin >> n;
        int arr[n];
     
        for(int i = 0;i<n;++i){
            cin >> arr[i];
     
        }
        for(int i = 0;i<n;i = i+3){
            chest = chest + arr[i];
        }
        for(int i = 1;i<n;i = i+3){
            biceps+=arr[i];
        }
        for(int i = 2;i<n;i = i+3){
            back+=arr[i];
        }
     
        if((chest> biceps)&&(chest > back)) cout << "chest" << "\n";
        else if ((biceps > chest) && (biceps > back))
        {
            cout << "biceps" << "\n";
        }
        else if ((back > chest) && (back > biceps))
        {
            cout << "back" << "\n";
        }  
    }
