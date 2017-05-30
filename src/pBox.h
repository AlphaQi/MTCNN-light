#ifndef PBOX_H
#define PBOX_H
#include <stdlib.h>
#include <iostream>

using namespace std;
#define mydataFmt float


struct pBox
{
	mydataFmt *pdata;
	int width;
	int height;
	int channel;
};

struct pRelu
{
    mydataFmt *pdata;
    int width;
};

struct Weight
{
	mydataFmt *pdata;
    mydataFmt *pbias;
    int lastChannel;
    int selfChannel;
	int kernelSize;
    int stride;
    int pad;
};

struct Bbox
{
    float score;
    int x1;
    int y1;
    int x2;
    int y2;
    float area;
    bool exist;
    mydataFmt ppoint[10];
    mydataFmt regreCoord[4];
};

struct orderScore
{
    mydataFmt score;
    int oriOrder;
};

void freepBox(struct pBox *pbox);
void freeWeight(struct Weight *weight);
void freepRelu(struct pRelu *prelu);
void pBoxShow(const struct pBox *pbox);
void pBoxShowE(const struct pBox *pbox,int channel, int row);
void weightShow(const struct Weight *weight);
void pReluShow(const struct pRelu *prelu);
#endif