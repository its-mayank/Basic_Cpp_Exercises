#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a,b,c,d,e,f;
    float sum=0;
    cout << "Enter your grade in Signals and Systems" << endl;
    cin >> a;
    cout << "Enter your grade in Basic Electrical Engineering" << endl;
    cin >> b;
    cout << "Enter your grade in Data Structures and Algorithms" << endl;
    cin >> c;
    cout << "Enter your grade in Digital Logic and Design" << endl;
    cin >> d;
    cout << "Enter your grade in Object oriented Analysis and Design" << endl;
    cin >> e;
    cout << "Enter your grade in Economics" << endl;
    cin >> f;
     
     switch(a){
     	case 'a':
     	sum=sum+4*10;
     	break;
     	case 'b':
     	sum=sum+4*8;
     	break;
     	case 'c':
     	sum=sum+4*6;
     	break;
     	case 'd':
     	sum=sum+4*4;
     	break;
     }

      switch(b){
     	case 'a':
     	sum=sum+5*10;
     	break;
     	case 'b':
     	sum=sum+5*8;
     	break;
     	case 'c':
     	sum=sum+5*6;
     	break;
     	case 'd':
     	sum=sum+5*4;
     	break;
     }

     switch(c){
     	case 'a':
     	sum=sum+5*10;
     	break;
     	case 'b':
     	sum=sum+5*8;
     	break;
     	case 'c':
     	sum=sum+5*6;
     	break;
     	case 'd':
     	sum=sum+5*4;
     break;
 }

     switch(d){
     	case 'a':
     	sum=sum+4*10;
     	break;
     	case 'b':
     	sum=sum+4*8;
     	break;
     	case 'c':
     	sum=sum+4*6;
     	break;
     	case 'd':
     	sum=sum+4*4;
     break;
 }

     switch(e){
     	case 'a':
     	sum=sum+4*10;
     	break;
     	case 'b':
     	sum=sum+4*8;
     	break;
     	case 'c':
     	sum=sum+4*6;
     	break;
     	case 'd':
     	sum=sum+4*4;
     break;
 }

     switch(f){
     	case 'a':
     	sum=sum+3*10;
     	break;
     	case 'b':
     	sum=sum+3*8;
     	break;
     	case 'c':
     	sum=sum+3*6;
     	break;
     	case 'd':
     	sum=sum+3*4;
     break;
 }

     cout << "Your CGPA for 3rd sem is:" << sum/25.00 << endl;

	return 0;
}