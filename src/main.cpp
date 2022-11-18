/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Robotics1                                                 */
/*    Created:      11/18/2022, 8:33:17 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
brain Brain;
controller Controller;

motor frontLeftMotor = motor(PORT1, ratio18_1, true);
motor backLeftMotor = motor(PORT2, ratio18_1, true);
motor frontRightMotor = motor(PORT9, ratio18_1, false);
motor backRightMotor = motor(PORT8, ratio18_1, false);

motor intakeMotor = motor(PORT10, ratio6_1, false);
motor rollerMotor = motor(PORT7, ratio6_1, false);
motor launcherMotor = motor(PORT3, ratio36_1, true);
motor endgameMotor = motor(PORT4, ratio6_1, false);

int main()
{

    Brain.Screen.printAt(10, 50, "Hello V5");

    while (1)
    {
        Brain.Screen.clearScreen();

        Brain.Screen.setCursor(1, 1);
        Brain.Screen.print("Front Left: ");
        Brain.Screen.print(frontLeftMotor.temperature(fahrenheit));

        Brain.Screen.setCursor(2, 1);
        Brain.Screen.print("Back Left: ");
        Brain.Screen.print(backLeftMotor.temperature(fahrenheit));

        Brain.Screen.setCursor(3, 1);
        Brain.Screen.print("Front Right: ");
        Brain.Screen.print(frontRightMotor.temperature(fahrenheit));

        Brain.Screen.setCursor(4, 1);
        Brain.Screen.print("Back Right: ");
        Brain.Screen.print(backRightMotor.temperature(fahrenheit));

        Brain.Screen.setCursor(5, 1);
        Brain.Screen.print("Intake: ");
        Brain.Screen.print(intakeMotor.temperature(fahrenheit));

        Brain.Screen.setCursor(6, 1);
        Brain.Screen.print("Roller: ");
        Brain.Screen.print(rollerMotor.temperature(fahrenheit));

        Brain.Screen.setCursor(7, 1);
        Brain.Screen.print("Launcher: ");
        Brain.Screen.print(launcherMotor.temperature(fahrenheit));

        Brain.Screen.setCursor(8, 1);
        Brain.Screen.print("Endgame: ");
        Brain.Screen.print(endgameMotor.temperature(fahrenheit));

        // Allow other tasks to run
        this_thread::sleep_for(20);
    }
}
