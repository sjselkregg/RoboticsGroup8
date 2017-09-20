/**
Authors: Dalton Becker & Sam Selkregg
Lab: Maze with Touch Sensors
**/


int LEFT_MOTOR = 0;//controls left motor input
int RIGHT_MOTOR = 3;//controls right motor input
int sensorOne = 15;//digital input which recieves the first sensor
int sensorTwo = 13;//digital input which recieves the second sensor

/*
*Method for moving the forward
*/
void forward()
{
    motor(LEFT_MOTOR, 50);
    motor(RIGHT_MOTOR, -50);
}

/*
*method for turning right
*/
void right()
{
    motor(LEFT_MOTOR, 50);
    motor(RIGHT_MOTOR, 50);
}

/*
*method for turning left
*/
void left()
{
    motor(LEFT_MOTOR, -50);
    motor(RIGHT_MOTOR, -50);
}

/*
*method for going backwards
*/
void back()
{
    motor(LEFT_MOTOR, -50);
    motor(RIGHT_MOTOR, 50);
}

/*
*method for stopping all the motors
*/
void stop()
{
    ao();
}

/*
Main function
*/
void main()
{
    while(start_button())//while start button is true
      {
        //checks if either of the sensors are touched
        if(digital(sensorOne)||digital(sensorTwo)
        {
            //stops the robot, gets it away from the wall, and will turn left
            stop();
            backward();
            sleep(1);
            left();
            sleep(2);
        }
        forward(); //move forward for .3 seconds before checking sensors again
        sleep(.3); 
    }
}
