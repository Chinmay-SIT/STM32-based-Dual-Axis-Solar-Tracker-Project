#include "stm32f1xx_hal.h"

// Define pins for motors and LDRs
#define SERVO_HORI_PIN GPIO_PIN_0
#define SERVO_VERT_PIN GPIO_PIN_1
#define LDR_TOPL_PIN   GPIO_PIN_4
#define LDR_TOPR_PIN   GPIO_PIN_5
#define LDR_BOTL_PIN   GPIO_PIN_6
#define LDR_BOTR_PIN   GPIO_PIN_7

void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MoveServo(TIM_HandleTypeDef *htim, uint32_t channel, uint16_t position);

int main(void) {
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();

    while (1) {
        int topl = HAL_ADC_GetValue(&hadc1);
        int topr = HAL_ADC_GetValue(&hadc2);
        int botl = HAL_ADC_GetValue(&hadc3);
        int botr = HAL_ADC_GetValue(&hadc4);

        int avgtop = (topl + topr) / 2;
        int avgbot = (botl + botr) / 2;

        if (avgtop < avgbot) {
            MoveServo(&htim1, TIM_CHANNEL_1, 90);
        } else {
            MoveServo(&htim1, TIM_CHANNEL_1, 0);
        }
    }
}
