// ----- Headers.
// C headers come first.
#include <cmath>
#include <cstdlib>
#include <ctime>

// C++ headers come next.
#include <iostream>
#include <fstream>

// ----- Global declarations.
using namespace std;

const double PI = 3.14159265;

// ----- Function prototypes.
void line_maker(); // Draws lines of random length in file "linegraph.txt".
void graph_maker(); // Draws a sine graph as text in file "graph.txt".

// ----- Main program.
int main()
{
  // Seed random number generator and draw lines.  
  srand(time(NULL));
  line_maker();
  // Return with success.
  return 0;
}

// ----- Function definitions.

// Draws a sine graph as text in file "graph.txt".
void graph_maker() 
{
    // ... your code here.
}

// Draws lines of random length in file "linegraph.txt".
void line_maker()
{
  // Open file for writing.
  ofstream myfile("linegraph.txt");
  // Write 10 lines of random length to file.
  for (int count = 0; count < 10; count++) {
    int random = rand() % 10;  // random in [0,9]
    cout<<random<<" ";
    for (int i = 0; i<random; i++)
      myfile<<"*";
    myfile<<"\n";
  }
  // Close file.
  myfie.close();
}
