#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int cut_off = 10;

/**
 * Quicksort algorithm (driver).
 */
template <typename Comparable>
unsigned long quickSort( vector<Comparable> & a )
{
  return quicksort( a, 0, a.size( ) - 1 );
}

/**
 * Return median of left, center, and right.
 * Order these and hide the pivot.
 */
template <typename Comparable>
const Comparable & median3( vector<Comparable> & a, int left, int right )
{
  int center = ( left + right ) / 2;
  if( a[ center ] < a[ left ] )
    swap( a[ left ], a[ center ] );
  if( a[ right ] < a[ left ] )
    swap( a[ left ], a[ right ] );
  if( a[ right ] < a[ center ] )
    swap( a[ center ], a[ right ] );

  // Place pivot at position right - 1
  swap( a[ center ], a[ right - 1 ] );
  return a[ right - 1 ];
}

/**
 * Simple insertion sort.
 */
template <typename Comparable>
unsigned long insertionSort( vector<Comparable> & a, int p1, int p2 )
{
  int j; 
  unsigned long counter=0;

  for( int p = p1; p <= p2; p++ )
  {
    Comparable tmp = a[ p ];
    for( j = p; j > p1 ; j-- )
    {
      counter++;
      if (!(tmp < a[ j - 1 ])) break;
      a[ j ] = a[ j - 1 ];
    }
    a[ j ] = tmp;
  }

  return counter;
}

/**
 * Internal quicksort method that makes recursive calls.
 * Uses median-of-three partitioning and a cutoff of 10.
 * a is an array of Comparable items.
 * left is the left-most index of the subarray.
 * right is the right-most index of the subarray.
 */
template <typename Comparable>
unsigned long quicksort( vector<Comparable> & a, int left, int right )
{
  if( left + cut_off <= right )
  {
    Comparable pivot = median3( a, left, right );
    unsigned long counter=3; // accounts for the 3 comparisons in median3

    // Begin partitioning
    int i = left, j = right - 1;
    for( ; ; )
    {
      while( a[ ++i ] < pivot ) { counter++; }
      while( pivot < a[ --j ] ) { counter++; }
      if( i < j )
        swap( a[ i ], a[ j ] );
      else
        break;
    }

    swap( a[ i ], a[ right - 1 ] );  // Restore pivot

    counter += quicksort( a, left, i - 1 );     // Sort small elements
    counter += quicksort( a, i + 1, right );    // Sort large elements

    return counter;
  }
  else  // Do an insertion sort on the subarray
    return insertionSort( a, left, right );
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

  unsigned long comp = quickSort (rnumbers);
  
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;

  cout << "Sorting vector: " << duration << " seconds." << endl;
  cout << "Number of comparisons: " << comp << endl;

  return 0;
}
