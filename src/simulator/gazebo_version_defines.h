#pragma once

#if GAZEBO_MAJOR_VERSION==7
#define EXTRACT_X(vec) (vec).X()
#define EXTRACT_Y(vec) (vec).Y()
#define EXTRACT_Z(vec) (vec).Z()
#define EXTRACT_POS(pose) (pose).Pos()
#define EXTRACT_ROT(pose) (pose).Rot().Euler()
#define WORLD_POSE(linkptr) (linkptr)->GetWorldPose().Ign()
#define SIM_TIME(modelptr) (modelptr)->GetWorld()->GetSimTime()
#define WORLD_LINEAR_VEL(linkptr) (linkptr)->GetWorldLinearVel().Ign()
#define WORLD_LINEAR_ACCEL(linkptr) (linkptr)->GetWorldLinearAccel().Ign()
#define RELATIVE_ANGULAR_ACCEL(linkptr) (linkptr)->GetRelativeAngularAccel().Ign()
#define EXTRACT_IXX(linkptr) (linkptr)->GetInertial()->GetIXX()
#define EXTRACT_IYY(linkptr) (linkptr)->GetInertial()->GetIYY()
#define EXTRACT_IZZ(linkptr) (linkptr)->GetInertial()->GetIZZ()
#define EXTRACT_MASS(linkptr) (linkptr)->GetInertial()->GetMass()
#elif GAZEBO_MAJOR_VERSION==9
#define EXTRACT_X(vec) (vec).X()
#define EXTRACT_Y(vec) (vec).Y()
#define EXTRACT_Z(vec) (vec).Z()
#define EXTRACT_POS(pose) (pose).Pos()
#define EXTRACT_ROT(pose) (pose).Rot().Euler()
#define WORLD_POSE(linkptr) (linkptr)->WorldPose()
#define SIM_TIME(modelptr) (modelptr)->GetWorld()->SimTime()
#define WORLD_LINEAR_VEL(linkptr) (linkptr)->WorldLinearVel()
#define WORLD_LINEAR_ACCEL(linkptr) (linkptr)->WorldLinearAccel()
#define RELATIVE_ANGULAR_ACCEL(linkptr) (linkptr)->RelativeAngularAccel()
#define EXTRACT_IXX(linkptr) (linkptr)->GetInertial()->IXX()
#define EXTRACT_IYY(linkptr) (linkptr)->GetInertial()->IYY()
#define EXTRACT_IZZ(linkptr) (linkptr)->GetInertial()->IZZ()
#define EXTRACT_MASS(linkptr) (linkptr)->GetInertial()->Mass()
#endif

