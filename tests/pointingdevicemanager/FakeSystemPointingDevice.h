/* -*- mode: c++ -*-
 *
 * pointing/tests/pointingdevicemanager/FakeSystemPointingDevice.h --
 *
 * Initial software
 * Authors: Izzat Mukhanov
 * Copyright � Inria
 *
 * http://libpointing.org/
 *
 * This software may be used and distributed according to the terms of
 * the GNU General Public License version 2 or any later version.
 *
 */

#ifndef FakeSystemPointingDevice_h
#define FakeSystemPointingDevice_h

#include <pointing/input/SystemPointingDevice.h>

namespace pointing {

  /**
   * FakeSystemPointingDevice is used to test SystemPointingDevice and PointingDeviceManager classes
   */
  class FakeSystemPointingDevice : public SystemPointingDevice
  {
    friend class FakePointingDeviceManager;

  public:

    FakeSystemPointingDevice(URI uri);

    virtual ~FakeSystemPointingDevice();
  } ;

}

#endif