#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <bits/stdc++.h>

//detectando contorno de imagem
int main(int argc, char **argv){
    
    std::string path = "./img/girassol.jpg"; 
    cv::Mat img = cv::imread(path);

    //saida para contorno
    cv::Mat img_canny;
    //saida para dilatacao
    cv::Mat img_canny_dilate;
    //saida para erosao
    cv::Mat img_canny_erode;

    //contornando a imagem com a funcao Canny
    cv::Canny(img, img_canny, 50, 100);

    /*
    operacoes morfologicas:
        ->erosao: utilizada para remover ruidos ou sepearar dois objetos conectados;
        ->dilatacao: utilizada unir partes quebradas de um objeto;

        em casos como remocao de ruido, a erosao e seguida por dilatacao, visto que 
        a erosao remove os ruidos brancos, mas tambem encolhe nosso objeto.
    */

   //dilatacao de imagem contornada
   cv::dilate(img_canny, img_canny_dilate, cv::getStructuringElement(1, cv::Size(4, 4)));

   //erosao de imagem contornada
   cv::erode(img_canny, img_canny_erode, cv::getStructuringElement(2, cv::Size(2, 2)));

    cv::imshow("Original", img);
    cv::imshow("Contorno", img_canny);
    cv::imshow("Dilatação do contorno", img_canny_dilate);
    cv::imshow("Erosão do contorno", img_canny_erode);

    cv::waitKey(0);
}
/*
Executar no terminal:

g++ -I/usr/include/opencv4 -g -o ./main3 main3.cpp -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_core

./main3

*/