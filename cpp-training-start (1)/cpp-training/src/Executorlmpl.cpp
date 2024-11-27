#include "Executorlmpl.hpp"
namespace adas
{
    Executor* Executor::NewExecutor(const Pose& pose)noexcept
    {
        return new (std::nothrow)Executorlmpl(pose);
    }
    Executorlmpl::Executorlmpl(const Pose& pose)noexcept
    {
        
    }
    void Executorlmpl::Execute(const std::string& coomands)noexcept
    {

    }
    Pose Executorlmpl::Query()const noexcept{
        return pose;
    }

}
