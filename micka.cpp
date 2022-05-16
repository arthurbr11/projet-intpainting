#include <Imagine/Graphics.h>
#include<Imagine/Images.h>
#include<cmath>
using namespace Imagine;
#include <iostream>
using namespace std;
#include <vector>
#include "cord.h"


Image<FVector<float,2>> gradient(const Image<float>& I,const Image<bool>& in_area) {
    Image<FVector<float,2>> grad;
    grad = Image<FVector<float,2>>(I.width(), I.height());
    FVector<float,2> zero;
    grad.fill(zero);
    for(int i=0;i<I.width();i++){
        for(int j=0;j<I.height();j++){
            if(in_area(i,j)==false){
            grad(i,j) = gradient(I,Coords<2>(i,j));
            }
        }
    }
    return grad;
}

FVector<float,2> orthogonal(const Image<FVector<float,2>>& grad,int i,int j,const Image<bool>& in_area){
    FVector<float,2> ortho;

    return ortho;
}
