#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <bits/stdc++.h>

//desfoque de imagem
int main(int argc, char **argv){

    std::string path = "./img/girassol.jpg";
    cv::Mat img = cv::imread(path);
    cv::Mat img_gaussian;

    //desfoque de uma imagem por uma função gaussiana
    cv::GaussianBlur(img, img_gaussian, cv::Size(7, 7), 5);
    
    cv::imshow("Original", img);
    cv::imshow("Guassian", img_gaussian);

    cv::waitKey(0);
}
/*
Executar no terminal:

g++ -I/usr/include/opencv4 -g -o ./main2 main2.cpp -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_core

./main2

*/