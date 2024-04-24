#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    string test;
    bool cont = true;

    cout << "Enter a string that will be tested for duplicates: " << endl;
    cin >> test;

    int size = test.size();

    char list[size];
    char check[size];

    cout << "Size of word is: " << size << endl;

    //Remember the .size function

    //Stores each character into the list array
    for (int i = 0; i < test.size(); i++)
    {
        list[i] = test[i];
        check[i] = test[i];
    }

    int z = 0;
    

    while(cont == true)
    {
        //use the != so that they don't test the same index
        for(int t = 0; t < size; t++)
        {
            if (z != t && list[z] == check[t])
            {
                char first = list[z];
                char second = check[t];
                cout << "first duplicate found was: " << first << " that is compared to: " << second << endl;
                cont = false;
            } 
        }

        z++;

        if (z >= size)
        {
            cont = false;
            cout << "No duplicate was found" << endl;
        }
    }
    //This small project checks for duplicates in a string entered by the user.

    return 0;
}
