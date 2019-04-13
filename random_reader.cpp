#include <bits/stdc++.h>

using namespace std;

int main(){
    string arr[50];
    int b_14=0,b_15=0,b_16=0,b_17=0,b_18=0;
    fstream myfile;
    myfile.open("input.txt");
    for(int i=0;i<50;i++){
      myfile >> arr[i];
      if(arr[i][9] == "4"){
        b_14++;
      }
      if(arr[i][9] == "5"){
        b_15++;
      }
      if(arr[i][9] == "6"){
        b_16++;
      }
      if(arr[i][9] == "7"){
        b_17++;
      }
      if(arr[i][9] == "8"){
        b_18++;
      }
    }
    myfile.close();

    cout << "Number of batch 2014 people are " << b_14 << endl;
    cout << "Number of batch 2015 people are " << b_15 << endl;
    cout << "Number of batch 2016 people are " << b_16 << endl;
    cout << "Number of batch 2017 people are " << b_17 << endl;
    cout << "Number of batch 2018 people are " << b_18 << endl;
    
 return 0;
}
