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

address name.begin();
address name.end();
void name.push_back(char);
void name.pop_back(char);
void name.back();
void name.assign(char,len);
void name.assign(leng,char);	// 整个重新赋值
name += char;	// 接续原有赋值
void name.append(char);	// 接续原有赋值
length string.size();
```

### 1.3 deque

可以头插 也可以尾插 也可以中间插

双向队列

```c++
deque<type> name;

void name.push_back(elem);
void name.push_front(elem);
void name.pop_back();
void name.pop_front();
void name.insert(pos,elem);
void name.insert(pos,n,elem);
void name.insert(pos,beg,end);
void name.clear();
void name.erase(pos);
void name.erase(beg,end);
elem name.front();
elem name.back();
```



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

优先队列，自动排序

```C++
priority_queue<type> name;
elem name.top();	// 本质是堆，所以是top

priority_queue<int,vector<int>,less<int>> name;	// 递减
priority_queue<int,vector<int>,greater<int>> name;	// 递增
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

unordered_map无序 哈希表，map不允许重复键值 红黑树，multimap允许

```c++
unordered_map<type1,type2> name;
name[key] = value;

map<type1,type2>name
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

