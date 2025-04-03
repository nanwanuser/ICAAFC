/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for HeartTask */
osThreadId_t HeartTaskHandle;
const osThreadAttr_t HeartTask_attributes = {
  .name = "HeartTask",
  .stack_size = 256 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for CommunicateTask */
osThreadId_t CommunicateTaskHandle;
const osThreadAttr_t CommunicateTask_attributes = {
  .name = "CommunicateTask",
  .stack_size = 256 * 4,
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for ControllerTask */
osThreadId_t ControllerTaskHandle;
const osThreadAttr_t ControllerTask_attributes = {
  .name = "ControllerTask",
  .stack_size = 256 * 4,
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for NavigationTask */
osThreadId_t NavigationTaskHandle;
const osThreadAttr_t NavigationTask_attributes = {
  .name = "NavigationTask",
  .stack_size = 256 * 4,
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for EstimatorTask */
osThreadId_t EstimatorTaskHandle;
const osThreadAttr_t EstimatorTask_attributes = {
  .name = "EstimatorTask",
  .stack_size = 256 * 4,
  .priority = (osPriority_t) osPriorityLow,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void AppHeartTask(void *argument);
void AppCommunicateTask02(void *argument);
void AppControllerTask(void *argument);
void AppNavigationTask(void *argument);
void AppEstimatorTask(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of HeartTask */
  HeartTaskHandle = osThreadNew(AppHeartTask, NULL, &HeartTask_attributes);

  /* creation of CommunicateTask */
  CommunicateTaskHandle = osThreadNew(AppCommunicateTask02, NULL, &CommunicateTask_attributes);

  /* creation of ControllerTask */
  ControllerTaskHandle = osThreadNew(AppControllerTask, NULL, &ControllerTask_attributes);

  /* creation of NavigationTask */
  NavigationTaskHandle = osThreadNew(AppNavigationTask, NULL, &NavigationTask_attributes);

  /* creation of EstimatorTask */
  EstimatorTaskHandle = osThreadNew(AppEstimatorTask, NULL, &EstimatorTask_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_AppHeartTask */
/**
  * @brief  Function implementing the HeartTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_AppHeartTask */
void AppHeartTask(void *argument)
{
  /* USER CODE BEGIN AppHeartTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END AppHeartTask */
}

/* USER CODE BEGIN Header_AppCommunicateTask02 */
/**
* @brief Function implementing the CommunicateTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_AppCommunicateTask02 */
void AppCommunicateTask02(void *argument)
{
  /* USER CODE BEGIN AppCommunicateTask02 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END AppCommunicateTask02 */
}

/* USER CODE BEGIN Header_AppControllerTask */
/**
* @brief Function implementing the ControllerTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_AppControllerTask */
void AppControllerTask(void *argument)
{
  /* USER CODE BEGIN AppControllerTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END AppControllerTask */
}

/* USER CODE BEGIN Header_AppNavigationTask */
/**
* @brief Function implementing the NavigationTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_AppNavigationTask */
void AppNavigationTask(void *argument)
{
  /* USER CODE BEGIN AppNavigationTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END AppNavigationTask */
}

/* USER CODE BEGIN Header_AppEstimatorTask */
/**
* @brief Function implementing the EstimatorTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_AppEstimatorTask */
void AppEstimatorTask(void *argument)
{
  /* USER CODE BEGIN AppEstimatorTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END AppEstimatorTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

