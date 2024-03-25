/*
 * This file is part of INAV.
 *
 * INAV are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * INAV are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"
#include "drivers/sensor.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM3,  CH3, PB0,  TIM_USE_MOTOR, 0, 0), // S1_OUT
    DEF_TIM(TIM3,  CH4, PB1,  TIM_USE_MOTOR, 0, 0), // S2_OUT
    DEF_TIM(TIM2,  CH4, PA3,  TIM_USE_MOTOR, 0, 1), // S3_OUT
    DEF_TIM(TIM2,  CH3, PA2,  TIM_USE_MOTOR, 0, 0), // S4_OUT
    DEF_TIM(TIM8,  CH3, PC8,  TIM_USE_OUTPUT_AUTO | TIM_USE_ANY, 0, 0), // S5_OUT
    DEF_TIM(TIM1,  CH1, PA8,  TIM_USE_OUTPUT_AUTO | TIM_USE_ANY, 0, 0), // S6_OUT

    DEF_TIM(TIM4,  CH1, PB6,  TIM_USE_LED, 0, 0), // LED strip
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
