#include<iostream>
#include <bits/stdc++.h>
using namespace std;

double Power(double m,int n=2);

double Power(double m,int n){
    return pow(m,n);
}

int main(){
    double m;int n;
    cout << "Enter m: \n";
    cin >> m;
    cout << "Without power: " << Power(m) << endl;
    cout << "Enter n: \n";
    cin >> n;
    cout << "With power " << Power(m,n) << endl;
}