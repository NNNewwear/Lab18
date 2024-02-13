#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect * A, Rect * B){
    double lx = max(0.0, min(A->x + A->w, B->y + B->w) - max(A->x, B->x));
    double ly = max(0.0, min(A->y, B->y) - max(A->y - A->h, B->y - B->h));
    return lx * ly;
}