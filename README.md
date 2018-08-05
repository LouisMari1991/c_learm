### 字符串参数
假设要将字符串作为参数传递给函数，则表示字符串的方式有3种：
* char数组
* 被引号括起来的字符串常亮（也称字符串字面值）
* 被设置为字符串的地址的 char 指针（const 修饰）

### 函数指针
获取函数的地址
```c++
process(think);     // passes addres of think() to process()
thought(think());   // passes return value think() to thought()
```
声明函数指针
原型: `double pam(int);`    // prototype
正确的指针类型声明: 
```
double (*pf)(int);  // pf ponits to a function that takes
                    // ont int argument and that 
                    // returns type double
```

### 内联函数
要使用内联函数，必须采取下述措施之一：
* 在函数声明前加上关键字 `inline`
* 在函数定义前加上关键字 `inline`