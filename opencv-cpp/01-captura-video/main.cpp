#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <bits/stdc++.h>

int main(int argc , char **argv){

  cv::VideoCapture cap(0);
  cv::Mat img;

  while(true){

    cap.read(img);
    cv::imshow("Webcam", img);
    cv::waitKey(1);
  }
 
}
/*
Executar no terminal:

g++ -I/usr/include/opencv4 -g -o ./exe main.cpp -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_videoio

./exe

*/