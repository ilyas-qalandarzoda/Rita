/**
 * @file constant_instruction.hpp
 * @author Ilyas Awaitable (t.me/awaitable)
 * @brief ConstantInstruction definition.
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright Awaitable (c) 2022
 * 
 */

#include "instruction.hpp"
#include "constants_types.hpp"

#ifndef constant_instruction_hpp
#define constant_instruction_hpp

namespace Core
{
    namespace Instructions
    {
        /**
         * @brief Instruction for storing constants.
         * 
         * @tparam T Constant's type.
         */
        template<class T>
        class ConstantInstruction : public Instruction
        {
        protected:
            T data;
            ConstantType constantType;
        public:
            /**
             * @brief Construct a new Constant Instruction object
             * 
             * @param data data for storing.
             */
            ConstantInstruction(T& data, ConstantType constType);
            /**
             * @brief Get the Data object
             * 
             * @return T 
             */
            T GetData();

            /**
             * @brief Get the ConstantType object
             * 
             * @return ConstantType 
             */
            ConstantType GetConstantType();
        };
    }
}

#endif