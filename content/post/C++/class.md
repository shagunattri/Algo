+++
author = "sp3ppr"
title = "Class"
date = "2019-03-05"
description = "A guide to classes in C"
tags = [
    "C",
    "class"
]
+++

```c
#include<iostream>
#include<string>

using namespace std;

class tenant{
public:
string name;
string month;
int age;
};


int main() {
tenant ayan;
ayan.name = "ayan";
ayan.month = "july";
ayan.age = 18;

tenant harsh;
harsh.name = "harsh";
harsh.month = "july";
harsh.age = 18;

tenant shagun;
shagun.name = "shagun";
shagun.month = "august";
shagun.age = 18;

cout<<ayan.name<<endl<<ayan.month<<" "<<ayan.age<<"\n";
cout<<harsh.name<<endl;
cout<<shagun.name<<"\n";

return 0;
}
```