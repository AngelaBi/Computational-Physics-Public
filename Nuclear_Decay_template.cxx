#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdio>


#include "TROOT.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TApplication.h"
#include "TRint.h"
#include "TF1.h"
using namespace std;

#define NPOINTS 100


int main(int argc, char **argv){
    //ROOT stuff
    TRint theApp("App",&argc,argv);
    TCanvas *c = new TCanvas("c", "Solution", 400, 400);

        //here you write the program that solves the diff eqs

    TGraph *g=new TGraph(NPOINTS,t,N);
    g->Draw("AP*");
    TF1 *f=new TF1("fun","100*exp(-x/1)",0,5);
    f->SetLineColor(2);
    f->Draw("same");
    theApp.Run();

}

