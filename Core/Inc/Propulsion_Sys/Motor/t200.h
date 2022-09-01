// Note: There two ways to control PWM output:
// 1. TIM2->CCR1 = 1400; The type of TIM2->CCR1 is volatile uint32_t, we can use a pointer to store it.
// ex. volatile uint32_t *ptr = &(TIM2->CCR1);
// 2. __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, 1400);

// * Remember to use HAL_TIM_PWM_Start to start outputing PWM signal.

#ifndef T200_H
#define T200_H

#include <cmath>
#include "stm32f4xx.h"
#include "t200_motor_graph.h"

/**
 * @brief A T200 motor class
 */
class T200
{
private:
    /* data */
    TIM_HandleTypeDef* timer;
    uint32_t channel;

public:
    T200();
    T200(TIM_HandleTypeDef* t, uint32_t c);
    ~T200();
    void set(TIM_HandleTypeDef* t, uint32_t c);
    void output(float force);
};

#endif