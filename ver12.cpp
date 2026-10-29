#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++){
        for (int j=i; j<s.length()&&j<i+2;j++){
            for (int k=i;k<=j;k++){
                cout<<s[k];
            }
            cout<<" ";
        }
    }
    return 0; 
}