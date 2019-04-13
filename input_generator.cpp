#include <iostream>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
  srand(time(NULL));
    string branches[3] = {"CSE","EE","ME"}; //defines an array of string which contain 3 diffrent existing branches in our institute
    int entries = rand()%(301)+200; // generates an number between 200 and 500 this will be our number of total entries
    fstream myfile; // opens the stream named myfile.
    myfile.open("input.txt"); // opens the file "input.txt" in the myfile stream.

    for(int i=0;i<entries;i++){ // we would run this loop for max of random int between 200 and 500 to fill up entries in our file
      int year = rand()%5 + 14; // generates the random number between 14 and 18 as these are the existing batches in institute.
      int roll_num  = rand()%61; // generates random number between 0 and 60 as these will be the roll number of the students as maximum branch streagth is 60.
      int branch = rand()%3 ; // geenerates random number between 0 and 2 so that we can randomly choose between the 3 brances in array
      myfile << "Mayank " << "B" << year <<branches[branch] << "0" << roll_num << " " << branches[branch] << endl; //prints all necessary information to file in specific format.
      }
    myfile.close(); // closes the opened myfile stream.
    return 0;
}
