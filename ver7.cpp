#include <iostream>
using namespace std;
int main(){
    int n=0;
    int total=0;
    cout <<"輸入一個數值:";
    cin >> n ;
    for (int i=1; i<=n ; i++){
        total+=i;

    }
    cout <<"The sum of 1 to "<<n<<" is "<<total;
    return 0;
}
