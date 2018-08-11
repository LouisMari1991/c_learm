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

### 何时使用引用参数
使用引用参数的主要原因有两个：
* 程序员能够修改调用函数中的数据对象。
* 通过传递引用而不是整个数据对象，可以提高程序的运行速度。
当数据对象较大时（如结构和类对象），第二个原因最重要。这些也是使用指针参数的原因。这是有道理的，因为引用参数实际上是基于指针的代码的另一个接口。那么，什么时候应使用引用、什么时候应

使用指针呢？什么时候又应按值传递呢？下面是一些指导原则：
* 如果数据对象很小，如内置数据类型或小型结构，则按值传递。
* 如果对象是数组，则使用指针，因为这是唯一的选择，并将指针声明为指向 const 的指针。
* 如果数据对象是较大的结构，则使用 const 指针或 const 引用，以提高程序的效率。这样可以节省复制结构所需的时间和空间。
* 如果数据对象是类对象，则使用 const 引用。类设计的语义常常要求使用引用，这是 C++ 新增这项特性的主要原因。因此，传递类对象参数的标准方式是按引用传递。

对于修改调用函数中数据的函数：
* 如果数据对象时内置数据类型，则使用指针。如果看到诸如 `fixit(&x)` 这样的代码（其中 x 是 int 型），则和很明显，该函数将修改 x。
* 如果数据对象是数组，则只能使用指针。
* 如果数据对象是结构，则使用引用或指针。
* 如果数据对象是类对象，则使用引用。

当然，这只是一些指导原则，很可能有充分的理由做出其他的选择。例如，对于基本类型，cin 使用引用，因此可以使用 `cin >> n`，而不是 `cin >> &n`。