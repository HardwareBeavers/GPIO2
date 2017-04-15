#include <stdio.h>
#include <wiringPi.h>

#define	WRITE_PIN 1

//wiringPiにてGPIOをコントロール

int main(int argc, char *argv[])
{
	int	i;
	int a; 

	//GPIOのイニシャライズ
	if(wiringPiSetup() == -1){
		printf("Initialization of wiringPi failed.\n");
		return -1;
	}
	pinMode(WRITE_PIN, OUTPUT);

	while(1){
		scanf("%d", &a);
		digitalWrite(WRITE_PIN, a != 0);

		if(a == -1){
			break;
		}
	}
	digitalWrite(WRITE_PIN, 0);
	

	//500msごとに交互に点灯
	//for(i = 0; i < 10; i++){
	//	digitalWrite(WRITE_PIN, i % 2);
	//	delay(500);
	//}

	return 0;
}
