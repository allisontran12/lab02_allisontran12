// starZ.cpp   A demonstration of ASCII Art printing C characters

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starZ(int width);
void runTests(void);

// Write starZ per specifictions at 
// https://foo.cs.ucsb.edu/16wiki/index.php/F14:Labs:lab04
// and so that internal tests pass, and submit.cs system tests pass


string starZ(int width)
{
  string result="";
  if(width>=3){
    for (int i=0; i<width;i++){
      result+="*";}
    result+="\n";
    for (int j=0; j<width-2; j++){
      int locstar=width;
      for (int k=0; k<width;k++){
	if (k==locstar){
	  result+="*";
	}else{
	  result+=" ";
	}} locstar--;


    }
	   //space star lines}
    for (int i=0; i<width;i++)
	    result+="*";
	  result+="\n";
  }
    // result = "stub"; // TODO: remove this line, replace with correct code
  return result;
 
}

// Test-Driven Development; check expected results against actual

void runTests(void) {

  // The following line works because in C and C++ when string literals
  // are separated only by whitespace (space, tab, newline), they 
  // automatically get concatenated into a single string literal

  string starZ3Expected = 
    "***\n"
    " * \n"
    "***\n";
  
  assertEquals(starZ3Expected,starZ(3),"starZ(3)");

  string starZ4Expected = 
    "****\n"
    "  * \n"
    " *  \n"
    "****\n";
  
  assertEquals(starZ4Expected,starZ(4),"starZ(4)");

  assertEquals("",starZ(0),"starZ(0)");
  assertEquals("",starZ(2),"starZ(2)");
}

// Test harness

void assertEquals(string expected, string actual, string message="") 
{
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}


// Main function

int main(int argc, char *argv[])
{

  // TODO: Add check for parameter
  // and code to print usage message

  // TODO: Add code to get width from cmd line arg
  // code that checks if it is -1; if so, call runTests()
  // then exit.
  
   if(argc == 2)                   //accepts only 1 command line argument apart from program name
   {
       int inp = *argv[1] - 48;
       if(inp >= 3)              
       {
           for(int i=0; i<inp; i++)
           {
               for(int j=0; j<inp; j++)
               {
                   if(i==0 || i==(inp-1) || i == (inp-j-1))
		   {cout << "*";}
                   else
		   {cout << " ";}
               }
               cout << endl;
           }
       }
       else
       {
           cout << "";
       }
   }
   else
   { cout << "ERROR! Program accepts 1 command line argument.\n";}
   return 0;
 
}
	

