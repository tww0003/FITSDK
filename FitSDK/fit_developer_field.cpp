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


#include "fit_developer_field.hpp"
#include "fit_developer_field_definition.hpp"
#include "fit_unicode.hpp"

namespace fit
{
DeveloperField::DeveloperField(void)
    : FieldBase()
    , mDefinition(nullptr)
{
}

DeveloperField::DeveloperField(const DeveloperField& other)
    : FieldBase(other)
    , mDefinition(nullptr)
{
    if (nullptr != other.mDefinition)
    {
        mDefinition = new DeveloperFieldDefinition(*other.mDefinition);
    }
}

DeveloperField::DeveloperField(const DeveloperFieldDefinition& definition)
    : FieldBase()
    , mDefinition(new DeveloperFieldDefinition(definition))
{
}

DeveloperField::DeveloperField(const FieldDescriptionMesg& definition, const DeveloperDataIdMesg& developer)
    : FieldBase()
    , mDefinition(new DeveloperFieldDefinition(definition, developer, 0))
{
}

DeveloperField::~DeveloperField()
{
    if (nullptr != mDefinition)
    {
        delete mDefinition;
    }
}

FIT_BOOL DeveloperField::GetIsAccumulated() const
{
    return FIT_FALSE;
}

FIT_BOOL DeveloperField::IsValid() const
{
    return nullptr != mDefinition;
}

FIT_UINT8 DeveloperField::GetNum() const
{
    return mDefinition->GetNum();
}

std::string DeveloperField::GetName() const
{
    if (mDefinition->IsDefined())
    {
        return Unicode::Encode_BaseToUTF8(mDefinition->GetDescription().GetFieldName(0));
    }

    return "";
}

FIT_UINT8 DeveloperField::GetType() const
{
    if (mDefinition->IsDefined())
    {
        return mDefinition->GetType();
    }

    return FIT_BASE_TYPE_UINT8;
}

std::string DeveloperField::GetUnits() const
{
    if (mDefinition->IsDefined())
    {
        return Unicode::Encode_BaseToUTF8(mDefinition->GetDescription().GetUnits(0));
    }

    return "";
}

FIT_FLOAT64 DeveloperField::GetScale() const
{
    // Developer fields do not currently support scale
    return 1.0;
}

FIT_FLOAT64 DeveloperField::GetOffset() const
{
    // Developer fields do not currently support offset
    return 0;
}

const Profile::SUBFIELD* DeveloperField::GetSubField(const FIT_UINT16 subFieldIndex) const
{
    // Unused
    (void)subFieldIndex;
    return nullptr;
}

FIT_UINT16 DeveloperField::GetNumSubFields() const
{
    return 0;
}

const Profile::FIELD_COMPONENT* DeveloperField::GetComponent(const FIT_UINT16 component) const
{
    // Unused
    (void)component;
    return nullptr;
}

FIT_UINT16 DeveloperField::GetNumComponents() const
{
    return 0;
}

std::vector<FIT_BYTE> DeveloperField::GetAppId() const
{
    std::vector < FIT_BYTE > returnVal;
    if ( mDefinition->IsDefined() )
    {
        const DeveloperDataIdMesg& developer = mDefinition->GetDeveloper();
        returnVal.resize( developer.GetNumApplicationId() );
        for ( FIT_UINT8 i = 0; i < developer.GetNumApplicationId(); i++ )
        {
            returnVal[i] = developer.GetApplicationId( i );
        }
    }

    return returnVal;
}

FIT_UINT32 DeveloperField::GetAppVersion() const
{
    if ( mDefinition->IsDefined() )
    {
        const DeveloperDataIdMesg& developer = mDefinition->GetDeveloper();
        return developer.GetApplicationVersion();
    }

    return 0;
}

FIT_UINT8 DeveloperField::GetNativeOverride() const
{
    if ( mDefinition->IsDefined() )
    {
        const FieldDescriptionMesg& description = mDefinition->GetDescription();
        FIT_UINT8 nativeNum = description.GetNativeFieldNum();

        if ( FIT_UINT8_INVALID != nativeNum )
        {
            return nativeNum;
        }
    }

    return FIT_FIELD_NUM_INVALID;
}

const DeveloperFieldDefinition& DeveloperField::GetDefinition() const
{
    return *mDefinition;
}
} // namespace fit
