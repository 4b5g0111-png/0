#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string id;
    int n;
    int total = 0;

    cout << "input name and id : ";
    cin >> name >> id;
    cout << "name is " << name << endl;
    cout << "id is " << id << endl;
    cout << "please input a number n: ";
    cin >> n;

    // For loop
    for (int i = 1; i <= n; i++) {
        total += i;
        // total = total + i;
    }

    cout << "for-loop : The sum of 1 to " << n << " is " << total << endl;

    
    total = 0;
    int i = 1;
    while (i <= n) {
        total += i;
        i++; 
    }

    cout << "while-loop : The sum of 1 to " << n << " is " << total << endl;



    i = 1;
    total = 0;
    do{
        total += 1;
        i++;
    } while (i<=n);
    cout << "do-while-loop : The sum of 1 to " << n << " is " << total << endl;
        
    




    return 0;
}
