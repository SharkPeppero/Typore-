### const与constexpr区别

   const的双重语义：

  	const在函数申明中，作为只读变量（本质仍然为变量），无法用来初始化
  	
  	const在函数定义与实现过程中，const具有双重语义，只读变量以、常量的特性

  C++11新特性，将表示只读变量语义和常量语义进行区分，

​		constexpr——常量语义、constexpr在编译阶段将结果运算出来，不需要在运行阶段进行计算

​		const——只读变量



### std::tie（在c++11加入、c++14更新）

std::pair，可以打包两个数据包

```c++
//使用默认构造函数初始化
std::pair<int, std::string> myPair; // 默认构造函数初始化，值为默认值
//使用带参数的构造函数：
std::pair<int, std::string> myPair(42, "Hello"); // 使用参数初始化
//使用std::make_pair函数：
std::pair<int, std::string> myPair = std::make_pair(42, "Hello"); // 使用make_pair函数进行初始化
//使用花括号初始化列表
std::pair<int, std::string> myPair = {42, "Hello"}; // 使用初始化列表初始化
```



std::tuple，可以打包多个数据包

```c++
// 定义时 初始化
std::tuple<int, double, std::string> student1 = { 1, 98.0, "David" };
// 使用构造函数
std::tuple<int, double, std::string> student2 ( 2, 99.2, "david2" );
//使用std::make_tuple函数：
std::tuple<int, double, std::string> student2 = std::make_tuple(11, 98, "Tom" );
```



std::tie一般有两个作用：

- 创建一个std::tuple，相当于std::make_tuple()

```c++
std::string name3 = "david3";
int id3 = 3;
double d3 = 99.3;
std::tuple<int, double, string>  student3 = std::tie(id3, d3, name3);
```

- 解包标准库中的一些集合类，简化访问方法。

```c++
int id3;
string name3;
std::tie(id3, std::ignore, name3) = student3;//并且可以使用std::ignore跳过不关心的数据
cout << "tie student-" << id3 << "  \t " << name3 << endl;
```



### 智能指针VS普通指针

#### 	智能指针是什么：

​		具有普通指针的常规行为，但智能指针能够及时妥善销毁动态分配的内存(堆区内存)，实现了明确的对象生命周期管理。

​		重载指针功能：重载了解除引用运算符（*）和成员选择运算符（->）

​		泛型模板，强大的适配性：堆中管理各种类型，***\*几乎所有的智能指针都是模板类，包含其功能的泛型实现\****

#### 	常规指针存在的问题：

​		内存泄漏，自己堆区开辟的内存，用完没有释放，（delet，nullptr）；





​			

​	
