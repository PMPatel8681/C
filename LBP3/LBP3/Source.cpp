#include "Header.h"
 #include "opencv\cv.h"
#include "opencv\highgui.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>
#include "iostream"

using namespace cv;
using namespace std;


int main() {

	const Mat src = imread("C:\\Users\\Pinal\\Desktop\\Pen.bmp", CV_LOAD_IMAGE_GRAYSCALE);
	const Mat src2 = imread("C:\\Users\\Pinal\\Desktop\\LSC2.bmp", CV_LOAD_IMAGE_GRAYSCALE);
	Mat dst, dst2;
	bm bObj;

	bObj.doIT(src, dst, 1); 
	bObj.doIT(src2, dst2, 1);

	double compVal = compareHist(bObj.doIT(src, dst, 0), bObj.doIT(src2, dst2, 0), CV_COMP_CORREL);
	cout << "Histogram comparison value using CORREL method: " << compVal << endl;

	double compVal2 = compareHist(bObj.doIT(src, dst, 0), bObj.doIT(src2, dst2, 0), CV_COMP_BHATTACHARYYA);
	cout << "Histogram comparison value using BHATTACHARYA method: " << compVal2 << endl;

	double compVal3 = compareHist(bObj.doIT(src, dst, 0), bObj.doIT(src2, dst2, 0), CV_COMP_CHISQR);
	cout << "Histogram comparison value using CHI-SQUARE method: " << compVal3 << endl;

	double compVal4 = compareHist(bObj.doIT(src, dst, 0), bObj.doIT(src2, dst2, 0), CV_COMP_INTERSECT);
	cout << "Histogram comparison value using INTERSECTION method: " << compVal4 << endl;

	double compVal5 = compareHist(bObj.doIT(src, dst, 0), bObj.doIT(src2, dst2, 0), CV_COMP_HELLINGER);  //Same as Bhattacharya method
	cout << "Histogram comparison value using HELLINGER method: " << compVal5 << endl << endl;

	return 0;
} 

