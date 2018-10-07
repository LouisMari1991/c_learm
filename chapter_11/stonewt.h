// stonewt.h -- definnition for Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt 
{
    private:
        enum { Lbs_per_stn = 14 };
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);
        Stonewt(int stnm, double lbs);
        Stonewt();
        ~Stonewt();
        void show_lbs() const;  // show weight in pounds format
        void show_stn() const;  // show weight in stone format
};

#endif