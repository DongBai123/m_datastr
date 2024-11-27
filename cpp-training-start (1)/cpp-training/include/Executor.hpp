#pragma once

#include<iostream>
#include<string>
#include<tuple>
// using namespace std;
namespace adas	
{
struct Pose {	
    int x;
    int y;
    char heading;
};	
//Executor抽象类的定义
class Executor
{
    
public:
static Executor* NewExecutor(const Pose& pose={0,0,'N'})noexcept;
public:
   Executor(void)=default;
    virtual ~Executor(void)=default;
    Executor(const  Executor&)=delete;
    Executor& operator=(const Executor&)=delete;

public:
    virtual void Execute(const std::string& command) noexcept=0;
    virtual Pose Query(void) const noexcept=0;
};
}

 