/**
 * @file functions.hpp
 * @author your name (you@domain.com)
 * @brief Definition of some built-in functions.
 * @version 0.1
 * @date 2022-07-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "constants.hpp"
#include "string_obj.hpp"
#include "type.hpp"

#ifndef builtins_hpp
#define builtins_hpp

namespace Executor
{
    namespace Builtins
    {
        namespace Functions
        {
            /**
            * @brief Returns a string-representation of Object
            * 
            * @param obj Object
            * @return Core::RitaObject* 
            */
            Core::String* ObjectToStringNative(Core::RitaObject* obj);
            
            /**
             * @brief Returns a string-representation of some Integer
             * 
             * @param obj Integer
             * @return Core::String* 
             */
            Core::String* IntToStringNative(Core::RitaObject* obj);

            /**
             * @brief Returns a string-representation of some boolean.
             * 
             * @param obj Boolean
             * @return Core::String* 
             */
            Core::String* BoolToStringNative(Core::RitaObject* obj);

            /**
             * @brief Returns a string representation of List-object.
             * 
             * @param obj 
             * @return Core::String* 
             */
            Core::String* ListToStringNative(Core::RitaObject* obj);
        }
    } 
}

#endif