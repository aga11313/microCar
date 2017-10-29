#include "MicroBit.h"
MicroBit uBit;
int main() {
	uBit.init();
    new MicroBitAccelerometerService(*uBit.ble, uBit.accelerometer);
	release_fiber();
}
