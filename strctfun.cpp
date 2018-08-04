// strctfun.cpp -- functions with a structure argument
#include<iostream>
#include<cmath>

struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    using namespace std;
    rect replace;
    polar pplace;
    cout << "Enter ths x an y values: ";
    while (cin >> replace.x >> replace.y)
    {
        pplace = rect_to_polar(replace);
        show_polar(pplace);
        cout << "Next two number s (q to quie):";
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x* + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos)
{
    using namespace std;
    const double Red_to_deg = 57.29577951;

    cout << "distace = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Red_to_deg;
    cout << " degress\n";
}
