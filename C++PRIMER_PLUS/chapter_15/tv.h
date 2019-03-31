// tv.h -- Tv and Remote classes
#ifndef TV_H_
#define TV_H_

class Tv
{
public:
    friend class Remote;
    enum {TV, VCR};
};

class Remote
{
private:
    int mode;       // controls TV or VCR
public:
    Remote(int m = Tv::TV): mode(m) {}
    
};

#endif