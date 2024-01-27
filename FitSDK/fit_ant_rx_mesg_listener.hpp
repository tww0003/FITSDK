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


#if !defined(FIT_ANT_RX_MESG_LISTENER_HPP)
#define FIT_ANT_RX_MESG_LISTENER_HPP

#include "fit_ant_rx_mesg.hpp"

namespace fit
{

class AntRxMesgListener
{
public:
    virtual ~AntRxMesgListener() {}
    virtual void OnMesg(AntRxMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_ANT_RX_MESG_LISTENER_HPP)
