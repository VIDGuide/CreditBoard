/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *  Multi-Coin Credit Board
 *  Michael Saunders - August 2016
 * 
 * Allows a single coin mechanism to coin-up games that expect separate coin triggers (TMNT, Sunset Riders, etc.)
 */

int CreditCounter;
bool CoinInserted;
bool Start1Pressed;
bool Start2Pressed;
bool Start3Pressed;
bool Start4Pressed;


void setup() {
  //pinMode( 12, INPUT );
  //digitalWrite( 12, HIGH );
  CreditCounter = 0;
  CoinInserted = false;
}

void loop() {
  if (CoinInserted) {
    CreditCounter+;
    CoinInserted = false;
  }

  if (CreditCounter > 0) {
    if (Start1Pressed) {
      Start1Pressed = false;
      CreditCounter--;
      //Send pulse to game
    }
    if (Start2Pressed) {
      Start2Pressed = false;
      CreditCounter--;
      //Send pulse to game
    }
    if (Start3Pressed) {
      Start3Pressed = false;
      CreditCounter--;
      //Send pulse to game
    }
    if (Start4Pressed) {
      Start4Pressed = false;
      CreditCounter--;
      //Send pulse to game
    }    
  } else { //ignore button presses if we have no coins
    Start1Pressed = false;
    Start2Pressed = false;
    Start3Pressed = false;
    Start4Pressed = false;
  }
}


// raise interupt upon coin insertion

// raise interupt upon start button press
