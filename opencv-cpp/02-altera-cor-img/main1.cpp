#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <bits/stdc++.h>

//alterando cor da imagem
int main(int argc, char **argv){

    std::string path = "./img/girassol.jpg";
    cv::Mat img = cv::imread(path);
    cv::Mat img_rainbow;
    
    //(img_original, img_saida, codigo_mudanca_img_original)
    cv::cvtColor(img,img_rainbow, cv::COLOR_BGR2GRAY);

    cv::imshow("Original", img);
    cv::imshow("Modificado", img_rainbow);

    cv::waitKey(0);
}
/*
Executar no terminal:

g++ -I/usr/include/opencv4 -g -o ./main1 main1.cpp -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_core

./main1

*/