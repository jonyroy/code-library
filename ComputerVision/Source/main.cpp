#include <bits/stdc++.h>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;

//Global variables
sting path = "/home/jonyroy/Desktop/MyCodeLibrary/ComputerVision/Picture/7-10.jpg";
int kernel_size = 3;
// match_method
// 0 for 0: SQDIFF
// 1: SQDIFF NORMED
// 2: TM CCORR
// 3: TM CCORR NORMED
// 4: TM COEFF
// 5: TM COEFF NORMED
int match_method;
bool use_mask;

int cvtImagetoBinary(Mat srcMat, Mat & binaryMat)
{
	//Create Gray Scale Matrix
	//Mat grayscaleMat (srcMat.size(), CV_8U);
	//Convert BGR to Gray
	//cvtColor( srcMat, grayscaleMat, CV_BGR2GRAY );
	//Create Binary image
	//binaryMat.create( srcMat.size(), srcMat.type() );
	//Mat binaryMat(grayscaleMat.size(), grayscaleMat.type());
	//Apply thresholding
	threshold(srcMat, binaryMat, 100, 255, THRESH_BINARY);
}


int MatchingMethod( Mat img, Mat templ , Mat &img_display, Mat & result)
{
	/// Source image to display
	//Mat img_display;
	//img.copyTo( img_display );

	/// Create the result matrix
	int result_cols =  img.cols - templ.cols + 1;
	int result_rows = img.rows - templ.rows + 1;

	result.create( result_rows, result_cols, CV_32FC1 );

	/// Do the Matching and Normalize
	bool method_accepts_mask = (CV_TM_SQDIFF == match_method || match_method == CV_TM_CCORR_NORMED);
	if (use_mask && method_accepts_mask)
	{
		matchTemplate( img, templ, result, match_method);
	}
	else
	{
		matchTemplate( img, templ, result, match_method);
	}

	normalize( result, result, 0, 1, NORM_MINMAX, -1, Mat() );

	/// Localizing the best match with minMaxLoc
	double minVal; double maxVal; Point minLoc; Point maxLoc;
	Point matchLoc;

	minMaxLoc( result, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );


	/// For SQDIFF and SQDIFF_NORMED, the best matches are lower values. For all the other methods, the higher the better
	if ( match_method  == TM_SQDIFF || match_method == TM_SQDIFF_NORMED )
	{
		matchLoc = minLoc;
	}
	else
	{
		matchLoc = maxLoc;
	}

	/// Show me what you got
	rectangle( img_display, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );
	rectangle( result, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );

	//imshow( image_window, img_display );
	//imshow( result_window, result );
	return 0;
}

int cannyEdgeDetect(Mat srcMat, Mat & edgeDetect)
{
	Mat buffer;

	buffer.create(srcMat.size(), srcMat.type());

	cvtColor( srcMat, buffer, CV_BGR2GRAY );

	Canny( buffer, edgeDetect, 50, 300, kernel_size );
	return 0;
}



int main()
{
	// Load Image
	string path = "/home/jonyroy/Desktop/MyCodeLibrary/ComputerVision/Picture/";
	Mat srcMat = imread(path + "17-500.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat temp = imread(path + "tmp_bin/500-1.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat blurMat;
	Mat img_display;
	srcMat.copyTo(img_display);


	// Edge Detect using Canny
	Mat detected_edges, binaryMat;

	detected_edges.create(srcMat.size(), srcMat.type());

	Mat result;
	binaryMat.create(srcMat.size(), srcMat.type());
	cannyEdgeDetect(srcMat, detected_edges);
	cvtImagetoBinary(detected_edges, binaryMat);
	MatchingMethod(binaryMat, temp, img_display, result);

	namedWindow("binary", CV_WINDOW_NORMAL);
	namedWindow("Final Output", CV_WINDOW_NORMAL);
	namedWindow("Original", CV_WINDOW_NORMAL);
	imshow("Original", img_display);
	imshow("Final Output", result);
	imshow("binary", binaryMat);
	waitKey(0);
	return 0;
}
