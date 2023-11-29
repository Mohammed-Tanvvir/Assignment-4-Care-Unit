#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include <vector>

// Write functions here
// feet to meters
double conversionMeters(double height_feet) {
    double height_meters = height_feet / 3.281;
    return height_meters;
}

//bmi via 1.8 meters
float BMIcalculator(double weight, double height = 1.8) {
    //calc height squared
    double height_squared = height * height;
    //calc bmi using weight abnd height
    float bmi = weight / height_squared;
    return bmi;
}



int main() {
    //DO NOT MODIFY MAIN()!!!
    
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}
