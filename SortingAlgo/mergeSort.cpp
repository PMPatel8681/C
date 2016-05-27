#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/**
 *  Mergesort algorithm (driver).
 *  Allocates the "tmpArray"
 */
template <typename Comparable>
unsigned long mergeSort( vector<Comparable> & a )
{
  vector<Comparable> tmpArray( a.size() );

  return mergesort( a, tmpArray, 0, a.size()-1 );
}

/**
 * Internal method that makes recursive calls.
 */
template <typename Comparable>
unsigned long mergesort( vector<Comparable> & a,
                         vector<Comparable> & tmpArray, int left, int right )
{
  unsigned long counter = 0;

  if ( left < right )
  {
    int center = ( left + right ) / 2;
    counter = mergesort( a, tmpArray, left, center );
    counter += mergesort( a, tmpArray, center+1, right );
    counter += merge( a, tmpArray, left, center+1, right );
  }

  return counter;
}

/**
 * Internal method that merges two sorted halves of a subarray.
 * a is an array of Comparable items.
 * tmpArray is an array to place the merged result.
 * leftPos is the left-most index of the subarray.
 * rightPos is the index of the start of the second half.
 * rightEnd is the right-most index of the subarray.
 */
template <typename Comparable>
unsigned long merge( vector<Comparable> & a, vector<Comparable> & tmpArray,
                     int leftPos, int rightPos, int rightEnd )
{
  unsigned long counter = 0;
  int leftEnd = rightPos - 1;
  int tmpPos = leftPos;
  int numElements = rightEnd - leftPos + 1;

  // Main loop
  while( leftPos <= leftEnd && rightPos <= rightEnd )
  {
    if( a[ leftPos ] <= a[ rightPos ] )
      tmpArray[ tmpPos++ ] = a[ leftPos++ ];
    else
      tmpArray[ tmpPos++ ] = a[ rightPos++ ];

    counter++;
  }

  while( leftPos <= leftEnd )    // Copy rest of first half
    tmpArray[ tmpPos++ ] = a[ leftPos++ ];

  while( rightPos <= rightEnd )  // Copy rest of right half
    tmpArray[ tmpPos++ ] = a[ rightPos++ ];

  // Copy tmpArray back
  for( int i = 0; i < numElements; i++, rightEnd-- )
    a[ rightEnd ] = tmpArray[ rightEnd ];

  return counter;
}

const int N = 1000000;

int main ()
{
  vector<int> rnumbers;
  clock_t start, finish;
  double duration;

  srand(42);
  start = clock();

  cout << "Sorting " << N << " numbers." << endl;

  for (int i=0; i<N; i++)
    rnumbers.push_back (rand ());

  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  
  cout << "Initializing vector: " << duration << " seconds." << endl;

  start = clock();

  unsigned long comp = mergeSort (rnumbers);

  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;

  cout << "Sorting vector: " << duration << " seconds." << endl;
  cout << "Number of comparisons: " << comp << endl;

  return 0;
}
