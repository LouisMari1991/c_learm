// brass.h -- back account classes
#ifndef BRASS_H_
#define BRASS_H_

// Brass Account Class
class Brass
{
private:
    enum {MAX = 35};
    char fullName[MAX];
    long acctNum;       
    double balance;                     // 余额
public:
    Brass(const char *s = "Nullbody", long an = -1, 
                double bal = 0.0);
    void Deposit(double amt);           // 存款
    double Balance() const;             // 余额
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);  // 取钱 
    virtual ~Brass() {};    
};

// Brass Plus Account Class
class BrassPlus : public Brass
{
private:
    double maxLoan;     // 透支限额 500
    double rate;        // 贷款利率 10%
    double owesBank;    // 用户欠款 
public:
    BrassPlus(const char *s = "NullBody", long an = -1, 
            double bal = 0.0, double ml = 500, 
            double r = 0.10);    
    BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; }
    void ResetOwes() { owesBank = 0; }    
};

#endif