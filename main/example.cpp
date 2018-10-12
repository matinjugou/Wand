//
// Created by 黄超 on 2018/10/11.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{

    Mat src = imread("lena.jpg",1);

    //Mat src = imread("lena.jpg",0);


    Mat dst;
    namedWindow("RGB",WINDOW_AUTOSIZE);
    imshow("RGB",src);
    //waitKey(0);


    cvtColor(src,dst,CV_BGR2GRAY);
    namedWindow("GRAY",WINDOW_AUTOSIZE);
    imshow("GRAY",dst);
    cout<<dst.channels()<<endl;

    waitKey(0);

    src.release();
    dst.release();
    destroyWindow("RGB");
    destroyWindow("GRAY");
    return 0;
}