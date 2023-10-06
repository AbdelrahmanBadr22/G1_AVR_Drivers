/**
 * @file   GIC_Program.c
 * @author :Mohamed Refat
 * @brief  :This file contain the implementation of GIC function
 * @version:0.1
 * @date   :2023-08-16
 */
#include "../../common/Config.h"
#include "../../common/Types.h"
#include "../../common/Registes.h"
#include "../../common/Utils.h"
#include "GIC_Interface.h"
#include "GIC_Private.h"

error_t GIC_voidGlobalInterruptControl(uint8_t copyControl)
{
	error_t kErrorState = kNoError;
	#if MCU_TYPE == _AVR
	switch (copyControl)
	{
		case GLOBAL_INTERRUPT_ENABLE  : SET_BIT(SREG_REG, SREG_I); break;
		case GLOBAL_INTERRUPT_DISABLE : CLR_BIT(SREG_REG, SREG_I); break;

		default: kErrorState = kFunctionParameterError;	break;
	}
	
	#elif MCU_TYPE == _PIC
	if (Priority_Pin == Priority_INTERRUPT_ENABLE)
	{
    	switch (copyControl)
		{
			case GLOBAL_INTERRUPT_ENABLE  : SET_BIT(INTCON_REG, INTCON_GIEH);
    	                                    SET_BIT(INTCON_REG, INTCON_GIEL);
											break;
    	    case GLOBAL_INTERRUPT_DISABLE : CLR_BIT(INTCON_REG, INTCON_GIEH);
											CLR_BIT(INTCON_REG, INTCON_GIEL);
    	                                    break;
    	    default: kErrorState = kFunctionParameterError; break;
		}
	}
	else if (Priority_Pin == Priority_INTERRUPT_DISABLE)
	{
		switch (copyControl)
		{
			case GLOBAL_INTERRUPT_ENABLE  : SET_BIT(INTCON_REG, INTCON_GIE);
    	                                    SET_BIT(INTCON_REG, INTCON_PEIE);
											break;
    	    case GLOBAL_INTERRUPT_DISABLE : CLR_BIT(INTCON_REG, INTCON_GIE);
											CLR_BIT(INTCON_REG, INTCON_PEIE);
    	                                    break;
    	    default: kErrorState = kFunctionParameterError; break;
		}
	}
	#endif
	return kErrorState;
}
#if MCU_TYPE == _PIC
error_t GIC_voidPriorityInterruptControl(uint8_t copyControl)
{
	error_t kErrorState = kNoError;
	switch (copyControl)
	{
		case Priority_INTERRUPT_ENABLE  : SET_BIT(RCON_REG, RCON_IPEN); break;
		case Priority_INTERRUPT_DISABLE : CLR_BIT(RCON_REG, RCON_IPEN); break;
		default: kErrorState = kFunctionParameterError; break;
	}

	return kErrorState;
}
#endif
