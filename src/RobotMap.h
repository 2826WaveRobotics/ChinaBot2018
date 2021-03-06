// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"
#include "ctre/Phoenix.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<frc::Encoder> drivePIDLeftEncoder;
	static std::shared_ptr<frc::Encoder> drivePIDRightEncoder;
	static std::shared_ptr<WPI_TalonSRX> drivePIDLeft1;
	static std::shared_ptr<WPI_TalonSRX> drivePIDLeft2;
	static std::shared_ptr<WPI_TalonSRX> drivePIDLeft3;
	static std::shared_ptr<frc::SpeedControllerGroup> drivePIDLeft;
	static std::shared_ptr<WPI_TalonSRX> drivePIDRight1;
	static std::shared_ptr<WPI_TalonSRX> drivePIDRight2;
	static std::shared_ptr<WPI_TalonSRX> drivePIDRight3;
	static std::shared_ptr<frc::SpeedControllerGroup> drivePIDRight;
	static std::shared_ptr<frc::DifferentialDrive> drivePIDDifferentialDrive1;
	static std::shared_ptr<WPI_TalonSRX> armArm1;
	static std::shared_ptr<frc::AnalogInput> armArmAngle;
	static std::shared_ptr<WPI_TalonSRX> intakeIntakeLeft;
	static std::shared_ptr<WPI_TalonSRX> intakeIntakeRight;
	static std::shared_ptr<frc::Solenoid> intakeOpenIntake;
	static std::shared_ptr<frc::DigitalInput> intakeIntakeSwitch;
	static std::shared_ptr<WPI_TalonSRX> climbClimb;
	static std::shared_ptr<frc::Solenoid> climbClimbRelease;
	static std::shared_ptr<frc::Compressor> waveCompressorCompressorSubsystem;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
