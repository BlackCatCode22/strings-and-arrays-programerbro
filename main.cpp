#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\n\n Welcome to the demo for arrays and strings!\n\n";
    //create an int arrays
    int myNumber[12];

    myNumber[0] = 11;
    myNumber[1] = 2;
    myNumber[2] = 333;
    myNumber[11] = 11111111111;

    cout << "\n\n expected is 11 " << myNumber [1] << endl;
    cout << "\n\n expected is a null value " << myNumber [2] << endl;
   // cout << "\n\n ?? out of bounds ?? ..." << myNumber[12] << endl;

   // Lets code up a for loop
   for (int i = 0; i < 12; i++) {
    cout << "\n\n " << i << " " << myNumber[i];
   }
   cout << endl << endl;
//2 demension array
int numberGrid[3][2] =  {
                        {1,2},
                        {3,4},
                        {5,6}
                };
                for (int i =0; i < 3; i++){
                    for (int j = 0; j< 2;j++){
                        cout << numberGrid[i][j];
                    }
                    cout << endl;
                }
cout << numberGrid[0][1];


//3rd dimension array
//3 rows , 2 colums
int my2Darray [3][2];

// hard-code the values
my2Darray [0][0] =11;
my2Darray [0][1] =12;

my2Darray [1][0] =21;
my2Darray [1][1] =22;

my2Darray [2][0] =31;
my2Darray [2][1] =32;

// nested for loop
for (int i = 0; i < 3; i++){
    for (int j=0; j<2;j++){
        cout << my2Darray [i][j] << " " ;
    }
    cout << "\n\n";
}
cout << "\n\n\n";

int Row0Col0 = 71;


// fill my 2d array with a nested for () loop!
for (int i = 0; i < 3; i++){
    for (int j=0; j<2;j++){
        cout << my2Darray [i][j] <<  Row0Col0++ ;
    }
    //subtract two
    Row0Col0 -=2;
    Row0Col0 +=10;
    cout << "\n\n\n";
}


    return 0;
}
