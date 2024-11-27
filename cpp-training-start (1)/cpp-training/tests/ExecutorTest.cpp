#include<gtest/gtest.h>
#include<memory>
#include<tuple>
#include "Executor.hpp"
namespace adas
{
    //运算符重载，方便比较Pose结构体是否相同
    bool operator==(const Pose& lhs,const Pose& rhs)
    {
        return std::tie(lhs.x,lhs.y,lhs.heading)==std::tie(rhs.x,rhs.y,rhs.heading);

    }
    //测试函数
    TEST(ExecutorTest,should_return_init_pose_when_without_command)
    {
        std::unique_ptr<Executor> executor(Executor::NewExecutor({0,0,'E'}));

        const Pose target({0,0,'E'});
        ASSERT_EQ(target,executor->Query());
    }

    TEST(ExecutorTest,should_return_default_pose_when_without_init_and_command)
    {
        std::unique_ptr<Executor> executor(Executor::NewExecutor());

        const Pose target({0,0,'N'});
         ASSERT_EQ(target,executor->Query());
    }
}
