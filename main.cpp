//
//  main.cpp
//  homework12
//
//  Created by Mac on 2019/3/29.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include <iostream>
using namespace std;
int main(int argc,char** argv)
{
    int a,b,c;
    cin>>a;
    for (b=0;b<a;++b)
    {
        for (c=0;c<b;++c)
            printf(" ");
        for (c=a-1;c>= b;--c)
            printf("*");
        printf("\n");
    }
}
