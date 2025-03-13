# C++ STL

## 1 容器

### 1.1 vector

```C++
vector<type> name;
vector<type> name(length);
vector<type> name(beg,end);
vector<type> name(length,init);
vector<type> name(name1);
vector<type> name = name1;
vector<type> name[dim1];
vector<vector<type>> name;

address name.begin();
address name.end();
logic name.empty();
void name.push_back(var);
void name.pop_back();
void name.clear(); //size设置为0
void name.resize(length,init);
void name.erase(address); // 删除元素
length name.size();
```

### 1.2 string

```C++
string name = "char";
string name(name1);
string name("char");
string name(length,"char")

void name.assign(char,len);
void name.assign(leng,char);	// 整个重新赋值
name += char;	// 接续原有赋值
void name.append(char);	// 接续原有赋值
length string.size();
```

### 1.3 deque

### 1.4 stack

先进后出

```C++
stack<type> name;

void name.push(elem);
void name.pop();
elem name.top();
length name.size();
logic name.empty():
```

### 1.5 queue

先进先出

队头移出，队尾添加

```C++
queue<type> name;

void name.push(elem);
void name.pop();
elem name.back();
elem name.front();
length name.size();
logic name.empty();
```

### 1.6 list

### 1.7 set

### 1.8 pair

```
pair<type1,type2>name(val1,val2);	// val1 键值 val2 实值
pair<type1,type2> name = make_pair(val1,val2);

val1 = name.first;
val2 = name.second;
```

### 1.9 map/multimap

所有元素都是pair

map不允许重复键值，multimap允许

```c++
map<type1,type2>na
```



## 2 算法

### 2.1  遍历

for_each

transform

### 2.2 查找

find

find_if

count

count_if

### 2.3 排序

sort

random shuffle

merge

reverse

### 2.4 拷贝和替换

copy

replace

replace_if

swap

### 2.5 生成

fill

accumulate

### 2.6 集合

set_intersection

## 3 迭代器 iterator

## 4 仿函数

## 5 适配器

## 6 空间配置器

