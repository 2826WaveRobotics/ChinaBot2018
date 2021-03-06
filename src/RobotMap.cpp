// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "ctre/Phoenix.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

#define DriveLeft1_Talon 8
#define DriveLeft2_Talon 30
#define DriveLeft3_Talon 33
#define DriveRight1_Talon 29
#define DriveRight2_Talon 41
#define DriveRight3_Talon 35
#define Arm1_Talon 28
#define IntakeLeft_Talon 32
#define IntakeRight_Talon 1
#define Climb_Talon 11

#define intakeSwitch 2


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<frc::Encoder> RobotMap::drivePIDLeftEncoder;
std::shared_ptr<frc::Encoder> RobotMap::drivePIDRightEncoder;
std::shared_ptr<WPI_TalonSRX> RobotMap::drivePIDLeft1;
std::shared_ptr<WPI_TalonSRX> RobotMap::drivePIDLeft2;
std::shared_ptr<WPI_TalonSRX> RobotMap::drivePIDLeft3;
std::shared_ptr<frc::SpeedControllerGroup> RobotMap::drivePIDLeft;
std::shared_ptr<WPI_TalonSRX> RobotMap::drivePIDRight1;
std::shared_ptr<WPI_TalonSRX> RobotMap::drivePIDRight2;
std::shared_ptr<WPI_TalonSRX> RobotMap::drivePIDRight3;
std::shared_ptr<frc::SpeedControllerGroup> RobotMap::drivePIDRight;
std::shared_ptr<frc::DifferentialDrive> RobotMap::drivePIDDifferentialDrive1;
std::shared_ptr<WPI_TalonSRX> RobotMap::armArm1;
std::shared_ptr<frc::AnalogInput> RobotMap::armArmAngle;
std::shared_ptr<WPI_TalonSRX> RobotMap::intakeIntakeLeft;
std::shared_ptr<WPI_TalonSRX> RobotMap::intakeIntakeRight;
std::shared_ptr<frc::Solenoid> RobotMap::intakeOpenIntake;
std::shared_ptr<frc::DigitalInput> RobotMap::intakeIntakeSwitch;
std::shared_ptr<WPI_TalonSRX> RobotMap::climbClimb;
std::shared_ptr<frc::Solenoid> RobotMap::climbClimbRelease;
std::shared_ptr<frc::Compressor> RobotMap::waveCompressorCompressorSubsystem;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

    drivePIDLeftEncoder.reset(new frc::Encoder(0, 1, false, frc::Encoder::k4X));
    drivePIDLeftEncoder->SetDistancePerPulse(1.0);
    drivePIDLeftEncoder->SetPIDSourceType(frc::PIDSourceType::kRate);
    drivePIDRightEncoder.reset(new frc::Encoder(2, 3, false, frc::Encoder::k4X));
    drivePIDRightEncoder->SetDistancePerPulse(1.0);
    drivePIDRightEncoder->SetPIDSourceType(frc::PIDSourceType::kRate);
    drivePIDLeft1.reset(new WPI_TalonSRX(DriveLeft1_Talon));
    
    
    drivePIDLeft2.reset(new WPI_TalonSRX(DriveLeft2_Talon));
    
    
    drivePIDLeft3.reset(new WPI_TalonSRX(DriveLeft3_Talon));
    
    
    drivePIDLeft = std::make_shared<frc::SpeedControllerGroup>(*drivePIDLeft1, *drivePIDLeft2 , *drivePIDLeft3 );
    
    drivePIDRight1.reset(new WPI_TalonSRX(DriveRight1_Talon));
    
    
    drivePIDRight2.reset(new WPI_TalonSRX(DriveRight2_Talon));
    
    
    drivePIDRight3.reset(new WPI_TalonSRX(DriveRight3_Talon));
    
    
    drivePIDRight = std::make_shared<frc::SpeedControllerGroup>(*drivePIDRight1, *drivePIDRight2 , *drivePIDRight3 );
    
    drivePIDDifferentialDrive1.reset(new frc::DifferentialDrive(*drivePIDLeft, *drivePIDRight));
    drivePIDDifferentialDrive1->SetSafetyEnabled(true);
        drivePIDDifferentialDrive1->SetExpiration(0.1);
        drivePIDDifferentialDrive1->SetMaxOutput(1.0);

    armArm1.reset(new WPI_TalonSRX(Arm1_Talon));

    armArmAngle.reset(new frc::AnalogInput(0));
    armArmAngle->SetPIDSourceType(frc::PIDSourceType::kRate);
    intakeIntakeLeft.reset(new WPI_TalonSRX(IntakeLeft_Talon));
    
    
    intakeIntakeRight.reset(new WPI_TalonSRX(IntakeRight_Talon));
    
    
    intakeOpenIntake.reset(new frc::Solenoid(0, 0));
    
    intakeIntakeSwitch.reset(new frc::DigitalInput(intakeSwitch));

    climbClimb.reset(new WPI_TalonSRX(Climb_Talon));
    
    
    climbClimbRelease.reset(new frc::Solenoid(0, 1));
    
    waveCompressorCompressorSubsystem.reset(new frc::Compressor(0));
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
