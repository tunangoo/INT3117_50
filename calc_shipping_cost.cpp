#include <bits/stdc++.h>

using namespace std;

int calc_shipping_cost(int weight, int distance) {
    if(weight < 1 || weight > 100) {
        return 0;
    }
    if(distance < 1 || distance > 1000) {
        return 0;
    }
    if(weight <= 10) {
        if(distance <= 100) {
            return 20000;
        } else {
            return 30000;
        }
    } else {
        if(distance <= 100) {
            return 50000;
        } else {
            return 100000;
        }
    }
}
int main()
{
    int weight, distance;
    cin >> weight >> distance;
    cout << calc_shipping_cost(weight, distance);
}
