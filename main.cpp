#include <iostream>
#include "Fibonacci.h"
#include "Genetico.h"
#include <vector>

int main() {
    Fibonacci f;
    Genetico g;
    vector<int> madre = {9,3,4,7,4,3};
    vector<int> padre = {5,3,4,0,3,4};

    cout << f.fibonacciPD(11) <<"/n" << g.rep(padre,madre).at(2);

    return 0;
}
