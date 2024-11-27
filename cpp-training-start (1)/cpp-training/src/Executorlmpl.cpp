#include "Executorlmpl.hpp"
namespace adas
{
    Executor* Executor::NewExecutor(const Pose& pose)noexcept
    {
        return new (std::nothrow)Executorlmpl(pose);
    }
    Executorlmpl::Executorlmpl(const Pose& pose)noexcept:pose(pose)
    {
        
    }
    void Executorlmpl::Execute(const std::string& commands)noexcept
    {
        for (auto order=commands.begin();order<commands.end();order++)
    {
    //前进代码
    if (*order == 'M')
    {
        if (pose.heading == 'N')
        {
            pose.y++;
        }
        else if (pose.heading == 'S')
        {
            pose.y--;
        }
        else if (pose.heading == 'E')
        {
            pose.x++;
        }
        else if (pose.heading == 'W')
        {
            pose.x--;
      }
    }
    else if (*order == 'L')//左转代码
    {
        if (pose.heading == 'N')
        {
            pose.heading ='W';
        }
        else if (pose.heading == 'S')
        {
            pose.heading = 'E';
        }
        else if (pose.heading == 'E')
        {
            pose.heading = 'N';
        }
        else if (pose.heading == 'W')
        {
            pose.heading = 'S';
        }
    }
    else if (*order == 'R')//右转代码
    {
        if (pose.heading == 'N')
        {
            pose.heading = 'E';
        }
        else if (pose.heading == 'S')
        {
            pose.heading = 'W';
        }
        else if (pose.heading == 'E')
        {
            pose.heading = 'S';
        }
        else if (pose.heading == 'W')
        {
            pose.heading = 'N';
        }
    }
   
    }
    }
    Pose Executorlmpl::Query()const noexcept{
        return pose;
    }


}
