/*
 
 TankDrive.c - A Basic Tank Drive Framework for RobotC.
 Copyright (C) 2014  Oscar DeVon McCullough
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 */

/**
 name: TankDrive2
 purpose: Implements a 2 motor tank control. Left Side is Channel 3, right side Channel 2. 
 @param tMotor leftMotor: the port for the leftMotor
 @param tMotor rightMotor: the port for the rightMotor
 @param int reverseState: flag indicating which motors are reversed
 @param int joystick: flag indicating which joystick to use.
 */

void TankDrive2(tMotor leftMotor, tMotor rightMotor, int reverseState, int joystick)
{
	switch(reverseState)
	{
		case 0: // No wheel is reversed

		if(joystick == 0)
		{
			motor[leftMotor] = vexRT[Ch3];
			motor[rightMotor] = vexRT[Ch2];
		}
		if(joystick == 1)
		{
			motor[leftMotor] = vexRT[Ch3Xmtr2];
			motor[rightMotor] = vexRT[Ch2Xmtr2];
		}
		break;
		case 1: // Right Wheel is Reversed

		bMotorReflected[rightMotor] = true;

		if(joystick == 0)
		{
			motor[leftMotor] = vexRT[Ch3];
			motor[rightMotor] = vexRT[Ch2];
		}
		if(joystick == 1)
		{
			motor[leftMotor] = vexRT[Ch3Xmtr2];
			motor[rightMotor] = vexRT[Ch2Xmtr2];
		}
		break;

		case 2: // Left Wheel is Reversed

		bMotorReflected[leftMotor] = true;

				if(joystick == 0)
		{
			motor[leftMotor] = vexRT[Ch3];
			motor[rightMotor] = vexRT[Ch2];
		}
		if(joystick == 1)
		{
			motor[leftMotor] = vexRT[Ch3Xmtr2];
			motor[rightMotor] = vexRT[Ch2Xmtr2];
		}
		break;
	}
}

/**
 name: TankDrive4
 purpose: Implements a 4 motor tank control. Left side is Channel 3. Right side is Channel 2. 
 @param tMotor leftMotorF: the port for the left front Motor
 @param tMotor leftMotorR: the port for the left rear Motor
 @param tMotor rightMotorF: the port for the right front Motor
 @param tMotor rightMotorR: the port for the right rear Motor
 @param int reverseState: flag indicating which motors are reversed
 @param int joystick: flag indicating which joystick to use.
 */
void TankDrive4(tMotor leftMotorF, tMotor leftMotorR, tMotor rightMotorF, tMotor rightMotorR, int reverseState, int joystick)
{
	switch(reverseState)
	{
		case 0: // No wheel is reversed

		if(joystick == 0)
		{
			motor[leftMotorF] = vexRT[Ch3];
			motor[leftMotorR] = vexRT[Ch3];
			motor[rightMotorF] = vexRT[Ch2];
			motor[rightMotorR] = vexRT[Ch2];
		}
		if(joystick == 1)
		{
			motor[leftMotorF] = vexRT[Ch3Xmtr2];
			motor[leftMotorR] = vexRT[Ch3Xmtr2];
			motor[rightMotorF] = vexRT[Ch2Xmtr2];
			motor[rightMotorR] = vexRT[Ch2Xmtr2];

		}
		break;
		case 1: // Right Side is Reversed

		bMotorReflected[rightMotorF] = true;
		bMotorReflected[rightMotorR] = true;

		if(joystick == 0)
		{
			motor[leftMotorF] = vexRT[Ch3];
			motor[leftMotorR] = vexRT[Ch3];
			motor[rightMotorF] = vexRT[Ch2];
			motor[rightMotorR] = vexRT[Ch2];
		}
		if(joystick == 1)
		{
			motor[leftMotorF] = vexRT[Ch3Xmtr2];
			motor[leftMotorR] = vexRT[Ch3Xmtr2];
			motor[rightMotorF] = vexRT[Ch2Xmtr2];
			motor[rightMotorR] = vexRT[Ch2Xmtr2];
		}
		break;

		case 2: // Left Wheel is Reversed

		bMotorReflected[leftMotorF] = true;
		bMotorReflected[leftMotorR] = true;

		if(joystick == 0)
		{
			motor[leftMotorF] = vexRT[Ch3];
			motor[leftMotorR] = vexRT[Ch3];
			motor[rightMotorF] = vexRT[Ch2];
			motor[rightMotorR] = vexRT[Ch2];
		}
		if(joystick == 1)
		{
			motor[leftMotorF] = vexRT[Ch3Xmtr2];
			motor[leftMotorR] = vexRT[Ch3Xmtr2];
			motor[rightMotorF] = vexRT[Ch2Xmtr2];
			motor[rightMotorR] = vexRT[Ch2Xmtr2];
		}
		break;
	}
}

