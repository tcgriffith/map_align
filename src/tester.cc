#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <sstream>
#include <math.h>
#include <tuple>
#include <string>

using namespace std;

double exp_fast(double x){
    // WARNING fails if |x| > 1024
    //https://codingforspeed.com/using-faster-exponential-approximation/
    x = 1 + x/1024;
    x *= x; x *= x; x *= x; x *= x;
    x *= x; x *= x; x *= x; x *= x;
    x *= x; x *= x;
    return x;
}

double gaussian(double mean, double stdev, double x){return exp(-pow((x - mean),2)/(2*(pow(stdev,2))));}

int main(int argc, char const *argv[])
{
    double x = gaussian(0,1,1);

    cout << x << endl;
    printf("%f\n",x);
    return 0;
}
