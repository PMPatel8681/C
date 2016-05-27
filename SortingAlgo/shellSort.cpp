#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

// Shellsort, figure 7.6 in the textbook.

template <typename Comparable>
unsigned long shellsort(vector<Comparable> & a)
{
	unsigned long counter = 0;
	
//	int gapSequence[2] = { (pow(2, k) - 1), (int)((pow(3, k) - 1) / 2) };
//	int gapSequence[4] = { (k + 1), (k + 2), (a.size() / 2), (pow(2, k) - 1) };
//	int CiuraSeq[16] = {1, 4, 10, 23, 57, 132, 301, 701, 1577, 3548, 7983, 17961, 40412, 90927, 204585, 460316};
//	int CiuraSeq2[11] = { 1, 4, 10, 23, 57, 132, 301, 701, 1577, 3548, 7983 };
	int CiuraSeq[16] = {460316, 204585, 90927, 40412, 17961, 7983, 3548, 1577, 701, 301, 132, 57, 23, 10, 4, 1};
	


	/*  for (unsigned int gap = a.size() / 2; gap > 0; gap /= 2){
		  for (unsigned int i = gap; i < a.size(); i++)
		  {
		  Comparable tmp = a[i];
		  unsigned int j = i;

		  for (; j >= gap; j -= gap)
		  {
		  counter++;
		  if (!(tmp < a[j - gap])) break;
		  a[j] = a[j - gap];
		  }

		  a[j] = tmp;
		  }
		  }

		  return counter;
		  } */

	for (int gap : CiuraSeq){
		for (unsigned int i = gap; i < a.size(); i++)
		{
			Comparable tmp = a[i];
			unsigned int j = i;

			for (; j >= gap; j -= gap)
			{
				counter++;
				if (!(tmp < a[j - gap])) break;
				a[j] = a[j - gap];
			}

			a[j] = tmp;
		}
		
	}

	return counter;
}

const int N = 1000000;
//const int N = 100;

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

  unsigned long comp = shellsort (rnumbers);

  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;

  cout << "Sorting vector: " << duration << " seconds." << endl;
  cout << "Number of comparisons: " << comp << endl;


  //For loop that outputs the sorted vector 
 /*for (auto i = 0; i < rnumbers.size(); i++)  
  {
	  cout << rnumbers[i] << " ";
  }
  */
  return 0;
}
