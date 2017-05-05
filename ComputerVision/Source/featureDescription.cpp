#include <stdio.h>
#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/legacy/legacy.hpp"
#include "opencv2/nonfree/features2d.hpp"
#include <bits/stdc++.h>
using namespace cv;
using namespace std;
string path = "/home/jonyroy/Desktop/MyCodeLibrary/ComputerVision/Picture/1000-4.jpg";
string path2 = "/home/jonyroy/Desktop/MyCodeLibrary/ComputerVision/Picture/1000-5.jpg";



int main( int argc, char** argv )
{

  Mat img_1 = imread( path, CV_LOAD_IMAGE_GRAYSCALE );
  Mat img_2 = imread( path2, CV_LOAD_IMAGE_GRAYSCALE );

  if ( !img_1.data || !img_2.data )
  {
    return -1;
  }

  //-- Step 1: Detect the keypoints using SURF Detector
  int minHessian = 400;

  SurfFeatureDetector detector( minHessian );

  std::vector<KeyPoint> keypoints_1, keypoints_2;

  detector.detect( img_1, keypoints_1 );
  detector.detect( img_2, keypoints_2 );

  //-- Step 2: Calculate descriptors (feature vectors)
  SurfDescriptorExtractor extractor;

  Mat descriptors_1, descriptors_2;

  extractor.compute( img_1, keypoints_1, descriptors_1 );
  extractor.compute( img_2, keypoints_2, descriptors_2 );

  //-- Step 3: Matching descriptor vectors with a brute force matcher
  BFMatcher matcher(NORM_L2);
  std::vector< DMatch > matches, match;
  matcher.match( descriptors_1, descriptors_2, matches );
  cout << matches.size() << endl;
  double m = 100.0;
  for (int i = 0; i < matches.size(); i++)
  {
    if (matches[i].distance < m)
    {
      m = matches[i].distance;
    }
  }
  for (int i = 0; i < matches.size(); i++)
  {
    if (m * 3 >= matches[i].distance)
    {
      match.push_back(matches[i]);
    }
  }
  //cout << matches.distance << endl;
  //-- Draw matches
  Mat img_matches;
  drawMatches( img_1, keypoints_1, img_2, keypoints_2, match, img_matches );

  //-- Show detected matches
  namedWindow("Matches", CV_WINDOW_NORMAL);
  imshow("Matches", img_matches );

  waitKey(0);

  return 0;
}