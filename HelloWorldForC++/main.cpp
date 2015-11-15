//
//  main.cpp
//  HelloWorldForC++
//
//  Created by 张晓岚 on 15/11/15.
//  Copyright (c) 2015年 ThinkMobile. All rights reserved.
//

#include <iostream>


void fun(int a,int b,long *c);

void main()
{
    int a,b;
    long c;
    cout<<"Input a,b;"<<endl; cin>>a>>b;
    fun(a,b,&c); /*函数调用*/ cout<<"The result is:\n"<<c<<endl;
}

