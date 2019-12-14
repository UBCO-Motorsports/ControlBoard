/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : canCom1.h
**     Project     : ControlBoard_CORE
**     Processor   : S32K116_48
**     Component   : flexcan
**     Version     : Component SDK_S32K116_00, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K116_00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-12-13, 21:49, # CodeGen: 4
**     Contents    :
**         FLEXCAN_DRV_SetBitrate           - void FLEXCAN_DRV_SetBitrate(uint8_t instance,const flexcan_time_segment_t *...
**         FLEXCAN_DRV_GetBitrate           - void FLEXCAN_DRV_GetBitrate(uint8_t instance,flexcan_time_segment_t * bitrate);
**         FLEXCAN_DRV_SetRxMaskType        - void FLEXCAN_DRV_SetRxMaskType(uint8_t instance,flexcan_rx_mask_type_t type);
**         FLEXCAN_DRV_SetRxFifoGlobalMask  - void FLEXCAN_DRV_SetRxFifoGlobalMask(uint8_t...
**         FLEXCAN_DRV_SetRxMbGlobalMask    - void FLEXCAN_DRV_SetRxMbGlobalMask(uint8_t instance,flexcan_msgbuff_id_type_t...
**         FLEXCAN_DRV_SetRxIndividualMask  - status_t FLEXCAN_DRV_SetRxIndividualMask(uint8_t...
**         FLEXCAN_DRV_Init                 - status_t FLEXCAN_DRV_Init(uint8_t instance,flexcan_state_t * state,const...
**         FLEXCAN_DRV_Deinit               - status_t FLEXCAN_DRV_Deinit(uint8_t instance);
**         FLEXCAN_DRV_ConfigTxMb           - status_t FLEXCAN_DRV_ConfigTxMb(uint8_t instance,uint8_t mb_idx,const...
**         FLEXCAN_DRV_SendBlocking         - status_t FLEXCAN_DRV_SendBlocking(uint8_t instance,uint8_t mb_idx,const...
**         FLEXCAN_DRV_Send                 - status_t FLEXCAN_DRV_Send(uint8_t instance,uint8_t mb_idx,const...
**         FLEXCAN_DRV_AbortTransfer        - status_t FLEXCAN_DRV_AbortTransfer(uint8_t instance,uint8_t mb_idx);
**         FLEXCAN_DRV_ConfigRxMb           - status_t FLEXCAN_DRV_ConfigRxMb(uint8_t instance,uint8_t mb_idx,const...
**         FLEXCAN_DRV_ConfigRxFifo         - void FLEXCAN_DRV_ConfigRxFifo(uint8_t i...
**         FLEXCAN_DRV_ReceiveBlocking      - status_t FLEXCAN_DRV_ReceiveBlocking(uint8_t instance,uint8_t...
**         FLEXCAN_DRV_Receive              - status_t FLEXCAN_DRV_Receive(uint8_t instance,uint8_t...
**         FLEXCAN_DRV_RxFifoBlocking       - status_t FLEXCAN_DRV_RxFifoBlocking(uint8_t instance,flexcan_msgbuff_t *...
**         FLEXCAN_DRV_RxFifo               - status_t FLEXCAN_DRV_RxFifo(uint8_t instance,flexcan_msgbuff_t * data);
**         FLEXCAN_DRV_GetTransferStatus    - status_t FLEXCAN_DRV_GetTransferStatus(uint8_t instance,uint8_t mb_idx);
**         FLEXCAN_DRV_InstallEventCallback - void FLEXCAN_DRV_InstallEventCallback(uint8_t instance,flexcan_callback_t...
**         FLEXCAN_DRV_GetDefaultConfig     - void FLEXCAN_DRV_GetDefaultConfig(flexcan_user_config_t * config);
**         FLEXCAN_DRV_SetRxMb14Mask        - void FLEXCAN_DRV_SetRxMb14Mask(uint8_t instance, flexcan_msgbuff_id_type_t...
**         FLEXCAN_DRV_SetRxMb15Mask        - void FLEXCAN_DRV_SetRxMb15Mask(uint8_t instance, flexcan_msgbuff_id_type_t...
**         FLEXCAN_DRV_ConfigPN             - void FLEXCAN_DRV_ConfigPN(uint8_t instance,bool enable,const...
**         FLEXCAN_DRV_GetWMB               - void FLEXCAN_DRV_GetWMB(uint8_t instance, uint8_t wmbIndex, flexcan_msgbuff_t...
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc.
**     Copyright 2016-2017 NXP
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file canCom1.h
** @version 01.00
*/
/*!
**  @addtogroup canCom1_module canCom1 module documentation
**  @{
*/
#ifndef canCom1_H
#define canCom1_H
/* MODULE canCom1. */

/* Include inherited beans */
#include "clockMan1.h"
#include "dmaController1.h"
#include "Cpu.h"

/*! @brief Device instance number */
#define INST_CANCOM1 (0U)
/*! @brief Driver state structure which holds driver runtime data */
extern flexcan_state_t canCom1_State;
extern const flexcan_user_config_t canCom1_InitConfig0;


#endif
/* ifndef canCom1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/

