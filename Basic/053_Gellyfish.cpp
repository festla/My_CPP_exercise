#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Gellyfish 的攻击次数
        int gelly_attack_turns = (b < d ? b : d);  // Flower 的较弱目标总血量
        // Flower 的攻击次数
        int flower_attack_turns = (a < c ? a : c); // Gellyfish 的较弱目标总血量

        if (gelly_attack_turns <= flower_attack_turns) {
            cout << "Gellyfish\n";
        } else {
            cout << "Flower\n";
        }
    }
}