// Eunice Wu, Ryan Bao
// October 15, 2024
// Lab 6

#include <fstream> // include fstream libaray so you can
#include <iostream> // use of/ifstream to read and write files
#include <iomanip>
#include <string>

using namespace std;
 
int main ( ) 
{
   // declares input/output stream
   ifstream inData;
   ofstream outData;

   // declares variables for values to be stored and used
   int number_one;
   int number_two;
   char ascii;
   string text; 

   // opens the files
   inData.open("inData.txt");
   outData.open("outData.txt");

   // reads the two integers, the character, and text from inData text
   inData >> number_one >> number_two >> ascii >> text;
   
   // outputs sum of two integers, the character a letter after, and the text
   outData << number_one + number_two << endl; 
   ascii = ascii + 1;
   outData << ascii<< endl; 
   outData << text << endl; 
 
   // closes the input and output files
   inData.close();
   outData.close();

   return 0; 
}
/*
1 2
B
Helo

3
C
Helo

*/
