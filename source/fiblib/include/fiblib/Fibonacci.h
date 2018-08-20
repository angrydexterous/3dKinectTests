
#pragma once


#include <fiblib/fiblib_api.h>
#include <stdint.h>

namespace fiblib
{


/**
*  @brief
*    Calculator of fibonacci numbers
*/
class FIBLIB_API Fibonacci
{
public:
    /**
    *  @brief
    *    Constructor
    */
    Fibonacci();

    /**
    *  @brief
    *    Destructor
    */
    virtual ~Fibonacci();

    /**
    *  @brief
    *    Calculate fibonacci number
    *
    *  @param[in] i
    *    Index
    *
    *  @return
    *    Value of the i'th fibonacci number
    */
    uint64_t operator()(uint64_t n);
};


} // namespace fiblib
