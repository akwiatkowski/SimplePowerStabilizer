#include "pwm.h"

void pwm_init() {
  // AT90PWM2/3 - datasheet page 142
  
  // TODO: clean it later
  _pwm_tmp();
}

void _pwm_tmp() {
  // PWM value of unit 0
  //OT0 = 0b000000000001;
  
  // page 159 - clock input
  
  // at first, i'll try direct clock, because 8MHz
  //PCLKSEL0 - 0
  //PPRE01 - 0
  //PPRE00 - 0
  
  // enable A output
  PSOC0 = 1 << POEN0A;
  // output compare SA, RA, SB, RB
  
  // 1 << PALOCK1 - update only when RB was rewritten last, page 164
  // 0 << PMODE00 | 0 << PMODE01, one ramp
  // 1 << POP0, high polarity
  // 1 << PCLKSEL0, fast clock
  PCNF0 = 0 << PMODE00 | 0 << PMODE01 | 1 << POP0;
  
  // 0 << PPRE01 | 0 << PPRE00, PSC0 prescaler, 1:1, page 165
  // 1 << PRUN0, run
  PCTL0 = 0 << PPRE01 | 0 << PPRE00 | 1 << PRUN0;
}