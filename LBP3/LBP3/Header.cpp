#include "Header.h"

bm::bm() 
{
	
}



Mat bm::doIT(Mat src, Mat dst, int s ) 
{


	dst = Mat::zeros(src.rows - 2, src.cols - 2, CV_8UC1);



	for (int i = 1; i<src.rows - 1; i++) {
		for (int j = 1; j<src.cols - 1; j++) {
		uchar center = src.at<uchar>(i, j);
		unsigned char code = 0;
		code |= (src.at<uchar>(i - 1, j - 1) > center) << 7;
		code |= (src.at<uchar>(i - 1, j) > center) << 6;
		code |= (src.at<uchar>(i - 1, j + 1) > center) << 5;
		code |= (src.at<uchar>(i, j + 1) > center) << 4;
		code |= (src.at<uchar>(i + 1, j + 1) > center) << 3;
		code |= (src.at<uchar>(i + 1, j) > center) << 2;
		code |= (src.at<uchar>(i + 1, j - 1) > center) << 1;
		code |= (src.at<uchar>(i, j - 1) > center) << 0;
		dst.at<unsigned char>(i - 1, j - 1) = code;
		}
	}

	const int ch_width = 200, ch_height = 100;
	Mat hist_img(Size(ch_width, ch_height), CV_8UC3, Scalar::all(255));


	Mat hist;
	const int hdims[] = { 256 };
	const float hranges[] = { 0, 256 };
	const float* ranges[] = { hranges };
	double max_val = .0;


	calcHist(&dst, 1, 0, Mat(), hist, 1, hdims, ranges);

	minMaxLoc(hist, 0, &max_val);


	Scalar color = Scalar::all(100);

	hist = hist * (max_val ? ch_height / max_val : 0.);

	for (int j = 0; j<hdims[0]; ++j) 
	{
		int bin_w = saturate_cast<int>((double)ch_width / hdims[0]);
		rectangle(hist_img, Point(j*bin_w, hist_img.rows), Point((j + 1)*bin_w, hist_img.rows - saturate_cast<int>(hist.at<float>(j))), color, -1);
	}

	if (s == 1)
	{
		imshow("DISPLAY WINDOWS", dst);
		namedWindow("Histogram", CV_WINDOW_AUTOSIZE | CV_WINDOW_FREERATIO);
		imshow("Image", src);
		imshow("Histogram", hist_img);
	}
	
	cv::waitKey(0);
	return hist;
	cvDestroyAllWindows();

	

}