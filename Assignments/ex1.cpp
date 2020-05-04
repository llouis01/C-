#include <iostream>
using namespace std;



void funA(int &a, int b){

      a = a + a;

      b = b + a;

      cout << a << b << endl;

}



int funB(int a[], int c){

      a[c - 1] = a[c - 1] - 1;

      return a[c - 1];

}

// void funC(int x, int y, int z){
//
  //    z = x[y];
 // }

 

int main(){



      int x[3] = {1,2,3};



      int c = 111;



      cout << x[ x[1] ]<< endl;
  }
