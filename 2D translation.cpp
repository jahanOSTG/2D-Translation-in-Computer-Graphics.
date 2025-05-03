#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original rectangle
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;

    int tx, ty;
    cout << "Enter translation (tx, ty): ";
    cin >> tx >> ty;

    // Original shape
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);
    outtextxy(x1, y1 - 10, "Original graph");

    // Translated shape
    setcolor(RED);
    rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
    outtextxy(x1 + tx, y1 + ty - 10, "Translated graph");

    getch();
    closegraph();
    return 0;
}

