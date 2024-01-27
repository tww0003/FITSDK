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


#if !defined(FIT_BUFFERED_RECORD_MESG_BROADCASTER_HPP)
#define FIT_BUFFERED_RECORD_MESG_BROADCASTER_HPP

#include <vector>
#include "fit_buffered_record_mesg_listener.hpp"
#include "fit_buffered_record_mesg.hpp"
#include "fit_record_mesg_listener.hpp"

namespace fit
{

class BufferedRecordMesgBroadcaster : public RecordMesgListener
{
   public:
      BufferedRecordMesgBroadcaster(void);
      void AddListener(BufferedRecordMesgListener& mesgListener);
      void RemoveListener(BufferedRecordMesgListener& mesgListener);
      void OnMesg(RecordMesg& mesg);

   private:
      BufferedRecordMesg bufferedRecordMesg;
      std::vector<BufferedRecordMesgListener*> listeners;
};

} // namespace fit

#endif // !defined(FIT_BUFFERED_RECORD_MESG_BROADCASTER_HPP)
