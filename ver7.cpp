#include <iostream>
using namespace std;
int main(){
    int n=0;
    int total=0;
    string name="";
    string id="";
    cout << "input name: ";
    cin>>name;
    cout <<"name is" << name << endl;
    cout << "input  id:";
    cin >>id;
    cout <<"id is" <<id<<endl;
    cout <<"輸入一個數值:";
    cin >> n ;
    for (int i=1; i<=n ; i++){
        total+=i;

    }
    cout <<"The sum of 1 to "<<n<<" is "<<total;
    return 0;

    //do while
    i=1;
    total =0;
    do{
        total+=i;
        i++;
    }while(i<=n);
    cout <<"do while loop: The sum of 1 to "<<n<<" is "<<total;
    return 0
}
