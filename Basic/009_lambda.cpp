#include <iostream>
using namespace std;
int main(){
    int multiplier = 3;
    auto times = [multiplier](int a) {
        return a * multiplier;
    };
    int result = times(6); // result = 15
    cout  <<  "value: " << result << endl;
    int expiresInDays = 45;
    auto updateDays = [&expiresInDays](int newDays) {
        expiresInDays = newDays;
    };
    updateDays(12); // expiresInDays = 30
    cout  <<  "reference: " << expiresInDays << endl;
    return 0;
}