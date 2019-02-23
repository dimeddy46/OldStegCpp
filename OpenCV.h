#pragma once
using namespace std;
using namespace cv;

string citesteDate(string fileName, char tip);
void scriereDate(string fileName, string msg, char tip);

uchar estePassCorectMSG(Mat img, string key);
string LSBExtragere(Mat img, string key, uchar &bt);
Mat LSBAscundere(Mat img, string msg, string key, uchar &bt);

Mat ascExecutabil(string msg, Mat cov, string key);
string extExecutabil(Mat cov, string key);

Mat ascImgLossless(Mat msg, Mat cov, string key);
Mat extImgLossless(Mat cov, string key);

Mat ascImgHecht(Mat msg, Mat cov, string key);
Mat extImgHecht(Mat cov, string key);






