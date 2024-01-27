/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2022 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.94Release
// Tag = production/akw/21.94.00-0-g0f668193
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_CRC_HPP)
#define FIT_CRC_HPP

#include "fit.hpp"

namespace fit
{

class CRC
{
   public:
      static FIT_UINT16 Get16(FIT_UINT16 crc, FIT_UINT8 byte);
      static FIT_UINT16 Calc16(const volatile void *data, FIT_UINT32 size);
};


} // namespace fit

#endif // !defined(FIT_CRC_HPP)
