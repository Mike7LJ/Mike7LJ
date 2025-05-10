#include <stdio.h>

int main()
{
	int speed=50; int speedLimit=40;
	printf("Enter your speed: ");
	scanf("%d", &speed);

	// if there should be a condition
	if (speed > speedLimit +10)
	{
		printf("Your speed is %d, the speed limit is %d! You are speeding by %d!");
		printf("Ticket and possible court summons!\n", speed, speedLimit, speed-speedLimit);
	}
	else if(speed > speedLimit)
	{
		printf("Your speed is %d, the speed limit is %d. You're getting a speed ticket.\n", speed, speedLimit);
	} 
	else if(speed = speedLimit)
		

	return 0;
}