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


#if !defined(FIT_TIMESTAMP_CORRELATION_MESG_HPP)
#define FIT_TIMESTAMP_CORRELATION_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class TimestampCorrelationMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 FractionalTimestamp = 0;
       static const FIT_UINT8 SystemTimestamp = 1;
       static const FIT_UINT8 FractionalSystemTimestamp = 2;
       static const FIT_UINT8 LocalTimestamp = 3;
       static const FIT_UINT8 TimestampMs = 4;
       static const FIT_UINT8 SystemTimestampMs = 5;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    TimestampCorrelationMesg(void) : Mesg(Profile::MESG_TIMESTAMP_CORRELATION)
    {
    }

    TimestampCorrelationMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    // Comment: Whole second part of UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of fractional_timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFractionalTimestampValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fractional_timestamp field
    // Units: s
    // Comment: Fractional part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetFractionalTimestamp(void) const
    {
        return GetFieldFLOAT32Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fractional_timestamp field
    // Units: s
    // Comment: Fractional part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    void SetFractionalTimestamp(FIT_FLOAT32 fractionalTimestamp)
    {
        SetFieldFLOAT32Value(0, fractionalTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of system_timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSystemTimestampValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns system_timestamp field
    // Units: s
    // Comment: Whole second part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetSystemTimestamp(void) const
    {
        return GetFieldUINT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set system_timestamp field
    // Units: s
    // Comment: Whole second part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetSystemTimestamp(FIT_DATE_TIME systemTimestamp)
    {
        SetFieldUINT32Value(1, systemTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of fractional_system_timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFractionalSystemTimestampValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fractional_system_timestamp field
    // Units: s
    // Comment: Fractional part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetFractionalSystemTimestamp(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fractional_system_timestamp field
    // Units: s
    // Comment: Fractional part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetFractionalSystemTimestamp(FIT_FLOAT32 fractionalSystemTimestamp)
    {
        SetFieldFLOAT32Value(2, fractionalSystemTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of local_timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLocalTimestampValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns local_timestamp field
    // Units: s
    // Comment: timestamp epoch expressed in local time used to convert timestamps to local time
    ///////////////////////////////////////////////////////////////////////
    FIT_LOCAL_DATE_TIME GetLocalTimestamp(void) const
    {
        return GetFieldUINT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set local_timestamp field
    // Units: s
    // Comment: timestamp epoch expressed in local time used to convert timestamps to local time
    ///////////////////////////////////////////////////////////////////////
    void SetLocalTimestamp(FIT_LOCAL_DATE_TIME localTimestamp)
    {
        SetFieldUINT32Value(3, localTimestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp_ms field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampMsValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetTimestampMs(void) const
    {
        return GetFieldUINT16Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the UTC timestamp at the time the system timestamp was recorded.
    ///////////////////////////////////////////////////////////////////////
    void SetTimestampMs(FIT_UINT16 timestampMs)
    {
        SetFieldUINT16Value(4, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of system_timestamp_ms field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSystemTimestampMsValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns system_timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetSystemTimestampMs(void) const
    {
        return GetFieldUINT16Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set system_timestamp_ms field
    // Units: ms
    // Comment: Millisecond part of the system timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetSystemTimestampMs(FIT_UINT16 systemTimestampMs)
    {
        SetFieldUINT16Value(5, systemTimestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_TIMESTAMP_CORRELATION_MESG_HPP)
