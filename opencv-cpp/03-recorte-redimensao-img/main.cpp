#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <bits/stdc++.h>

int main(int argc, char **argv){

    std::string path = "./img/monalisa.jpeg";
    cv::Mat img = cv::imread(path);

    //std::cout << "Dimensões da imagem: " << img.size() << std::endl;
    //Dimensões da imagem: [748 x 724]

    // std::cout << "Largura da imagem: " << img.size().width << std::endl;
    // std:: cout << "Altura da imagem: " << img.size().height << std::endl;
    //std::cout << "Área da imagem: " << img.size().area() << std::endl;

    //Redimensionando imagem
    cv::Mat img_resize;

    //opcao 1
    //cv::resize(img, img_resize, cv::Size(img.size().width / 2, img.size().height / 2));

    //opcao 2
    cv::resize(img, img_resize, cv::Size(), 0.5, 0.5);

    //Recortando imagem
    cv::Mat img_cut;
    img_cut = img(cv::Rect(0, 0, img.size().width / 2, img.size().height / 2));

    cv::imshow("Original", img);
    cv::imshow("Redimensionada", img_resize);
    cv::imshow("Recortada", img_cut);
    cv::waitKey(0);
}
/*
Compilar no terminal

g++ -I/usr/include/opencv4 -g -o ./main main.cpp -lopencv_imgcodecs -lopencv_imgproc -lopencv_highgui -lopencv_core

./main

*/