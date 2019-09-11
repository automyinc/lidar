/*
 * LidarInfo.cpp
 *
 *  Created on: Jan 8, 2018
 *      Author: mad
 */

#include <automy/lidar/LidarInfo.hxx>
#include <automy/math/Math3D.h>

using namespace automy::math;


namespace automy {
namespace lidar {

void LidarInfo::update() {
	matrix = translate3(position) * rotate3_xyz_intrinsic(rotation);
}


} // lidar
} // automy
